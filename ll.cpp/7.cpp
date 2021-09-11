#include<iostream>
using namespace std ;
// tam giac vuong can lay i = j roi in vi  tam giac can
int main()
{
    int h ;
    cout << "nhap chieu cao h : ";
    cin >> h;
    for (size_t i = 0; i < h ; i++)
    {
        for (size_t j = 0; j <= i ; j++)
        {
            cout << " * ";
        }
        cout << endl ;
    }
    return 0;
}