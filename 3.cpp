1.
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream text("text.txt");
    ifstream bad("badwords.txt");
    ofstream clean("clean.txt");

    vector<string> badWords;
    string word;

    while (bad >> word) {
        badWords.push_back(word);
    }

    while (text >> word) {
        bool isBad = false;

        for (int i = 0; i < badWords.size(); i++) {
            if (word == badWords[i]) {
                isBad = true;
                break;
            }
        }

        if (!isBad) {
            clean << word << " ";
        }
    }

    cout << "готово";
}