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
	EXPECT_EQ(9, m_calculator->add(5, 4));
}

TEST_F(CalculatorTest, testsub){	
	EXPECT_EQ(4, m_calculator->sub(6, 2));
}

TEST(TestCalculator, testALL)
{
	Calculator calculator;
	EXPECT_EQ(2, calculator.add(2,0));
	EXPECT_EQ(6, calculator.add(2,4));
	EXPECT_EQ(7, calculator.add(2,5));
	
	EXPECT_EQ(7, calculator.sub(7, 0));
	EXPECT_EQ(5, calculator.sub(9, 4));
	EXPECT_EQ(0, calculator.sub(5, 5));
}


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	system("PAUSE");
	return 0;
}