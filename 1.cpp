1.
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

void create(vector<int>& a, int n) {
    for (int i = 0; i < n; i++)
        a.push_back(rand() % 21 - 10);
}

void print(vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << endl;
}

vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    vector<int> c = a;
    c.insert(c.end(), b.begin(), b.end());
    sort(c.rbegin(), c.rend()); 
    return c;
}

int main() {
    srand(time(0));

    int n, m;
    cout << "Size first: ";
    cin >> n;
    cout << "Size second: ";
    cin >> m;

    vector<int> a, b;

    create(a, n);
    create(b, m);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << "A: ";
    print(a);

    cout << "B: ";
    print(b);

    vector<int> c = mergeArrays(a, b);

    cout << "Merged: ";
    print(c);
}

2.
#include <iostream>
#include <vector>
using namespace std;

vector<int> to1D(vector<vector<int>>& a) {
    vector<int> b;

    for (auto& row : a)
        for (int x : row)
            b.push_back(x);

    return b;
}

int main() {
    vector<vector<int>> a = {
        {1,2,3},
        {4,5,6}
    };

    vector<int> b = to1D(a);

    for (int x : b)
        cout << x << " ";
}

3.
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

char randomChar() {
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%";
    return chars[rand() % chars.size()];
}

void generate(vector<char>& pass, int len) {
    for (int i = 0; i < len; i++)
        pass.push_back(randomChar());
}

void print(vector<char>& pass) {
    for (char c : pass) cout << c;
    cout << endl;
}

int main() {
    srand(time(0));

    int len;
    cout << "Password length: ";
    cin >> len;

    if (len < 8) {
        cout << "Min length 8\n";
        return 0;
    }

    vector<char> password;

    generate(password, len);

    cout << "Password: ";
    print(password);
}