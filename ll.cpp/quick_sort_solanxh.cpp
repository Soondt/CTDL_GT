#include<iostream>
using namespace std;
void quicSort(int a[] ,int l ,int r)
{
    int p = a[(l+r)/2];
    int i = l, j = r;
    while (i < j)
    {
        while (a[i] < p)
        {
            /* code */
            i++;
        }
        while (a[j] > p)
        {
            /* code */
            j--;
        }
        if(i<=j)
        {
            swap(a[i] , a[j]);
            i++;
            j--;
        }
    }
    if(i <r)
    {
        quicSort(a,i,r);
    }
    if(l < j)
    {
        quicSort(a,l,j);
    }
}
int a[1000];
int main()
{
    int n ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    quicSort(a,0,n-1);
    int count = 1 ;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(a[i] == a[i-1])
        {
            count ++;
        }else
        {
            cout<< a[i-1] << " " << count << "; ";
            count  =1 ;
        }  
    }
    cout << a[n-1] << " " <<count ;
    return 0 ;
}