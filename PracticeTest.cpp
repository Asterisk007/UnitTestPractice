/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

// Testing longer string
TEST(PracticeTest, is_complex_palindrome)
{
	Practice obj;
    bool actual = obj.isPalindrome("qneivnqwpxnwoxcdngusnmepbjbpemnsugndcxownxpwqnvienq");
    ASSERT_TRUE(actual);
}

// Testing random input, not a palindrome
TEST(PracticeTest, is_not_a_randomized_palindrome)
{
	Practice obj;
    bool actual = obj.isPalindrome("kjenfjsdfighakledfjnioaf");
    ASSERT_FALSE(actual);
}

// Testing precise input, not a palindrome
TEST(PracticeTest, is_not_a_palindrome)
{
	Practice obj;
    bool actual = obj.isPalindrome("whatsthistomfooleryyreloofasdatstahw");
    ASSERT_FALSE(actual);
}

// Testing sortDescending()
// Using all variances of { 1, 2, 3 }
// Total number of possible orders = 3! => 3 * 2 * 1 = 6 => 6 tests
TEST(PracticeTest, sort_numbers_123){
    Practice obj;
    int actual[] = { 1, 2, 3 }; 
    obj.sortDescending(actual[0], actual[1], actual[2]);
    // Should be sorted like so:
    ASSERT_EQ(actual[0], 3);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 1);
}

TEST(PracticeTest, sort_numbers_213){
    Practice obj;
    int actual[] = { 2, 1, 3 }; 
    obj.sortDescending(actual[0], actual[1], actual[2]);
    ASSERT_EQ(actual[0], 3);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 1);
}

TEST(PracticeTest, sort_numbers_213){
    Practice obj;
    int actual[] = { 2, 3, 1 }; 
    obj.sortDescending(actual[0], actual[1], actual[2]);
    ASSERT_EQ(actual[0], 3);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 1);
}

TEST(PracticeTest, sort_numbers_213){
    Practice obj;
    int actual[] = { 3, 2, 1 }; 
    obj.sortDescending(actual[0], actual[1], actual[2]);
    ASSERT_EQ(actual[0], 3);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 1);
}

TEST(PracticeTest, sort_numbers_312){
    Practice obj;
    int actual[] = { 3, 1, 2 };
    obj.sortDescending(actual[0], actual[1], actual[2]);
    ASSERT_EQ(actual[0], 3);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 1);
}   

TEST(PracticeTest, sort_numbers_132){
    Practice obj;
    int actual[] = { 1, 3, 2 }; 
    obj.sortDescending(actual[0], actual[1], actual[2]);
    ASSERT_EQ(actual[0], 3);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 1);
}