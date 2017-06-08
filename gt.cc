#include <iostream>
#include "add.h"
#include "sub.h"

//using namespace std; 

TEST(AddTest, TwoAndTwo)
{
    printf("AddTest ------------------->\n");
    ASSERT_EQ(Add(2, 2), 4);
}

TEST(SubTest, TwoAndOne)
{
    printf("SubTest ------------------->\n");
    ASSERT_EQ(sub(2, 1), 1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

