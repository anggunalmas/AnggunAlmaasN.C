// Alma modul4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "=== Program Penentuan Nilai Mutu ===" << endl;
    cout << "masukkan nilai angka : ";
    cin >> nilai;


    cout << "\nHasil : " << endl;

    if (nilai > 89) {
        cout << "Nilai Mutu : A" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai > 80 && nilai <= 89) {
        cout << "Nilai mutu =B" << endl;
        cout << "Keterangan : Naik Kelas " << endl;
    }
    else if (nilai > 70 && nilai <= 80) {
        cout << "Nilai mutu =C" << endl;
        cout << "Keterangan : Naik Kelas " << endl;
    }
    else if (nilai > 60 && nilai <= 70) {
        cout << "Nilai mutu =D" << endl;
        cout << "Keterangan : Tinggal Kelas " << endl;
    }
    else if (nilai <= 60) {
        cout << "Nilai mutu =E" << endl;
        cout << "Keterangan : Tinggal Kelas " << endl;
    }
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
