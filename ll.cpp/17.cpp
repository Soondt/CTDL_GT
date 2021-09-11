#include<iostream>
// dem so lan xuat hien cua cac pt trong mang
using namespace std;
int a[100] , b [100];
int main ()
{
    int n ; 
    cout << "nhap n == ";
    cin >> n ;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sap xep tang dan
    int max = a[0];
    for (size_t i = 1; i < n; i++)
    {
        if(a[i] > max )
        {
            max = a[i];
        }
    }
    // khoi tao mang b = 0 
    for (size_t i = 0; i <= max ; i++)
    {
        b[i] = 0 ;
    }
    // neu a[i] xuat hien 2 lan tang chi so tai mang b
    for (size_t i = 0; i < n ; i++)
    {
        b[a[i]] += 1 ;
    }
    // in radang i - chi so
    for (size_t i = 0; i <= max; i++)
    {
        if(b[i] > 0 )
        {
            cout << i << " - " << b[i] << "; ";
        }
    }
    return 0  ;
}