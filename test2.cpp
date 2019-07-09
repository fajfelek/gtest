#include "code2.hpp"
#include "gtest/gtest.h"

TEST(SimpleFunctionTest, shouldReturnFourtyFiveValue)
{
	EXPECT_EQ(45, simpleFunction());
}

TEST(VectorTest, shouldReturnZero)
{
	std::vector<int> v;
	EXPECT_EQ(0, sizeOfVector(v));
}

TEST(VectorTest, shouldReturnTwoAfterPushbackTwoElementsToVector)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	EXPECT_EQ(2, sizeOfVector(v));
}

TEST(VectorTest, shouldReturnZeroAfterPushbackTwoElementsToVectorAndClearVector)
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	EXPECT_EQ(2, sizeOfVector(v));
	v.clear();
	EXPECT_EQ(0, sizeOfVector(v));
}

TEST(PrimesTest, shouldReturnTrueIfNumberIsPrime)
{
	EXPECT_TRUE(isPrime(7));
}

TEST(PrimesTest, shouldReturnFalseIfNumberIsNotPrime)
{
	EXPECT_FALSE(isPrime(9));
}

TEST(PrimesTest, shouldReturnZeroBetweenFiveAndZero)
{
	EXPECT_EQ(0, getNumberOfPrimes(5, 0));
}

TEST(PrimesTest, shouldReturnZeroBetweenZeroAndOne)
{
	EXPECT_EQ(0, getNumberOfPrimes(0, 1));
}

TEST(PrimesTest, shouldReturnOneBetweenTwoAndTwo)
{
	EXPECT_EQ(1, getNumberOfPrimes(2, 2));
}

TEST(PrimesTest, shouldReturnTwentyFiveBetweenOneAndHundred)
{
	EXPECT_EQ(25, getNumberOfPrimes(1, 100));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}

// export GMOCK_DIR=/var/fpwork/stajniak/GOOGLE_TEST/bin/googletest/googlemock
// export GTEST_DIR=/var/fpwork/stajniak/GOOGLE_TEST/bin/googletest/googletest

//g++ -isystem ${GTEST_DIR}/include -isystem ${GMOCK_DIR}/include -std=c++11 -pthread test2.cpp code2.cpp code2.hpp ../libgmock.a -o codeTest2
