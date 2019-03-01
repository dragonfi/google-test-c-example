
#include <gtest/gtest.h>

extern "C" {
#include <vec2.h>
}

TEST (TestTesting, Truisms) {
    EXPECT_EQ (0, 0);
    EXPECT_EQ (100, 90 + 10);
}

vec2_t v1 = {1, 2};
vec2_t v2 = {5, 3};
vec2_t expected = {6, 5};

TEST (TestVec2, Addition) {
    ASSERT_EQ (expected.x, vec2_add(v1, v2).x);
    ASSERT_EQ (expected.y, vec2_add(v1, v2).y);
}
