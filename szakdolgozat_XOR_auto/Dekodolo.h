#pragma once
#include <string>
#include <vector>

using namespace std;

class Dekodolo
{
public:
    void GetDekodoltSzoveg(string coded);

private:
    string Visszafejtes(string input, vector<int> randszamok);
};
