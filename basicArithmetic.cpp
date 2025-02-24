#include <iostream>

int main() {
    //declaring and initializing variables
    int FirstNumber= 10;
    int SecondNumber= 5;
    int Sum= FirstNumber + SecondNumber;
    int Difference= FirstNumber - SecondNumber;
    int Product= FirstNumber * SecondNumber;
    int Quotient= FirstNumber / SecondNumber;
    int Remainder= FirstNumber % SecondNumber;

    //outputing the results of the arithmetic operations
    std::cout << FirstNumber << " + " << SecondNumber << " = " << Sum << std::endl;
    std::cout << FirstNumber << " - " << SecondNumber << " = " << Difference << std::endl;
    std::cout << FirstNumber << " * " << SecondNumber << " = " << Product << std::endl;
    std::cout << FirstNumber << " / " << SecondNumber << " = " << Quotient << std::endl;
    std::cout << FirstNumber << " % " << SecondNumber << " = " << Remainder << std::endl;

    return 0;
}