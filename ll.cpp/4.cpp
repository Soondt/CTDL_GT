#include<iostream>
using namespace std ;
int main ()
{
    int n;
    int t = 1; 
    int dem = 0;
    cout << " n = ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        t *=i ;
        dem += t; 
    }
    cout <<"\n S = " << dem;
    return 0;
}