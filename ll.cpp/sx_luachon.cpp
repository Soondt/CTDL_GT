#include<iostream>
using namespace std ;
void print(int *a ,int n)
{
    for(int i =0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}
void luachon(int *a , int n )
{
    int min;
    for (size_t i = 0; i < n -1 ; i++)
    {
        min = i ;
        for (size_t j = i +1; j < n; j++)
        {
            if(a[min] > a[j])
            {
                min = j ;
            }
        }
        if(min != i )
        {
            swap(a[i] , a[min]);
        } 
    } 
}

int main()
{
    int n ,a[100];
    cin >> n ;
    for(int i = 0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    luachon(a,n);
    print(a,n);
    return 0 ;
}