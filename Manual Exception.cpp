#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah nilai bertipe double
    }
        catch (int a) {
        //blok ini akan dieksekusi jika throw melempar integer
        cout << "Pengecualia akan dieksekusi" << endl;
    }
        catch (...) {
        // jika selain integer maka block ini akan dieksekusi
        cout << "default Pengecualian diexsekusi" << endl;
    }

        return 0;
}

