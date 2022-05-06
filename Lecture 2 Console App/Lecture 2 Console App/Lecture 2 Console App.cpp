#include <iostream>

int main()
{
    std::cout << "Hi! What is your favorite colour?\n";

    char input[64];

    std::cin >> input;

    std::cout << input << ", cool. Mine is Taupe, not very exciting, right?";
}

