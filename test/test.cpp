#include <gtest/gtest.h>
#include "Stack.h"

TEST(Stack_Functions, can_top) {
  Stack St;
  St.push(6);

  EXPECT_EQ(St.gettop(), 6);
}

TEST(Stack_Functions, can_pop) {
  Stack St;
  St.push(6);
  St.push(10);
  St.pop();

  EXPECT_EQ(St.gettop(), 6);
}

TEST(Stack_Functions, can_pop_empty_stack) {
  Stack St;

  EXPECT_FALSE(St.pop());
}

TEST(Stack_Functions, can_push) {
  Stack St;
  St.push(10);

  EXPECT_EQ(St.gettop(), 10);
}

TEST(Stack_Functions, can_find_min) {
  Stack St;
  for (int i = 3; i < 10; i++)
    St.push(i);

  EXPECT_EQ(St.min(), 3);
}

TEST(Stack_Functions, throw_when_top_from_empty_stack) {
  Stack St;

  EXPECT_ANY_THROW(St.gettop());
}

TEST(Stack_Functions, throw_when_find_min_from_empty_stack) {
  Stack St;

  EXPECT_ANY_THROW(St.min());
}

int main(int ac, char* av[]) {
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}
