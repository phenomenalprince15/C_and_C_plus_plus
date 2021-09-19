#include <gtest/gtest.h>
#include "circle.h"

TEST(TestCircle, Empty_Ctor) {
    circle c1;
    ASSERT_FLOAT_EQ(1.0, c1.get_radius());

    c1.set_radius(10);
    ASSERT_FLOAT_EQ(10, c1.get_radius());
}
TEST(TestCircle, Param_Ctor) {
    circle c1(2.5);
    ASSERT_FLOAT_EQ(2.5, c1.get_radius());

    c1.set_radius(10);
    ASSERT_FLOAT_EQ(10, c1.get_radius());
}
TEST(TestCircle, Copy_Ctor) {
    circle c1(2.5);
    circle c2(c1);
    ASSERT_FLOAT_EQ(2.5, c2.get_radius());
}

int main(int argc, char **argv) { // argv[][], *argv[]
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// pthread, gtest_main & gtest
// g++ circle.cpp test_circle.cpp -lgtest -lgtest_main -lpthread