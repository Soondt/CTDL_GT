#include<iostream>
using namespace std;
//chen kis tu vao mang tai vi tri k trong mang
int main()
{
    int n,k,x,i;
    int *arr;
    cin >> n ;
    arr = new int[100];

    for(i=0 ; i < n ; i ++)
    {
        cin >> arr[i];
    }

    cin >> k >>  x ;
    for(i = n ; i >= k+ 1 ; i -- )
    {
        arr[i] = arr[i -1];
    }
    arr[k] = x ;
    n++;

    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0 ;
}