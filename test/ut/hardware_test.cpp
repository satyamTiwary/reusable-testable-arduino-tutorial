#include "Hardware.h"
#include "gtest/gtest.h"

TEST(hardware_test, add_WhenPositiveArguments_WillReturnCorrectSum) {
  const auto expectedResult = 52;
  EXPECT_EQ(hardware::add(50, 2), expectedResult);
}

TEST(hardware_test, add_WhenNegativeArguments_WillReturnCorrectSum) {
  // TODO: Write this test
}

TEST(hardware_test, add_WhenMixedSignArguments_WillReturnCorrectSum) {
  // TODO: Write this test
}

TEST(hardware_test, subtract_WhenPositiveArguments_WillReturnCorrectSum) {
  // TODO: Write this test
}

TEST(hardware_test, subtract_WhenNegativeArguments_WillReturnCorrectSum) {
  // TODO: Write this test
}

TEST(hardware_test, subtract_WhenMixedSignArguments_WillReturnCorrectSum) {
  // TODO: Write this test
}

TEST(hardware_test, divide_WhenExactDivision_WillReturnCorrectResult) {
  // TODO: Write this test
}

TEST(hardware_test, divide_WhenNotExactDivision_WillReturnCorrectResult) {
  // TODO: Write this test (is the implementation correct though?)
}

TEST(hardware_test, divide_WhenDivisionByZero_WillCrash) {
  EXPECT_DEATH(hardware::divide(1, 0), "");
}