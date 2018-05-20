#include "gtest/gtest.h"
#include "string_functions.h"

namespace {

	TEST(shift, default_cases) {
	ASSERT_EQ(523, shift({"Tolstoy was instrumental in bringing a new kind of consciousness to the novel. His narrative structure is noted for its god-like ability to hover over and within events, but also in the way it swiftly and seamlessly portrayed a particular character's point of view. His use of visual detail is often cinematic in scope, using the literary equivalents of panning, wide shots and close-ups. These devices, while not exclusive to Tolstoy, are part of the new style of the novel that arose in the mid-19th century and of which Tolstoy proved himself a master."},{"Tolstoy proved himself a master.Tolstoy was instrumental in bringing a new kind of consciousness to the novel. His narrative structure is noted for its god-like ability to hover over and within events, but also in the way it swiftly and seamlessly portrayed a particular character's point of view. His use of visual detail is often cinematic in scope, using the literary equivalents of panning, wide shots and close-ups. These devices, while not exclusive to Tolstoy, are part of the new style of the novel that arose in the mid-19th century and of which "}));
}
}

int main(int argc, char* argv[]) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
