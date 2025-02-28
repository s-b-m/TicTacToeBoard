/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/
TEST(TicTacToeBoardTest, swapToX)
{
  TicTacToeBoard temp;
  temp.toggleTurn();
  ASSERT_EQ(temp.toggleTurn(), 'X');
}

TEST(TicTacToeBoardText, swapToY)
{
  TicTacToeBoard temp;
  ASSERT_EQ(temp.toggleTurn(), 'O');
}

TEST(TicTacToeBoardTest, swapToNull)
{
  TicTacToeBoard temp;
  ASSERT_NE(temp.toggleTurn(), ' ');
}

TEST(TicTacToeBoardTest, swapToInvalid)
{
  TicTacToeBoard temp;
  ASSERT_NE(temp.toggleTurn(), '?');
}


