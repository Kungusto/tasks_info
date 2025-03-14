#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream a("input.txt");
    ofstream b("output.txt");

    int x, y = 0;
    a >> x;

    string p, q;
    int z;

    while (a >> p >> q >> z) {
        if (z > x) {
            y++;
            b << y << ") " << p << " " << q << endl;
        }
    }

    b << y;

    return 0;
}
