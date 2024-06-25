//
// C++20 CLI Template
// Copyright (c) Phillip Cooper | https://moonhappy.io
//
// This code is licensed under MIT license (see LICENSE for details)
//

// ATTRIBUTION: 
// https://github.com/google/googletest
// https://google.github.io/googletest/quickstart-cmake.html
// Copyright (c) Google Inc.

#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}
