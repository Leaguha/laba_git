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


