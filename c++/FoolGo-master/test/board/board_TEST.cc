#include "../../src/board/board.h"

#include <gtest/gtest.h>
#include <gtest/internal/gtest-internal.h>
#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>

#include "../def_for_test.h"
#include "../test.h"

namespace foolgo {
namespace board {

using log4cplus::Logger;

namespace {
Logger logger = Logger::getInstance("foolgo.board.BoardTest");
}

class BoardTest : public Test {
 protected:
  virtual void SetUp() {
    Test::SetUp();

    board_.Init();
    board_.SetPoint(Position(3, 3), BLACK_POINT);
    board_.SetPoint(Position(2, 4), WHITE_POINT);
  }

  Board<DEFAULT_BOARD_LEN> board_;
};

TEST_F(BoardTest, DoubleLeftArrow) {
  LOG4CPLUS_INFO(logger, "board:" << board_);
}

TEST_F(BoardTest, Init) {
  Board<DEFAULT_BOARD_LEN> board;
  board.Init();

  for (int i = 0; i < BoardLenSquare<DEFAULT_BOARD_LEN>(); ++i) {
    EXPECT_EQ(board.GetPoint(i), EMPTY_POINT);
  }
}

TEST_F(BoardTest, Copy) {
  Board<DEFAULT_BOARD_LEN> board;
  board_.Copy(board);

  for (int i = 0; i < BoardLenSquare<DEFAULT_BOARD_LEN>(); ++i) {
    EXPECT_EQ(board.GetPoint(i), board_.GetPoint(i));
  }
}

}
}
