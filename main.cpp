#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <iomanip>


using namespace std;

struct Textbook
{
    string predmet;
    int64_t stran;
    string razmer;
};


int main()
{
    //ф-я 1:
    ifstream inFile("textbooks.txt");
    if (!inFile.is_open())
    {
        wcout << "Error opening file!" << endl;
        return 1;
    }
    //ф-я 2:

    //ф-я 3:

    return 0;
}


