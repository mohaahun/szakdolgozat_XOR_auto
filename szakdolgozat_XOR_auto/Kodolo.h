#pragma once
#include <string>
#include <vector>

using namespace std;

class Kodolo {

public:
    void GetTitkosSzoveg(string input);

private:
    string Titkosito(string input, vector<int> randszamok);
};
