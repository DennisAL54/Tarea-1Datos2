#include <iostream>
#include "graph.cpp"

int main()
{
    // Array de las aristas del grafo
    graphEdge edges[] = {
            {0,1,2},{0,2,4},{1,4,3},{2,3,2},{3,1,4},{4,3,3}
    };
    int N = 6;// Numero de vertices
    //Calcula el numero de aristas

    int n = sizeof(edges)/sizeof(edges[0]);

    //Construye el grafo
    DiaGraph diagraph(edges, n, N);

    // imprime la representacion del grafo
    for (int i = 0; i < N; i++)
    {
        matrixformat(diagraph.head[i], i);
    }
    return 0;
}