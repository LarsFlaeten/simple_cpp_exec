#include <gtest/gtest.h>

#include <module/Example.h>

class ExampleTest : public ::testing::Test {

protected:
    ExampleTest() { ; }

    virtual ~ExampleTest() { ; }

    // Code here will be called immediately after the constructor (right
    // before each test).
    virtual void SetUp() { ; }

    // Code here will be called immediately after each test (right
    // before the destructor).
    virtual void TearDown() { ; }

	
	example::Example ex;

};



TEST_F(ExampleTest, Test01)
{

	ASSERT_EQ(ex.add(2,3), 5);

} 

