#include <iostream>

using namespace std;

int difficulty = 10;
char input = 'userNumber';
int lowerBound = 0;              // Lowest possible number left
int upperBound = difficulty + 1; // Highest possible number left
int myGuess = 0;
int lastGuess = -1;

//Last section
int main()
{
    while (MainMenu())
    { // While they say they want to play
        while (PlayGame())
            ; // repeateadly run the game loop
    }
    return 0;
}