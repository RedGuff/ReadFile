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
        cerr << "Impossible to read the file: " << test << "!" << endl;
    }
    else
    {
        string ligne;
        while(getline(fichier, ligne))
        {
            cout << ligne << endl;
        }
fichier.close();  
    }
    return 0;
}
