#include <iostream>
#include <thread>
#include <chrono>

#include "Formulas/adder.h"

int main(int, char **)
{

    bool stop = false;

    std::cout << "Hello, Welcome to Calcula!\n";

    while (!stop)
    {
        double var1 = 0;
        double var2 = 0;

        char choice;

        std::cout << "Set your firts number now: ";
        std::cin >> var1;
        std::cout << "\nSet your second number now: ";
        std::cin >> var2;

        std::cout << "\n\nYour variables are: " << var1 << " and " << var2 << "\n";

        std::cout << "Added together we get: " << add(var1, var2) << "\n";

        std::cout << "again? (Y/N)\n";
        std::cin >> choice;

        tolower(choice);

        switch (choice)
        {
        case 'n':
            stop = true;
            break;

        default:
            std::cout << "\nYou Chose AGAIN.\n\n\n\n\n\n\n\n\n\n";
            break;
        }
    }

    std::cout << "\n\n\nThanks for using: "
              << "\n"
              << "\n $$$$$$\\            $$\\                     $$\\           "
              << "\n$$  __$$\\           $$ |                    $$ |          "
              << "\n$$ /  \\__| $$$$$$\\  $$ | $$$$$$$\\ $$\\   $$\\ $$ | $$$$$$\\  "
              << "\n$$ |       \\____$$\\ $$ |$$  _____|$$ |  $$ |$$ | \\____$$\\ "
              << "\n$$ |       $$$$$$$ |$$ |$$ /      $$ |  $$ |$$ | $$$$$$$ |"
              << "\n$$ |  $$\\ $$  __$$ |$$ |$$ |      $$ |  $$ |$$ |$$  __$$ |"
              << "\n\\$$$$$$  |\\$$$$$$$ |$$ |\\$$$$$$$\\ \\$$$$$$  |$$ |\\$$$$$$$ |"
              << "\n \\______/  \\_______|\\__| \\_______| \\______/ \\__| \\_______|"
              << "\n"
              << "\n~Calcula Dev Tobsi. Find me @TobsiDev on twitter & GitHub!\n";

    // i = Seconds to wait before closing the program.
    for (int i = 5; i > 0; --i)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

} // http://patorjk.com/software/taag/#p=display&f=Big%20Money-nw&t=Calcula
