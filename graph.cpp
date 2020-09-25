//
// Created by dennis on 9/23/20.
//

#include "graph.h"
#include <iostream>
#include "FloydWarshall.cpp"
using namespace std;
// guarda elementos en la lista de adyacencia
struct adjNode {
    int val, cost;
    adjNode* next;
};
// usada para guardar aristas
struct graphEdge {
    int start_ver, end_ver, weight;
};
class DiaGraph{
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
void display_AdjList(adjNode* ptr, int i)
{
    while (ptr != nullptr) {
        cout << "(" << i << ", " << ptr->val
             << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}
int matrixformat(adjNode* ptr, int i){//Funcion para imprimir el grafo en formato matriz
    int grafo[V][V];//se inicializa un grafo
    int j;
    while(ptr != nullptr){//Bucle para ciclar por la lista de adyacencia
        for (j = 0; j < V; j++){
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
    if(i == V){
        cout<<"Grafo en formato matriz \n";//Imprime la matriz
        for (int j = 0; j < V; j++)
        {
            for (int k = 0; k < V; k++)
            {
                if (grafo[j][k] == INF)
                    cout<<"INF"<<"     ";
                else
                    cout<<grafo[j][k]<<"     ";
            }
            cout<<endl;
        }
        floydWarshall(grafo);//Le aplica floyd warshall
    }
}