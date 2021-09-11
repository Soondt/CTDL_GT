#include<iostream>
#include<math.h>
using namespace std;
void quicksort(int a[] ,int l,int r)
{
    int p = a[(l+r)/2];
    int i= l ,j =r;
    while( i < j)
    {
        while(a[i] < p)
        {
            i++;
        }
        while (a[j] > p)
        {
            /* code */
            j--;
        }
        if( i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    // de qui
    if(i < r)
    {
        quicksort(a,i ,r);

    }
    if(l < j)
    {
        quicksort(a,l,j);
    }
}
void print (int a[], int n)
{
    if(n == 0)
    {
        cout << "NULL";
    }else{
        cout << a[0] << " ";
        for (int i = 1; i < n; i++)
        {
            /* code */
            if(a[i] != a[i-1])
            {
                cout << a[i] << " ";
            }
        }
    } 
}
bool check(int n)
{
    int k = (int)sqrt(n);
    return k*k == n;
}
int a[10000];
int b[10000];
int main()
{
    int n ,k = 0;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(check(a[i]))
        {
            b[k] = a[i];
            k++;
        }
    }
    quicksort(b,0,k-1);
    print(b,k);
    return 0;  
}