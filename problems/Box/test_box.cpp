#include "box.h"
#include <gtest/gtest.h>
namespace {
TEST(Box, Empty_Constructor) {
    Box B1;
  EXPECT_EQ(0, B1.length());
  EXPECT_EQ(0, B1.breadth());
  EXPECT_EQ(0, B1.height());
}


TEST(Box, Parameterized_Constructor) {
    Box B1(1.1,2.2,3.3);
  EXPECT_EQ(1.1, B1.length());
  EXPECT_EQ(2.2, B1.breadth());
  EXPECT_EQ(3.3, B1.height());
}

TEST(Box, Copy_Constructor) {
    Box B1(1.1,2.2,3.3);
    Box B2(B1);
  EXPECT_FLOAT_EQ(1.1, B2.length());
  EXPECT_FLOAT_EQ(2.2, B2.breadth());
  EXPECT_FLOAT_EQ(3.3, B2.height());
}

TEST(Box, Box_Volume) {
    Box B1(1.0,2.0,3.0);
    Box B2(B1);
  EXPECT_FLOAT_EQ(1.0, B2.length());
  EXPECT_FLOAT_EQ(2.0, B2.breadth());
  EXPECT_FLOAT_EQ(3.0, B2.height());
  EXPECT_FLOAT_EQ(6.0, B2.volume());
}
}