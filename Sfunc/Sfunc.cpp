#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    long long static int nim;
public:
    long long int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama = pnama; 
        setID();

    }
};




