#include<iostream>
using namespace std;
// cap phat bo nho dong dc chi toi dia chi cua mang &arr
void ressize(int *& arr , int n)
{
    arr = new int [n];
    delete[] arr;
}
int main ()
{
    int * arr = new int [19];
    ressize(arr , 1000);
    for (size_t i = 0; i < 1000; i++)
    {
        arr[i] = i ;
    }
    for (size_t i = 0; i < 1000; i++)
    {
        cout << arr[i] << "  ";
    }
    delete[] arr ;
    return 0 ;
}