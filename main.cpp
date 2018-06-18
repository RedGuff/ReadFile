#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string test =  "test.txt";
    ifstream fichier(test.c_str(), ios::in);
    if(!fichier)
    {
        cerr << "Impossible to open the file!" << endl;
    }
    else
    {
        string ligne;
        while(getline(fichier, ligne))
        {
            cout << ligne << endl;
        }

    }
    return 0;
}
