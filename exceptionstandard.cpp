#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main ()
{
    cout << "Awal Program "  << endl;
    try
    {
       array<int, 3> data = {3, 5, 7};
       cout << data.at(5) << endl;
    }
    catch(exception& e)
    {
        cout << e.what()<< endl;
    }
    cout << "Baris Program yang Terakhir" << endl;
    return 0;
}