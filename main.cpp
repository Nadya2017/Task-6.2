#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> S;
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 5 + 1;
        cout << a[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
     {
        if (S.find(a[i]) != S.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        S.insert(a[i]);
     }
    return 0;
}
