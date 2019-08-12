#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../source/main.h"

using namespace testing;

TEST(testCase, testSet)
{
    EXPECT_EQ(magicNumber(35, 7), 15152535456585);
}

TEST(testCase_2, testSet)
{
    EXPECT_EQ(magicNumber(1, 1), 11);
}

TEST(testCase_3, testSet)
{
    size_t result; // == 22448816326418265214
    result = 22448816326;
    result *= 1000000000;
    result += 418265214;
    EXPECT_EQ(magicNumber(2, 10), result);
}

TEST(testCase_4, testSet)
{
    EXPECT_EQ(magicNumber(0, 13), 0);
}

TEST(testCase_5, testSet)
{
    EXPECT_EQ(magicNumber(11, 6), 111111111111);
}
