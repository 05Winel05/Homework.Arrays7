#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int c;
    if (n%2==0)
    {
        for (int i=0; i<n; i=i+2)
        {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
        for (int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else 
    {
        for (int i=0; i<n-1; i=i+2)
        {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
        for (int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }
    }
}