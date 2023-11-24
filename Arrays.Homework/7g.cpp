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
    int sum=0, sup=0, sel=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    double avg=double(sum) / n;
    for(int i=0; i<n; i++)
    {
        if ( a[i] > avg )
            {
                sup=sup+a[i];
                sel++;
            }
    }
    cout << sup <<" "<< sel;
}