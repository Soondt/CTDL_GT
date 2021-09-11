#include<iostream>
#include<queue>
using namespace std ;
int main ()
{
    int n, k , temp ;
    cin >> n ;
    queue<int > q ;
    for (size_t i = 0; i < n ; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    cin  >> k ;
    for (size_t i = 0; i < k ; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0 ;
}