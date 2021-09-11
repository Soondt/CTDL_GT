#include<iostream>
using namespace std;
int MIN(int *a ,int n )
{
    int k = 0 ;
    for (size_t i = 1; i < n ; i++)
    {
        if(a[k] > a[i])
        {
            k = i ;
        }
    }
    return k ;
}
int MAX(int *a ,int n )
{
    int k = 0 ;
    for (size_t i = 1; i < n ; i++)
    {
        if(a[k] <= a[i])
        {
            k = i ;
        }
    }
    return k ;
}

void Xuat(int *a , int n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << a[i] << " ";
    } 
}
int a[1000];
int main ()
{
    int n ;
    cin >> n ;
    for (size_t i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    int min = MIN(a,n);
    int max = MAX(a,n);
    swap(a[min], a[max]);
    Xuat(a,n);
    return 0;
}