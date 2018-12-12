//
// Created by davidshelton on 12/12/2018.
//

#include "game.h"

void Game::roll(int frame)
{
    score += frame;
}
/**
 *
 * Returns final game score
 */
int Game::scoreGame()
{
    return score;
}
