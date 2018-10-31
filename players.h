#ifndef PLAYERS_H
#define PLAYERS_H


class player
{
public:
    player();
    getElo();
    getName();
    getStreak();
private:
    string Name;
    int Elo;
    int Winstreak;
};

#endif // PLAYERS_H
