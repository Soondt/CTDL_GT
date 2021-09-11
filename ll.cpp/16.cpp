#include<iostream>
#include<stdbool.h>
#include<math.h>
using namespace std;
bool Nto(int n)
{
    if(n < 2 )
    {
        return false;
    }
    for(int i = 2 ; i <= (sqrt(n)) ; i++ )
    {
        if(n %i == 0 )
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int n ;
    cin >> n ;
    int *arr = new int[100];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(Nto(arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}