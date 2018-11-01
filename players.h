#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
using namespace std;

class player
{
public:
    player(string n);
   int getElo();
   string getName();
   int getStreak();
   void updateElo(int n, int type);
private:
    string Name;
    int Elo1v1;
    int Elo2v2;
    int Winstreak;
};

#endif // PLAYERS_H
