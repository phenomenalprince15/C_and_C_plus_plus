#include "point.h"
#include <gtest/gtest.h>

TEST(Point, distanceFromOrigin)
{
  Point p1(4.0, 3.0);
  EXPECT_EQ(5.0, p1.distanceFromOrigin());

  Point p2(-12, 5);
  EXPECT_EQ(13, p2.distanceFromOrigin());

  Point p3(15, -8);
  EXPECT_EQ(17, p3.distanceFromOrigin());
}
TEST(Point, isOrigin)
{
  Point p1(0, 0);
  EXPECT_TRUE(p1.isOrigin());
  Point p2(1, 0);
  EXPECT_FALSE(p2.isOrigin());
  Point p3(0, -1000);
  EXPECT_FALSE(p3.isOrigin());
}

TEST(point, isOnXAxis)
{
  Point p1(2, 0);
  EXPECT_FALSE(p1.isOnXAxis());

  Point p2(0,  10);
  EXPECT_TRUE(p2.isOnXAxis());

  Point p3(0, 0);
  EXPECT_TRUE(p3.isOnXAxis());
}

TEST(Point, isOnYAxis)
{
  Point p1(0, 2);
  EXPECT_FALSE(p1.isOnYAxis());

  Point p2(-10, 0);
  EXPECT_TRUE(p2.isOnYAxis());

  Point p3(0, 0);
  EXPECT_TRUE(p3.isOnYAxis());
}

TEST(Point, QuadrantCheck)
{
  Point p1(2, 3);
  EXPECT_EQ(Q1, p1.quadrant());

  Point p2(-56, 3);
  EXPECT_EQ(Q2, p2.quadrant());

  Point p3(10000, -3);
  EXPECT_EQ(Q4, p3.quadrant());

  Point p4(-1, -300);
  EXPECT_EQ(Q3, p4.quadrant());

  Point p5(0, 3);
  EXPECT_EQ(Y_axis, p5.quadrant());

  Point p6(2, 0);
  EXPECT_EQ(X_axis, p6.quadrant());

  Point p7(0, 0);
  EXPECT_EQ(Origin, p7.quadrant());
}

int main()
{
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}