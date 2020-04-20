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