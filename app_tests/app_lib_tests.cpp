
#include <gtest/gtest.h>

extern "C" {
#include <vec2.h>
}


TEST (TestTestEnv, Truisms) {
    EXPECT_EQ (0, 0);
    EXPECT_GT (1, 0);
    EXPECT_LT('a', 'z');
    EXPECT_TRUE("");
    EXPECT_FALSE(0);
    printf("Printing something from the test body...\n");
    SUCCEED() << "SUCCEED() has been invoked from here";
    EXPECT_EQ(1, 2) << "This test fails in order to demonstrate alternative failure messages";
}

TEST (TestVec2, AddPositiveValues) {
    vec2_t v1 = {1, 2};
    vec2_t v2 = {5, 3};
    vec2_t expected = {6, 5};

    ASSERT_EQ (expected.x, vec2_add(v1, v2).x);
    ASSERT_EQ (expected.y, vec2_add(v1, v2).y);
}

TEST (TestVec2, AddNegativeValues) {
    vec2_t a = {10, 20};
    vec2_t b = {-10, -15};
    vec2_t c = vec2_add(a, b);

    ASSERT_EQ (c.x, 0);
    ASSERT_EQ (c.y, 5);
}
