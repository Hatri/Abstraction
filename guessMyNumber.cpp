#include <iostream>

using namespace std;

int difficulty = 10;
char input = 'userNumber';
int lowerBound = 0;              // Lowest possible number left
int upperBound = difficulty + 1; // Highest possible number left
int myGuess = 0;
int lastGuess = -1;

bool MainMenu()
{
    cout << "Welcome to 'Guess my Number!'" << endl
         << endl;
    while (true)
    {
        cout << "1. Play" << endl;
        cout << "2. Exit" << endl;
        cout << ">";
        cin >> input;

        if (input == '1')
            return true; // Starts the game.
        else if (input == '2')
            return false; // Quits the game
    }
}

bool PlayGame()
{
    ShowStory();

    ResetGame(); // Reset all variable to original values

    while (input != 'y')
    { // This is the main game loop
        UpdateWorld();

        DrawGraphics();

        GetInput();
    }
    return GameOverScreen();
}

void ShowStory()
{
    input = 'n';

    cout << "Once upon a time..." << endl;
    cout << "You thought of a number between 0 and " << difficulty << endl;
    while (input != 'y')
    {
        cout << "Have you got one (y/n)?";
        cin >> input;
        if (input != 'y')
            cout << "Ok... I'll wait until you're ready." << endl;
    }
    cout << endl;
}

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