#include<iostream>

using namespace std;

void quickSort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}
int result(int a[], int n, int k){
	int count = 0;
	for (int i = 1; i < n; i++){
		if (a[i] - a[i-1] > k){
			count ++;
		}
	}
	return count + 1;	
}
int a[100001];
int main()
{
	int n, k;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];		
	}
	cin >> k;
	quickSort(a, 0, n-1);
	cout << result(a, n, k);
    return 0;
}