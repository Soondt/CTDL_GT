#include<iostream>
using namespace std ;
void print(int *a ,int n)
{
    for(int i =0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}
void chen(int *a ,int n)
{
    int index, value;
    for (size_t i = 1; i < n; i++)
    {
        index  = i ;
        value = a[i];
        while (index > 0 && a[index -1] > value)
        {
            a[index] = a[index - 1] ;
            index --;
        }
        a[index] = value;
    }
    
}
int main()
{
    int n ,a[100];
    cin >> n ;
    for(int i = 0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    chen(a,n);
    print(a,n);
    return 0 ;
}