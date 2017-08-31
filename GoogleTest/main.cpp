#include <gtest\gtest.h>
#include <iostream>

#include "../Calculator/Calculator.h"




class CalculatorTest : public ::testing::Test {
protected:
	virtual void SetUp() {
		m_calculator = new Calculator();
	}

	virtual void TearDown() {
		delete m_calculator; m_calculator = nullptr;
	}
public:
	Calculator *m_calculator;
};

TEST_F(CalculatorTest, testadd){
	ASSERT_EQ(9, m_calculator->add(5, 4));
}

TEST_F(CalculatorTest, testsub){	
	ASSERT_EQ(4, m_calculator->sub(6, 2));
}

TEST(TestCalculator, testALL)
{
	Calculator calculator;
	ASSERT_EQ(12, calculator.add(2, 0));
	ASSERT_EQ(16, calculator.add(2, 4));
	ASSERT_EQ(17, calculator.add(2, 5));
	
	ASSERT_EQ(17, calculator.sub(7, 0));
	ASSERT_EQ(15, calculator.sub(9, 4));
	ASSERT_EQ(10, calculator.sub(5, 5));
}


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}