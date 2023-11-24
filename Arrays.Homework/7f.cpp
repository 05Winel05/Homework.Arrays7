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
    double mx=-1;
    for (int i=0; i<n; i++)
    {
        if (a[i] >= mx)
        {
            mx=a[i];
            j=i;
        }
    }
    c=a[j];
    a[j]=a[n-1];
    a[n-1]=c;
    for (int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
}