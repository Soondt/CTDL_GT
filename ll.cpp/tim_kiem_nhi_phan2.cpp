#include<iostream>
// 1 2 3 4 5 nhap k =5 in ra 2 3 || k=9 >> 2 3 4 (tong 2 so gan nhau bang k thi in ra)
using namespace std;
int a[100];
int b[100];
int Tim(int a[] , int n ,int x)
{
    int l = 0 , r= n-1;
    while(l < r)
    {
        int mid = (l + r)/2;
        if(mid < x )
        {
            l = mid + 1 ;
        }else
        {
            r = mid; 
        }
    }
    if(a[l] == x )
    {
        return l ;
    }
    return -1 ;
}
void print(int a[] , int n ,int l ,int r)
{
    for(int i = l ;i <= r ;i ++)
    {
        cout << a[i] << " ";
    }
}
bool solve(int a[] , int b[], int n ,int s )
{
    // tao b[] de luu gia tri tong lan luottrong mang a[]
    b[0] = a[0];
    for (size_t i = 0; i < n ; i++)
    {
        b[i] = b[i -1] + a[i];
    }
    for (size_t i = 0; i < n ; i++)
    {
        if(b[i] == s)
        {
            print(a,n,0,i);
            return true;
        }
        if(b[i] > s)
        {
            int l = Tim(b,n,b[i] - s);
            if(l != -1)
            {
                print(a,n,l+1,i);
                return true;
            }
        }
    }     
}
int main(){
	int n, s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> s;
	bool k = solve(a, b, n, s);
	if (!k){
		cout << -1;
	}
	return 0;
}