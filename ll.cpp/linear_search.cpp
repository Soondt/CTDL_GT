// tim  kiem tuyen tinh(so sanh tung phan tu)
#include<iostream>
using namespace std ;
// chi dua gia tri ci so 1 lan
int search(int *a , int n , int x)
{
    for(int i= 0 ; i< n ; i++)
    {
        if(a[i] == x)
        {
            return i ;
        }
    }
    return -1 ;
}
int main ()
{
    int n , a[100],x;
    cin >> n ;
    for (size_t i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    cin >> x ;
    cout << search(a,n,x);
    return 0 ;
    
}