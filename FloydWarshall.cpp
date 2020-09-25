//
// Created by dennis on 9/23/20.
//

#include "FloydWarshall.h"
#include <bits/stdc++.h>
using namespace std;

// Vertices
#define V 5

// define INF o infinito (o un valor muy grande)
#define INF 99999

// Imprime la solucion
void printSolution(int dist[][V]);

//Aplica el algoritmo floyd warshall a un grafo
void floydWarshall (int graph[][V])
{
    // dist[][] es el output. i, j y k son punteros
    int dist[V][V], i, j, k;

    //inicializa la matriz de solucion (output)
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    //agrega los vertices a un grupo de vertices intermedios
    for (k = 0; k < V; k++)
    {
        // toma los vertices uno por uno
        for (i = 0; i < V; i++)
        {
            // Toma todos los vertices como destinos de los vertices seleccionados
            for (j = 0; j < V; j++)
            {
                // si k es el camino mas corto, actualiza el valor de la posicion
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printSolution(dist);
}

//Imprime la solucion recorriendo la matriz
void printSolution(int dist[][V])
{
    cout<<"Distancia mas corta entre todas las vertices \n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout<<"INF"<<"     ";
            else
                cout<<dist[i][j]<<"     ";
        }
        cout<<endl;
    }
}
