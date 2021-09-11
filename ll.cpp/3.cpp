#include<iostream>
using namespace std;
//nhap k tim so chan / le nho hon k trong mang arr // tinh tong 
void nhap(int *arr ,size_t n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "phan tu thu arr[" << i << "] la : " ;
        cin >> arr[i];
    }
}
void NhapK(int &k)
{
    cout << "\nNhap K : ";
    cin >> k;
}
void xuat(int *arr ,size_t n , int k)
{
    int dem = 0;
    int count = 0 ;
    cout << "\nSo chan trong mang < n :";
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] % 2 ==0 && arr[i] < k)
        {
            cout << "   "<< arr[i];
            dem += arr[i];
        }
    }
    cout << "\nSo le : ";
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] % 2 !=0 && arr[i] < k)
        {
            cout <<"    "<< arr[i];
            count += arr[i];
        }
    }
    cout <<"\ntong chan : " << dem ;
    cout << "\ntoong le : " << count;
}
int main()
{
    int n;
    int k ;
    cout << "Nhap n : ";
    do
    {
        cin >> n;
        if(n <= 0)
        {
            cout << "Nhap lai n > 0";
        }
    } while (n <= 0);
    int *arr = new int[n];
    nhap(arr,n);
    NhapK(k);
    xuat(arr,n,k);
    return 0 ;
    
}