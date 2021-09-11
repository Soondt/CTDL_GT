#include<iostream>
using namespace std;
int tan(int n)
{
   
    //tan(n) = tan(n-1) * tan(n-2) + tan(n-3);
    if(n ==1 || n == 2) return 1;
    else if (n == 3 ) return 2;
    return tan(n-1) * tan(n-2) + tan(n-3);
}
int main ()
{
    int n;
    cin >> n ;
    cout << tan(n);
    return 0;
}