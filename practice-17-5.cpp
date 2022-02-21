// practice-17-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Vector
{
public:
    Vector() : x(0), y(0), z(0)
    {}

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    void PrintVector()
    {
        std::cout << "\n" << x << " " << y << " " << z;
    }
private:
    double x = 0;
    double y = 0;
    double z = 0;
};

int main()
{
    Vector vec1(3,7,2);
    vec1.PrintVector();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
