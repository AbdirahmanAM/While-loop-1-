// While Loop 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//While loop 1: A C++ program that outputs the numbers: 12,14,16,18,20,22,24,26,28.
// By: Abdirahman Gedi
// Student number 137748

#include <iostream>
using namespace std;

int main()
{
    cout << "..................................................................." << endl;
    cout << "A C++ program that outputs the numbers: 12,14,16,18,20,22,24,26,28." << endl;
    cout << "..................................................................." << endl;
    cout << endl;

   int i = 12;
   
   while (i <= 28) 
   {
       cout << i << ", ";
       i += 2;
   }

   cout << endl;
   cout << "..........................................." << endl;

    return 0;
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
