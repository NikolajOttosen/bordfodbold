#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include "players.h"
#include <vector>
class leaderboard
{
public:
    leaderboard();
   void addPlayer(player n);
   void updateLeaderboard();
private:
    vector<player> players;
};

#endif // LEADERBOARD_H
