#ifndef FOOLGO_SRC_GAME_GAME_H_
#define FOOLGO_SRC_GAME_GAME_H_

#include <log4cplus/loggingmacros.h>
#include <array>
#include <iostream>

#include "../board/force.h"
#include "../board/full_board.h"
#include "../board/position.h"
#include "../def.h"
#include "../player/player.h"

namespace foolgo {
namespace game {

template <board::BoardLen BOARD_LEN>
class Game {
 public:
  virtual ~Game();

  const board::FullBoard<BOARD_LEN>& GetFullBoard() const {
    return full_board_;
  }
  void Run();

 protected:
  Game(const board::FullBoard<BOARD_LEN> &full_board,
       player::Player<BOARD_LEN> *black_player,
       player::Player<BOARD_LEN> *white_player,
       bool only_log_board = true);
  virtual const log4cplus::Logger &GetLogger() const = 0;
 private:
  board::FullBoard<BOARD_LEN> full_board_;
  std::array<player::Player<BOARD_LEN>*, 2> player_ptrs_;
  bool only_log_board_;

  DISALLOW_COPY_AND_ASSIGN_AND_MOVE(Game)
};

template<board::BoardLen BOARD_LEN>
Game<BOARD_LEN>::~Game() {
  for (auto ptr : player_ptrs_) {
    if (ptr != nullptr) {
      delete ptr;
    }
  }
}

template<board::BoardLen BOARD_LEN>
void Game<BOARD_LEN>::Run() {
  const log4cplus::Logger &logger = GetLogger();
  LOG4CPLUS_INFO(logger, "full_board_:" << full_board_.ToString(true));

  while (!full_board_.IsEnd()) {
    board::Force current_force = NextForce(full_board_);
    player::Player<BOARD_LEN> *current_player = player_ptrs_.at(current_force);
    board::PositionIndex next_index = current_player->NextMove(full_board_);
    board::Play(&full_board_, next_index);

    LOG4CPLUS_INFO(
        logger,
        "full_board_:" << full_board_.ToString(next_index, only_log_board_));
  }
}

template<board::BoardLen BOARD_LEN>
Game<BOARD_LEN>::Game(const board::FullBoard<BOARD_LEN> &full_board,
                      player::Player<BOARD_LEN> *black_player,
                      player::Player<BOARD_LEN> *white_player,
                      bool only_log_board)
    : player_ptrs_( { black_player, white_player }),
      only_log_board_(only_log_board) {
  full_board_.Copy(full_board);
}


} /* namespace player */
} /* namespace foolgo */

#endif /* SRC_GAME_GAME_H_ */
