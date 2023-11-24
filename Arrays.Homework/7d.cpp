#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a [n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    double mx=-1,mn=1000,df;
    for (int i=0; i<n; i++)
    {
        if (a[i] > mx)
        {
            mx=a[i];
        }
    }
    for (int i=0; i<n; i++)
    {
        if (a[i] < mn)
        {
            mn=a[i];
        }
    }
    df=mx-mn;
    cout << df;
    return 0;
}