//
// Created by dennis on 9/23/20.
//
//#include "FloydWarshall.cpp"

#ifndef TAREA_1DATOS2_FLOYDWARSHALL_H
#define TAREA_1DATOS2_FLOYDWARSHALL_H

#define VS 5
#define INF 999

class FloydWarshall {
    void floydWarshall (int graph[][VS]);

    void printSolution(int dist[][VS]);
};


#endif //TAREA_1DATOS2_FLOYDWARSHALL_H
