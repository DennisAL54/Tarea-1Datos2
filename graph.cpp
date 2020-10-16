//
// Created by dennis on 9/23/20.
//

#include "graph.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include <sys/socket.h>
#include <cstdlib>
#include <netinet/in.h>
#include <cstring>
#define PORT 8080
#include "FloydWarshall.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>


using namespace std;


// guarda elementos en la lista de adyacencia
struct graph::adjNode {
    int val, cost;
    adjNode* next;
};
// usada para guardar aristas
struct graph::graphEdge {
    int start_ver, end_ver, weight;
};

class graph::DiaGraph{
    // inserta nuevos nodos
    adjNode* getAdjListNode(int value, int weight, adjNode* head)   {
        adjNode* newNode = new adjNode;
        newNode->val = value;
        newNode->cost = weight;

        newNode->next = head;
        return newNode;
    }
    int N;  //cantidad de nodos
public:
    adjNode **head;//lista de adyacencia
    // Constructor
    DiaGraph(graphEdge edges[], int n, int N)  {
        //coloca nodos
        head = new adjNode*[N]();
        this->N = N;
        for (int i = 0; i < N; ++i)
            head[i] = nullptr;
        // construye un grafo dirigido
        for (unsigned i = 0; i < n; i++)  {
            int start_ver = edges[i].start_ver;
            int end_ver = edges[i].end_ver;
            int weight = edges[i].weight;
            // insert in the beginning
            adjNode* newNode = getAdjListNode(end_ver, weight, head[start_ver]);

            head[start_ver] = newNode;
        }
    }
    // Destructor
    ~DiaGraph() {
        for (int i = 0; i < N; i++)
            delete[] head[i];
        delete[] head;
    }
};
// imprime todas las vertices adyacentes (esta funcion se usa de modelo para imprimir el grafo en forma de matriz)
void graph::display_AdjList(adjNode* ptr, int i)
{
    while (ptr != nullptr) {
        cout << "(" << i << ", " << ptr->val
             << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}//Funcion utilitaria para transformar matrices en string
string graph::tostring(int grafoI[VS][VS]){
    std::ostringstream stream;
    int m,n;
    for (m = 0; m < VS; m++){
        for (n = 0; n < VS; n++){
            stream << grafoI[m][n] <<'\t';

        }
        stream << '\n';
    }
    return stream.str();
}
int graph::matrixformat(adjNode* ptr, int i){//Funcion para imprimir el grafo en formato matriz
    int grafo[VS][VS];//se inicializa un grafo
    int j;
    while(ptr != nullptr){//Bucle para ciclar por la lista de adyacencia
        for (j = 0; j < VS; j++){
            if(i == j) {
                grafo[i][j] = 0;
            }
            else if(j == ptr->val){
                grafo[i][j] = ptr->cost;
            }
            else{
                grafo[i][j] = INF;//las conexiones no existentes se guardan como INF
            }
        }
        ptr = ptr->next;
    }
    if(i == VS){
        cout<<"Grafo en formato matriz \n";//Imprime la matriz
        for (int j = 0; j < VS; j++)
        {
            for (int k = 0; k < VS; k++)
            {
                if (grafo[j][k] == INF)
                    cout<<"INF"<<"     ";
                else
                    cout<<grafo[j][k]<<"     ";
            }
            cout<<endl;
        }
        floydWarshall(grafo);//Le aplica floyd warshall

        //Parte de la red, prepara el socket del server para enviar el grafo
        string message = tostring(grafo);//Crea un mensaje en formato string
        char c[message.size() + 1];
        strcpy(c, message.c_str());//Transforma el mensaje a formato char
        int server_fd, new_socket, valread;
        struct sockaddr_in address;
        int opt = 1;
        int addrlen = sizeof(address);
        char buffer[1024] = {0};
        char *data = c;
        if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
        {
            perror("socket failed");
            exit(EXIT_FAILURE);
        }

        // Vincula el socket al puerto 8080
        if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                       &opt, sizeof(opt)))
        {
            perror("setsockopt");
            exit(EXIT_FAILURE);
        }
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = INADDR_ANY;
        address.sin_port = htons( PORT );
        if (bind(server_fd, (struct sockaddr *)&address,
                 sizeof(address))<0)
        {
            perror("bind failed");
            exit(EXIT_FAILURE);
        }
        if (listen(server_fd, 3) < 0)
        {
            perror("listen");
            exit(EXIT_FAILURE);
        }
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
                                 (socklen_t*)&addrlen))<0)
        {
            perror("accept");
            exit(EXIT_FAILURE);
        }
        valread = read( new_socket , buffer, 1024);
        printf("%s\n",buffer );
        send(new_socket , data , strlen(data) , 0 );
        printf("Grafo enviado\n");
    }
}