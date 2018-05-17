#include "gtest/gtest.h"
#include "string_functions.h"

namespace {

    TEST(prefix_function, default_cases) {

        ASSERT_EQ(vector<size_t>({0}), prefix_function({" "}));
	ASSERT_EQ(vector<size_t>({0,0,0,1,2,3,0}), prefix_function({"abcabcd"}));
	ASSERT_EQ(vector<size_t>({0,0,1,2,3,4,0,1,2}), prefix_function({"efefeftef"}));
	ASSERT_EQ(vector<size_t>({0,0,0,1,1,2,0,1,2}), prefix_function({"abbaabdab"}));
	ASSERT_EQ(vector<size_t>({0,0,0,0,0,0,0,0,0}), prefix_function({"abcdefghi"}));
	ASSERT_EQ(vector<size_t>({0,0,0,1,2,1,2,3,0,1,2,1,2,1}), prefix_function({"abbababbdababa"}));
    }

    TEST(KMP, default_cases) {

	ASSERT_EQ(vector<int>({0,2}), KMP({"ab"},{"abab"}));
    }
}

int main(int argc, char* argv[]) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

