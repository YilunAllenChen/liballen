#include <gtest/gtest.h>
#include <liballen/liballen.hpp>

TEST(LibAllen, Greet) {
    EXPECT_EQ(liballen::greet("world"), "Hello, world!");
}
