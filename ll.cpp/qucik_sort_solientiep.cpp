#include<iostream>
// inn ra so tiep theo tron gday tang 
using namespace std;
void quickSort(int a[] ,int l,int r)
{
    int p = a[(l+r)/2];
    int i =l , j = r;
    while (i < j)
    {
        while (a[i] < p )
        {
            i++;
        }
        while (a[j] > p )
        {
            j--;
        }
        if(i <= j)
        {
            swap(a[i],a[j]); 
            i++;
            j--;
        }
    }
    if(i < r)
    {
        quickSort(a,i,r);
    }
    if(l < j)
    {
        quickSort(a,l,j);
    }
}
int solve(int a[] , int n)
{
    quickSort(a,0,n-1);
    if(a[0] > 0) return 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] > 1 )
        {
            return a[i-1] +1;
        }
    }
    return a[n-1] +1;
}
int main ()
{
    int a[10000];
    int n ;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a,n);
    return 0;
}