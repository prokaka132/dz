1.
#include <iostream>
using namespace std;

void f()
{
    static int k = 0;
    int limit = 3;

    k++;

    if(k <= limit)
        cout << "виклик №" << k << endl;
    else
        cout << "перевищено ліміт" << endl;
}

int main()
{
    f();
    f();
    f();
    f();

    return 0;
}

2.
#include <iostream>
using namespace std;

template <class T>
T max1(T a[], int n)
{
    T m = a[0];

    for(int i=1;i<n;i++)
        if(a[i]>m)
            m=a[i];

    return m;
}

int main()
{
    int a[5]={1,4,7,2,5};

    cout<<"Max = "<<max1(a,5);

    return 0;
}

3.
#include <iostream>
using namespace std;

template <class T>
T max2(T a[2][2])
{
    T m=a[0][0];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(a[i][j]>m)
                m=a[i][j];

    return m;
}

int main()
{
    int a[2][2]={{1,5},{3,9}};

    cout<<"Max = "<<max2(a);

    return 0;
}

4.
#include <iostream>
using namespace std;

int main()
{
    string s;
    int l=0,d=0,o=0;

    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i])) l++;
        else if(isdigit(s[i])) d++;
        else o++;
    }

    cout<<"Letters "<<l<<endl;
    cout<<"Digits "<<d<<endl;
    cout<<"Other "<<o<<endl;

    return 0;
}

5.
#include <iostream>
using namespace std;

int main()
{
    string s;
    char c;
    int k=0;

    cin>>s;
    cin>>c;

    for(int i=0;i<s.length();i++)
        if(s[i]==c)
            k++;

    cout<<"Count = "<<k;

    return 0;
}