#include "RandomGen.h"
#include <iostream>
#include <vector>
#include <random>
#include <fstream>
#include <string>

using namespace std;

void RandomGen::Getrandom(vector<int>& rvector, int inputhossz)
{
    cout << "GENERATING RANDOM NUMBERS" << endl;
    unsigned int seed = 0;

    ifstream infile("seed.txt");
    string input((istreambuf_iterator<char>(infile)), istreambuf_iterator<char>());
    seed = stoi(input);
    infile.close();



    //Randomsz�mok gener�l�sa vectorba
    srand(seed);
    rvector.clear();
    for (int i = 0; i < inputhossz * 4 * 4; i++) //Extra *4  a v�g�n, hogy elker�lj�k az �nndek�dol�st (�j random �rt�kek mind a 4 iter�ci�ra)
    {
        rvector.push_back(rand() % 15);
    }
}
