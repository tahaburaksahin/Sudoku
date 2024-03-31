// taha burak sahin PJATK s26941

#pragma once
#include <iostream>
#include <regex>
#include <sstream>
#include "solver.h"
#include "altproj.h"

//main function to run the user interactive game
void playGame(int size, int nobs);
// helper function to prompt user to play again
void playAgainPrompt(int size, int nobs);