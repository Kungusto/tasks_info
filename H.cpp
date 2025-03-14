#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream a("input.txt");
    ofstream b("output.txt");

    int x;
    a >> x;
    a.ignore();

    string p, q;
    int z, y = 0;

    while (a >> p >> z >> q) {
        if (z < x) {
            b << p << " " << z << " " << q << endl;
            y++;
        }
    }

    b << y;

    return 0;
}
