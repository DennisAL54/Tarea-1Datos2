//
// Created by dennis on 9/23/20.
//
#include <cstring>
#include <iostream>
#include "FloydWarshall.h"
#ifndef TAREA_DATOS_2_GRAPH_H
#define TAREA_DATOS_2_GRAPH_H


using namespace std;

class graph {
public:
    struct graphEdge;
    struct adjNode;
    class DiaGraph;
    string tostring(int grafoI[VS][VS]);
    void display_AdjList(adjNode* ptr, int i);
    struct graphEdge;
    int matrixformat(adjNode* ptr, int i);
};


#endif //TAREA_DATOS_2_GRAPH_H
