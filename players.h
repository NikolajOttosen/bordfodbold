#ifndef PLAYERS_H
#define PLAYERS_H


class player
{
public:
    player();
    getElo();
    getName();
    getStreak();

    //SHP ADDED THIS
private:
    string Name;
    int Elo;
    int Winstreak;
};

#endif // PLAYERS_H
