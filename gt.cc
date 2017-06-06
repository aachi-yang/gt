#include <iostream>
#include "add.h"

//using namespace std; 

TEST(AddTest, TwoAndTwo)
{
    ASSERT_EQ(Add(2, 2), 4);
}

TEST(AddTest, TwoAndOne)
{
    ASSERT_EQ(Add(2, 1), 3);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

