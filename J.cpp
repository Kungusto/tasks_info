#include <iostream>
#include <fstream>
#include <string>

// спешил поэтому не запаривался над названиями
using namespace std;

int main() {
    ifstream a("input.txt");
    ofstream b("output.txt");

    int x;
    a >> x;
    a.ignore();

    string p, q;
    int z, y = 0;

    while (a >> p >> q >> z) {
        if (z > x) {
            y++;
            b << y << ") " << q[0] << ". " << p << endl;
        }
    }

    b << y;

    return 0;
}
