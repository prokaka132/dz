1.
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    int* p1 = a;
    int* p2 = b;

    for(int i = 0; i < 5; i++) {
        *p2 = *p1;
        p1++;
        p2++;
    }

    for(int i = 0; i < 5; i++)
        cout << b[i] << " ";

    return 0;
}

2.
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    int* start = a;
    int* end = a + 4;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;


3.
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    int* p1 = a + 4;
    int* p2 = b;

    for(int i = 0; i < 5; i++) {
        *p2 = *p1;
        p1--;
        p2++;
    }

    for(int i = 0; i < 5; i++)
        cout << b[i] << " ";

    return 0;
}