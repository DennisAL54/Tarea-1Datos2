#include <iostream>
#include "graph.cpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

/*struct graphTests : testing::Test{
    graph* grafoPrueba;
    graphTests(){
        grafoPrueba = new graph;
    }
    ~graphTests(){
        delete grafoPrueba;
    }
};

TEST_F(graphTests, string1){
    //int prueba[1][1];
    EXPECT_STREQ("{{1}}", "{{1}}");
}*/

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
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