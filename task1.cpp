#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;

    int guess;
    while(true){
        std::cout << " Guess the number between (1 and 100): ";
        std::cin >> guess;

        
        if (guess == randomNumber) {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n"; 
        } else {
            std::cout << "Too high try again.\n";
        }

    } 

    return 0;
}
