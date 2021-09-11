#include<iostream>
#include<string>
using namespace std ;
// xuat ra mang , tim chan le am duong trong mang nhap tu ban phim
void nhap(int *arr ,size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout <<"phan tu thu arrr["<<i<<"] la : ";
        cin >> arr[i];
    }
}
void SochanLe(int *arr ,size_t n)
{
    int dem= 0 ;
    int count = 0;
    cout << "So chan la : ";
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] > 0 && arr[i] % 2 == 0)
        {
            cout << "  " << arr[i];
            //cout << "\t" << i ; 
            dem ++;
        }
    } 
    cout << "\nSo le la : ";
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] > 0 && arr[i] % 2 != 0)
        {
            cout << "  " << arr[i];
            //cout << "\t" << i ;
            count ++ ;
        }
    }
    
    cout << "\nSo chan trong mang la  : " << dem ;
    cout << "\nSo le trong mang la : " << count ;
}
void Soamduong(int *arr ,size_t n)
{
    int dem= 0 ;
    int count = 0;
    cout << "\nSo am la : ";
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] < 0 )
        {
            cout << "    " << arr[i];
            dem ++;
        }
    }
    cout << "\nSo duong la : ";
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            cout << "  " << arr[i];
            //cout << "\t" << i ;
            count ++ ;
        }
    }
    cout << "\nSo am trong mang : " << dem ;
    cout << "\nSo duong trong mang  la : " << count ;
}
void xuat(int *arr ,size_t n )
{
    for (size_t i = 0; i < n; i++)
    {
        cout << "   " << arr[i];
    }
    cout << endl;
}


int main()
{
    int n ;
    cout << "nhap N = " ;
    cin >> n;
    //cap phat dong
    int *arr = new int[n];;
    nhap(arr,n);
    xuat(arr,n);
    SochanLe(arr,n);
    Soamduong(arr,n);
    return 0 ;
}
