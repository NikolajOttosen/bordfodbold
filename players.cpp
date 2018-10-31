#include "players.h"
#include <stdlib.h>
using namespace std;

player::player(string n)
{
    Name = n;
}

player::getElo()
{
    return Elo;
}

player::getName()
{
    return Name;
}

player::getStreak()
{
    return Winstreak;
}


