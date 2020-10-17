//
// Created by dennis on 10/16/20.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "graph.h"
#include "FloydWarshall.h"
#include <iostream>
#include <string>

struct graphTests : testing::Test{
    graph* grafoPrueba;
    graphTests(){
        grafoPrueba = new graph;
    }
    ~graphTests(){
        delete grafoPrueba;
    }
};

TEST_F(graphTests, string1){
    int prueba[5][5];
    EXPECT_STREQ("{{1}}", grafoPrueba->tostring(prueba));
}

struct floydTests: testing::Test{
    int floydTesting[][];
    floydTests(){
        floydTesting = { {0,   5,  INF, 10},
                         {INF,  0,  3,  INF},
                         {INF, INF, 0,   1},
                         {INF, INF, INF, 0} };
    };

};

TEST_F(floydTests, string){

    EXPECT_STREQ(      "0      5      8      9  INF      0      3      4 INF    INF      0      1 INF    INF    INF      0", FloydWarshall(floydTesting));

}

struct tostringTest: testing::Test{
    int stringTest[][];
    tostringTest(){
        stringTest = { {0,   5,  INF, 10},
                       {INF,  0,  3,  INF},
                       {INF, INF, 0,   1},
                       {INF, INF, INF, 0} };
    }

};

TEST_F(tostringTest, string){

    EXPECT_STREQ("(0,   5,  INF, 10),(INF,  0,  3,  INF),(INF, INF, 0,   1),(INF, INF, INF, 0)",tostring(stringTest));

}

