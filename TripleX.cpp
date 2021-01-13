#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty) {
     // this is the same as console.log(), welcome messages to the terminal
    std::cout << "\n\nYou are a secret agent breaking into  a level " << Difficulty;
    std::cout << " secure server room...\nYou need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // declare three number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand()% Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code\n";
    std::cout << "\nThese codes add up to: " << CodeSum;
    std::cout << "\nThe codes multiply to give: " << CodeProduct << std::endl;

    // Store Player Guess 
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    std::cout << "\nYou entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is right
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "\nOnto The Next Level!" << std::endl;
        return true;
    }
    else 
    {
        std::cout << "\nPlease Retry!" << std::endl;
        return false;
    }

}

int main()
{
    srand(time(NULL)); // creates new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MaxLevel = 10;

    while (LevelDifficulty <= MaxLevel) // Loop the game until all levels are completed
    {
        
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the Buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\nCongratulations on Completing the Game!\n";

    return 0;
}

