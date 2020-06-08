#include "greeter.h"

#include "gtest/gtest.h"

namespace helloworldtests {
  // The fixture for testing class Foo.
  class BasicTest : public ::testing::Test {
  protected:
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    BasicTest() {
      // You can do set-up work for each test here.
    }

    ~BasicTest() override {
      // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override {
      // Code here will be called immediately after the constructor (right
      // before each test).
    }

    void TearDown() override {
      // Code here will be called immediately after each test (right
      // before the destructor).
    }

    // Class members declared here can be used by all tests in the test suite
    // for Foo.
  };

  // Tests that the Greeter:sayHello works with empty string param
  TEST_F(BasicTest, blankParam) {
    Greeter g;
    EXPECT_EQ(g.sayHello(""), "Hello ");
  }
  // Tests that the Greeter:sayHello works with non-empty string param
  TEST_F(BasicTest, nonBlankParam) {
    Greeter g;
    EXPECT_EQ(g.sayHello("world"), "Hello world");
  }
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
