1.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("text.txt");

    int lines = 0, words = 0;
    string w;

    while (f >> w) {
        words++;
    }

    f.clear();
    f.seekg(0);

    string line;
    while (getline(f, line)) {
        lines++;
    }

    cout << "рядків: " << lines << endl;
    cout << "слів: " << words << endl;

    return 0;
}

2.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    cin >> name;

    ifstream f(name);

    string line;
    while (getline(f, line)) {
        cout << line << endl;
    }

    return 0;
}