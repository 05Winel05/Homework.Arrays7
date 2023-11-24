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
        if (a[i]<0)
        {
            a[i]=a[i]*(-1);
        }
        
    }
    double mx=-1;
    for (int i=0; i<n; i++)
    {
        if (a[i] > mx)
        {
            mx=a[i];
        }
    }
    cout << fixed <<setprecision(2) << mx;
    return 0;
}