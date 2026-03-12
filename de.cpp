1.
#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string prizv;
    char stat; // m - юнак, f - дівчина
    float bal;
} Student;

int main() {
    Student s[3];
    float sumM = 0, sumF = 0;
    int m = 0, f = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Прізвище: ";
        cin >> s[i].prizv;
        cout << "Стать (m/f): ";
        cin >> s[i].stat;
        cout << "Середній бал: ";
        cin >> s[i].bal;

        if(s[i].stat == 'm') {
            sumM += s[i].bal;
            m++;
        } else {
            sumF += s[i].bal;
            f++;
        }
    }

    if(sumM/m > sumF/f)
        cout << "юнаки мають вищий середній бал";
    else
        cout << "дівчата мають вищий середній бал";
}

2.
#include <iostream>
using namespace std;

struct Data {
    string dvigun;
    string color;
    int vlasnyky;
};

struct Car {
    string marka;
    string model;
    int year;
    int price;
    bool torg;
    Data info;
};

void show(Car c) {
    cout << c.marka << " "
         << c.model << " "
         << c.year << " "
         << c.price << " "
         << c.info.dvigun << " "
         << c.info.color << " "
         << c.info.vlasnyky << endl;
}

int main() {
    Car a[2];

    for(int i=0;i<2;i++) {
        cin >> a[i].marka;
        cin >> a[i].model;
        cin >> a[i].year;
        cin >> a[i].price;
        cin >> a[i].info.dvigun;
        cin >> a[i].info.color;
        cin >> a[i].info.vlasnyky;
    }

    cout << "Марка Модель Рік Ціна Двигун Колір Власники\n";

    for(int i=0;i<2;i++)
        show(a[i]);
}

3.
#include <iostream>
using namespace std;

struct Student {
    string prizv;
    string group;
    int marks[5];
};

int main() {
    int n;
    cout << "Кількість студентів: ";
    cin >> n;

    Student* s = new Student[n];

    for(int i=0;i<n;i++) {
        cin >> s[i].prizv;
        cin >> s[i].group;

        for(int j=0;j<5;j++)
            cin >> s[i].marks[j];
    }

    cout << "відмінники:\n";

    for(int i=0;i<n;i++) {
        int good = 0;

        for(int j=0;j<5;j++)
            if(s[i].marks[j] >= 10)
                good++;

        if(good >= 4)
            cout << s[i].prizv << endl;
    }

    cout << "двієчники:\n";

    for(int i=0;i<n;i++) {
        int bad = 0;

        for(int j=0;j<5;j++)
            if(s[i].marks[j] <= 3)
                bad++;

        if(bad >= 3)
            cout << s[i].prizv << endl;
    }

    delete[] s;
}