#include "gtest/gtest.h"
#include "string_functions.h"

namespace {

    TEST(prefix_function, default_cases) {

	ASSERT_EQ(vector<size_t>({0,0,0,1,2,3,0}), prefix_function({"abcabcd"}));
	ASSERT_EQ(vector<size_t>({0,0,1,2,3,4,0,1,2}), prefix_function({"efefeftef"}));
	ASSERT_EQ(vector<size_t>({0,0,0,1,1,2,0,1,2}), prefix_function({"abbaabdab"}));
	ASSERT_EQ(vector<size_t>({0,0,0,0,0,0,0,0,0}), prefix_function({"abcdefghi"}));
	ASSERT_EQ(vector<size_t>({0,0,0,1,2,1,2,3,0,1,2,1,2,1}), prefix_function({"abbababbdababa"}));
    }

    TEST(prefix_function, empty_str) {

	ASSERT_EQ(vector<size_t>({0}), prefix_function({" "}));
    }

    TEST(prefix_function, single_character_string) {
	    
	ASSERT_EQ(vector<size_t>({0,1,2,3,4,5,6}), prefix_function({"aaaaaaa"}));    
    }


    TEST(KMP, substring_available) {

	ASSERT_EQ(vector<int>({0,2}), KMP({"ab"},{"abab"}));
	ASSERT_EQ(vector<int>({42,78,101,158,266,355,398,421,454,509,529,544,567,701,781,833}), KMP({"test"},{"Step 2. Use the TEST macro to define your tests. TEST has two parameters: the test case name and the test name. After using the macro, you should define your test logic between a pair of braces.  You can use a bunch of macros to indicate the success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are examples of such macros.  For a complete list, see gtest.h. <TechnicalDetails> In Google Test, tests are grouped into test cases.  This is how we keep test code organized.  You should put logically related tests into the same test case. The test case name and the test name should both be valid C++ identifiers.  And you should not use underscore (_) in the names. Google Test guarantees that each test you define is run exactly once, but it makes no guarantee on the order the tests are executed.Therefore, you should write your tests in such a way that their results don't depend on their order. </TechnicalDetails>"}));
    }

    TEST(KMP, substring_unavailable) {
	
	ASSERT_EQ(vector<int>({-1}), KMP({"abc"},{"abab"}));
	ASSERT_EQ(vector<int>({-1}), KMP({"acdef"},{"abcdefgh"}));
	ASSERT_EQ(vector<int>({-1}), KMP({"abcdefgh"},{"abcd"}));
    }
}

int main(int argc, char* argv[]) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

