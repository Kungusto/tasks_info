#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    for (int i = 0; i<100; i++) {
        string spaces(100-i-1, '-');
        string loading(i+1, '=');
        Sleep(25);
        cout << " [" << loading << spaces << "] "<< i+1 << "% " "\r";
    }
    string spaces(100, ' ');
    cout << "\r" << spaces << "                   " << "\r" << " ";
    for (int j = 0; j<8; j++) {
        Sleep(500);
        if (j % 2 == 0) {
            cout << spaces << "\r";
        }
        else {
            cout << "       ЗАГРУЗКА ЗАВЕРШЕНА!     " << spaces << "\r";
        }
    }
    cout << spaces << "\r"  << endl;
}