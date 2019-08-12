#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../source/main.h"

using namespace testing;

TEST(testCase, testSet)
{
    std::vector<int> firstVector, secondVector, resultVector;
    EXPECT_TRUE(resultVector == combineVectors(firstVector.begin(), firstVector.end(),
                                               secondVector.begin(), secondVector.end()));
}

TEST(testCase_2, testSet)
{
    std::vector<int> firstVector, secondVector, resultVector;
    secondVector = {13, 333, 4, INT32_MAX, INT32_MIN, 0};
    resultVector = secondVector;
    EXPECT_TRUE(resultVector == combineVectors(firstVector.begin(), firstVector.end(),
                                               secondVector.begin(), secondVector.end()));
}

TEST(testCase_3, testSet)
{
    std::vector<int> firstVector, secondVector, resultVector;
    firstVector = {INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, INT32_MIN};
    secondVector = {INT32_MIN, 0, INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN};
    resultVector = {INT32_MAX, INT32_MAX, INT32_MAX, INT32_MAX, INT32_MIN, INT32_MIN, 0, INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN, INT32_MIN};
    EXPECT_TRUE(resultVector == combineVectors(firstVector.begin(), firstVector.end(),
                                               secondVector.begin(), secondVector.end()));
}

TEST(testCase_4, testSet)
{
    std::vector<int> firstVector, secondVector, resultVector;
    firstVector = {0};
    resultVector = {0};
    EXPECT_TRUE(resultVector == combineVectors(firstVector.begin(), firstVector.end(),
                                               secondVector.begin(), secondVector.end()));
}

TEST(testCase_5, testSet)
{
    std::vector<int> firstVector, secondVector, resultVector;
    firstVector = {1, 2, 3, 4, 5};
    secondVector = {6, 7, 8, 9, 0};
    resultVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    EXPECT_TRUE(resultVector == combineVectors(firstVector.begin(), firstVector.end(),
                                               secondVector.begin(), secondVector.end()));
}
