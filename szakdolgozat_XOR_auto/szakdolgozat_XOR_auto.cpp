// szakdolgozat_XOR_auto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Kodolo.h"
#include "Dekodolo.h"
#include <iostream>
#include <chrono>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    auto start = chrono::high_resolution_clock::now(); //start timer

    ifstream infile("input.txt");
    string input((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>());

    Kodolo k;
    k.GetTitkosSzoveg(input);
    infile.close();

    auto stop = chrono::high_resolution_clock::now(); //stop timer
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Runtime: " << duration.count() << "microseconds" << endl;
    _getch();
    return 0;
}