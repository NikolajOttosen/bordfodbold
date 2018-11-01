#include <fstream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include "players.h"
#include "leaderboard.h"
#include <iostream>

using namespace std;

//L.addPlayer(N);
//L.addPlayer(S);


bool operator==(player P1, player P2)
{
    if (P1.getName() == P2.getName())
        return true;
}

void updaterating(player P1, player P2, player winner)
{
  int var = 0;
  int R1 = pow(10,P1.getElo()/400);
  int R2 = pow(10,P2.getElo()/400);
  int E1 = R1/(R1+R2);
  int E2 = R2/(R2+R1);
   if(winner == P1)
   {
     int  var = 1;
   }
   else
     int  var = 0;
  int r1 = P1.getElo() + 32 * (var - E1);
  int r2 = P2.getElo() + 32 * ((1-var) - E2);
   P1.updateElo(r1,1);
   P2.updateElo(r2,1);
}


int main()
{
    //updaterating(players[0], players[1]);

    player N("Niko");
    player S("Soren");
    leaderboard L;
    player S2("Soren");
    if(S == S2)
        cout << "hello" << endl;

    return 0;
}
