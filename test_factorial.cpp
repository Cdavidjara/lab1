// test_factorial.cpp
#include "gtest/gtest.h"
extern "C" {
    #include "factorial.h"
}

TEST(FactorialTest, PositiveNumbers) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(7), 5040);
}

TEST(FactorialTest, NegativeNumbers) {
    EXPECT_EQ(factorial(-3), -1);
}
