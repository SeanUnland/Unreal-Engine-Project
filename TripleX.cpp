#include <iostream>

int main()
{

    // this is the same as console.log(), welcome messages to the terminal
    std::cout << "You are a secret agent breaking into  a secure server room...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";

    // declare three number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "These codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You win!" << std::endl;
    }

    else {
        std::cout << "You lost!" << std::endl;
    }

    return 0;
}

