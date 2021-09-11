#include<iostream>
using namespace std ;
int main ()
{
    int n ,m ;
    cin >> n >> m ;
    //-----------khai bao mang 2 chieu con tro cap 2
    int **arr;
    arr = new int *[n];
    //------------cap phat dong cho tu phan tu trong mang con tro
    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = new int [m];
    }
    //-------------------nhap phan tu mang-------------
    for(int i = 0 ; i < n ;i ++)
    {
        for(int j =0 ; j < m ; j++)
        {
            cin >> arr[i][j];
        }
    }
    // ----------------------tinhs tong------------------
   
    for (int i = 0 ; i < n ;i ++)
    {
        int sum = 0 ;
        for(int j = 0 ; j < m ; j ++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    // for(int i = 0 ;i < n ; i++)
    // {
    //     for(int j = 0 ; j < m ; j++)
    //     {
    //         cout << (int)&arr[i][j] << endl ;
    //     }
    // }

    // xoa vung cap phat dong cho mang 1 chieu
    for(int i = 0 ;i < n ; i ++)
    {
        delete[] arr[i];
    }
    // xoa vung nho cua mang 2 chieu
    delete[] arr ;
    return 0 ;
}