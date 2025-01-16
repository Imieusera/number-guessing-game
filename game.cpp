#include <iostream>
#include <random>
#include <ctime>
int main() {
    int choice;
    int guess;
    int ans;
    int i;

    srand(time(NULL));

    std::cout << "Welcome to the Number Guessing Game!\n"
                 "I'm thinking of a number between 1 and 100.\n"
                 "You have a limited number of chances to guess the correct number.\n";

    do {
        i = 0;

        std::cout << "\nPlease select the difficulty level:\n"
                     "1. Easy (10 chances)\n"
                     "2. Medium (5 chances)\n"
                     "3. Hard (3 chances)\n"
                     "\nEnter your choice: ";
        std::cin >> choice;
        std::cout << std::endl;

        if (choice < 1 || choice > 3) {
            std::cout << "Incorrect answer. Please try again.\n";
        }
    } while (choice < 1 || choice > 3);

    std::cout << "Great! You have selected the ";
    switch (choice) {
        case 1: std::cout << "Easy"; break;
        case 2: std::cout << "Medium"; break;
        case 3: std::cout << "Hard"; break;
    }
    std::cout << " difficulty level.\nLet's start the game!\n";
    switch (choice) {
        case 1:
            ans = rand() % 100;
            while (i < 10) {
                std::cout << "Enter your guess:";
                std::cin >> guess;
                if (guess == ans) {
                    std::cout << "Congratulations! You guessed the correct number in " << i+1 << " attempts.\n\n";
                    break;
                } else if (ans < guess) {
                    std::cout << "Incorrect! The number is less than " << guess << ".\n\n";
                } else if (ans > guess) {
                    std::cout << "Incorrect! The number is greater than " << guess << ".\n\n";
                }
                i++;
            }
            std::cout << "End of attempts!" << std::endl;
        break;
        case 2:
            ans = rand() % 100;
            while (i < 5) {
                std::cout << "Enter your guess:";
                std::cin >> guess;
                if (guess == ans) {
                    std::cout << "Congratulations! You guessed the correct number in " << i+1 << " attempts.\n\n";
                    break;
                } else if (ans < guess) {
                    std::cout << "Incorrect! The number is less than " << guess << ".\n\n";
                } else if (ans > guess) {
                    std::cout << "Incorrect! The number is greater than " << guess << ".\n\n";
                }
                i++;
            }
            std::cout << "End of attempts!" << std::endl;
        break;
        case 3:
            ans = rand() % 100;
            while (i < 3) {
                std::cout << "Enter your guess:";
                std::cin >> guess;
                if (guess == ans) {
                    std::cout << "Congratulations! You guessed the correct number in " << i+1 << " attempts.\n\n";
                    break;
                } else if (ans < guess) {
                    std::cout << "Incorrect! The number is less than " << guess << ".\n\n";
                } else if (ans > guess) {
                    std::cout << "Incorrect! The number is greater than " << guess << ".\n\n";
                }
                i++;
            }
            std::cout << "End of attempts!" << std::endl;
        break;

    }

    return 0;
}
