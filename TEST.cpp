//
// Created by dennis on 10/16/20.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "graph.h"

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
    int prueba[1][1];
    EXPECT_STREQ("{{1}}", grafoPrueba->tostring(prueba));
}

