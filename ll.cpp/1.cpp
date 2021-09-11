#include<iostream>
using namespace std;
// tim so lan xuat hien cua a va vi tri cua no
#include<string>

void nhap(int *arr , size_t n)
{
    for (size_t i = 0; i < n ; i++)
    {
        cout << "Phan tu thu arr[" << i << "] la : ";
        cin >> arr[i];
    }
}

void xuat(int *arr ,size_t n,int k)
{
    int dem =0;
    cout << "Vi tri xuat hien la : " ;
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            cout <<"\t"<< i ;
            dem ++;
        }
    }
    cout << "\nso lan xuat hien la : " << dem;
}
void nhapK(int &k)
{
    // chuyen tham chieuS
    cout << "Nhap k = ";
    cin >> k;
}
int main()
{
    int n , k;
    cout << "nhap n = " ;
    cin >> n;
    int arr[n];
    nhap(arr,n);
    nhapK(k);
    xuat(arr,n,k);
    return 0 ;
}