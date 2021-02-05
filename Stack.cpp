// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    Stack<int> l;
    const int size = 10;
    int numbers[size];
    std::srand(std::time(0));
    for (int i = 0; i< size;i++)
    {
        numbers[i] = std::rand() % 20;
    }
    for (auto i : numbers)
        l.push(i);
    //l.push(4);
    //l.push(5);
    //std::cout << l.pop() << "\n";
    //l.push(6);
   // std::cout << l.pop() << "\n";
    //std::cout << l.pop() << "\n";
    //l.push(6);
    l.printList();
    Stack<int> a(l);
    a.printList();
    

    while (!l.isEmpty())
        std::cout << l.pop() << "\t";

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
