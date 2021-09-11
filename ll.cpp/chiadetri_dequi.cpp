#include<iostream>
// tim z so lan xuat hien trong mang a
using namespace std;
int a[10000];
int slove(int a[], int l ,int r,int z)
{
    if (l == r)
    {
        if(a[l] == z) return 1 ;
        else return 0 ;
    }else
    {
        int m = (l + r)/2 ;
        return slove(a,l,m,z) + slove(a,m+1,r,z);
    }  
}
int main ()
{
    int n ,z ;
    cin >> n ;
    for (int i = 0; i <n ; i++)
    {
        /* code */
        cin >> a[i];

    }
    cin >> z ;
    cout << slove(a,0,n-1,z);
    return 0 ;
}