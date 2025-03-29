#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Board.h"
#include "Player.h"
#include "RandomPlayer.h"
#include "Straightplayer.h"

using namespace std;

class Game {
    private:
        //Board board; // The game board
    public:
        int startGame(); // Starts the game
};

int Game::startGame() {
    int answer;
    cin >> answer;

    if(answer == 1) {
        Player pvp;
        pvp.playGame();
    }

    else if(answer == 2) {
        RandomPlayer pvr;
        pvr.randomPlay();
    }
    else if(answer == 3) {
        Straightplayer pvs;
        pvs.StraightvRandom();
    }
    else {
        cout << "Invalid choice. Please try again." << endl;
        return startGame(); // Restart the game if invalid choice
    }
    return 0;
};
#endif // GAME_H