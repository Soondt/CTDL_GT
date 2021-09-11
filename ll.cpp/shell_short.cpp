#include<iostream>
//interval sẽ nhận giá trị lần lượt là n/2, n/4, n/8 cho đến khi interval = 1.
//a = [9, 1, 3, 7, 8, 4, 2, 6, 5]
// Với interval = 9/2 = 4, ta sẽ chia dãy thành các dãy con với các số cách nhau một khoảng là interval: [9, 8, 5], [1, 4], [3, 2] và [7, 6].
using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
	cout << endl;
}
void shellSort(int a[] ,int n)
{
    int temp , i ,j , kc;
    // chia day ra n/2 -> n/4 -> n/4
    for(kc = n /2 ; kc > 0 ; kc /= 2)
    {
        // gan cho vi tri va gia tri tai vi tri day
        for(i = kc ; i < n ; i ++)
        {
            temp = a[i];
            // so sanh gia tri cua cac vi tri roi sap xep theo tang dan
            for(j = i ; j >= kc && a[j - kc] > temp ; j -= kc)
            {
                a[j] = a[ j - kc ];
            }
            a[j] = temp ;
        }
    } 
}
int a[100001];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];		
	}
	shellSort(a, n);
	printArray(a, n);
    return 0;
}