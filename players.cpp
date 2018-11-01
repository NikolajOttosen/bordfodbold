#include "players.h"
#include <stdlib.h>
using namespace std;

player::player(string n)
{
    Elo1v1 = 1200;
    Elo2v2 = 1200;
    Name = n;
}

int player::getElo()
{
    return Elo1v1;
}

string player::getName()
{
    return Name;
}

int player::getStreak()
{
    return Winstreak;
}

void player::updateElo(int n, int type)
{
    Elo1v1 = n;
    Elo2v2 = n;
}
