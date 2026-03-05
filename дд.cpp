1.
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int* A = new int[M];
    int* B = new int[N];

    for (int i = 0; i < M; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    int* C = new int[M + N]; // максимум
    int k = 0;

    for (int i = 0; i < M; i++) {
        bool unique = true;
        for (int j = 0; j < N; j++)
            if (A[i] == B[j]) unique = false;
        for (int j = 0; j < k; j++)
            if (A[i] == C[j]) unique = false;
        if (unique) C[k++] = A[i];
    }

    for (int i = 0; i < N; i++) {
        bool unique = true;
        for (int j = 0; j < M; j++)
            if (B[i] == A[j]) unique = false;
        for (int j = 0; j < k; j++)
            if (B[i] == C[j]) unique = false;
        if (unique) C[k++] = B[i];
    }

    for (int i = 0; i < k; i++) cout << C[i] << " ";

    delete[] A;
    delete[] B;
    delete[] C;
}

2.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) count++;

    int* newArr = new int[count];
    int k = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0) newArr[k++] = arr[i];

    for (int i = 0; i < count; i++) cout << newArr[i] << " ";

    delete[] arr;
    delete[] newArr;
}

3.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int m;
    cin >> m;
    int* block = new int[m];
    for (int i = 0; i < m; i++) cin >> block[i];

    int index;
    cin >> index;

    int* newArr = new int[n + m];
    int k = 0;
    for (int i = 0; i < index; i++) newArr[k++] = arr[i];
    for (int i = 0; i < m; i++) newArr[k++] = block[i];
    for (int i = index; i < n; i++) newArr[k++] = arr[i];

    for (int i = 0; i < n + m; i++) cout << newArr[i] << " ";

    delete[] arr;
    delete[] block;
    delete[] newArr;
}
4.
#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int** arr = new int*[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++) cin >> arr[i][j];
    }

    int* col = new int[r];
    for (int i = 0; i < r; i++) cin >> col[i];

    int index;
    cin >> index;

    int** newArr = new int*[r];
    for (int i = 0; i < r; i++) {
        newArr[i] = new int[c + 1];
        for (int j = 0; j < index; j++) newArr[i][j] = arr[i][j];
        newArr[i][index] = col[i];
        for (int j = index; j < c; j++) newArr[i][j + 1] = arr[i][j];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c + 1; j++) cout << newArr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < r; i++) delete[] arr[i];
    delete[] arr;
    delete[] col;
    for (int i = 0; i < r; i++) delete[] newArr[i];
    delete[] newArr;
}