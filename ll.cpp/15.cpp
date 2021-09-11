#include<iostream>
#include<stdbool.h>
// xoa gia tri o vij tri k va in  man con lai
using namespace std ;
int main ()
{
    int n , k;
    int *arr;
    cin >> n ;
    arr = new int[100];

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> arr[i] ;
    }

    cin >> k ;
    for(int i = k ; i < n ; i ++)
    {
        arr[i] = arr[i+1];
    }

    for(int i = 0 ; i < n-1 ; i ++)
    {
    cout << arr[i] << " ";
    }

    delete[] arr;
    return 0 ;
}
