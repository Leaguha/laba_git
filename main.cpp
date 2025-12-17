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
    vector<Textbook> textbooks;
    while (!inFile.eof())
    {
        Textbook a;
        inFile >> a.predmet;
        inFile >> a.stran;
        inFile >> a.razmer;
        textbooks.push_back(a);
    }
    //ф-я 2:
    for (const auto &a : textbooks)
    {
        cout << "Predmet:" << a.predmet << endl;
        cout << "Stran:" << a.stran << endl;
        cout << "Razmer:" << a.razmer << endl;
    }
    //ф-я 3:
    ofstream file("file.bin", ios::binary);
    for (const auto &a : textbooks)
    {
        file.write(reinterpret_cast<const char*>(&a), sizeof(Textbook));
    }
    return 0;
}


