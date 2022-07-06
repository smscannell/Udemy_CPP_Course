#include <iostream>

int main() 
{
    int favourite_number;
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> favourite_number;
    std::cout << "Amazing! That's my favourite number too" <<std::endl;
    std::cout << "No really!! ";
    std::cout <<  favourite_number;
    std::cout << " is my favourite number!" <<std::endl;
    return 0;
}