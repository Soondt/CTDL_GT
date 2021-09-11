#include<iostream>
// cap phat dong cho mang 2 chieu __ tong 
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	// cap phat dong cho mang 2 chieu dang nhu 1 chieu
	int* arr = new int[n * m];
	
	for (int i = 0; i < n * m; i++) {
		cin >> arr[i];
	}
	// tinh  tong theo tung hang
  
	int index = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += arr[index];
			index++;
		}
		cout << sum << endl;
	}

	delete[]arr;
	return 0;
}