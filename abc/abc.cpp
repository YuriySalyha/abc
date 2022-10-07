#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"DateTime.h"

class Number
{
public:
    int value;
    Number operator+(const Number& second)
    {
        return Number{ this->value + second.value };
    }

    Number& operator=(const int& input) {
        this->value = input;
        return *this;
    }
    Number& operator=(const double& input) {
        this->value = (int)input;
        return *this;
    }
};

std::ostream& operator<<(std::ostream& output, const Number& input)
{
    output << "Number: " << input.value << "\n";
    return output;
}

std::istream& operator>>(std::istream& input, Number& output) {

    input >> output.value;
    return input;
}

int main()
{
    DateTime e;
    return 0;
    cout << "Select your time zone: ";
    int a;
    cin >> a;
    e.changeTimeZone(a);
}