#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int j, c;
    cin >> n;
    int a [n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    double mn=1000;
    for (int i=0; i<n; i++)
    {
        if (a[i] < mn)
        {
            mn=a[i];
            j=i;
        }
    }
    c=a[j];
    a[j]=a[0];
    a[0]=c;
    for (int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
}