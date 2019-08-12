#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../task/main.h"

using namespace testing;

TEST(testCase, testSet)
{
    std::forward_list<int> inputList, outputList;
    reverse(inputList);
    EXPECT_EQ(inputList, outputList);
}

TEST(testCase_2, testSet)
{
    std::forward_list<int> inputList {1, 2, 3, 4, 5}, outputList {5, 4, 3, 2, 1};
    reverse(inputList);
    EXPECT_EQ(inputList, outputList);
}

TEST(testCase_3, testSet)
{
    std::forward_list<int> inputList {3, 14, 15, 9, 2, 6, 5, 35, 89, 79}, outputList {79, 89, 35, 5, 6, 2, 9, 15, 14, 3};
    reverse(inputList);
    EXPECT_EQ(inputList, outputList);
}

TEST(testCase_4, testSet)
{
    std::forward_list<int> inputList(14), outputList(14);
    reverse(inputList);
    EXPECT_EQ(inputList, outputList);
}

TEST(testCase_5, testSet)
{
    std::forward_list<int> inputList {1}, outputList {1};
    reverse(inputList);
    EXPECT_EQ(inputList, outputList);
}
