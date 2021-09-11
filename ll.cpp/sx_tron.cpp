#include<iostream>
using namespace std;
void Merge(int a[] , int left, int mid, int right)
{
    //chia pt mang
    int n1 = mid - left +1;
    int n2 = right -mid ;
    // tao 2 mang con luu 2 mang con
    int *leftArr = new int [n1];
    int *rightArr = new int [n2];
    //sao chep pt 2 mang con vao mang tam
    for(int i = 0 ; i < n1 ; i ++)
    {
        leftArr[i] = a[left +i];
    }
    for(int j = 0 ; j < n2 ; j ++ )
    {
        rightArr[j] = a[mid +1 + j]; 
    }

    // curent la vi tri hien tai 
    int i =0 , j = 0 , current = left;

    // tron 2 mang vao theo dung thu tu
    while (i < n1 && j < n2)
    {
        if(leftArr[i] <= rightArr[j])
        {
            a[current++] =  leftArr[i++];
        }else
        {
            a[current++] = rightArr[j++];
        }
    }

    // neu mang thu nhat con pt thi copy vao mang a
    while (i < n1)
    {
        a[current++] = leftArr[i++]; 
    }
    while (j < n2)
    {
        a[current++] = rightArr[j++]; 
    }

    // xoa cap phat
    delete [] leftArr,rightArr;
}
void _mergerSort(int a[] ,int left ,int right)
{
    // kiem tra xem co con chia doi dc khong
    if(left < right)
    {
        // tim pt chinh giua
        //tranh bi tran do right lon
        int mid = left + (right - left)/2;
        _mergerSort(a,left,mid);
        _mergerSort(a,mid +1 , right);
        // tron
        Merge(a,left,mid,right);
    }
}
void printArray(int a[], int n){
    for (int i = 0; i < n; i++){
    	cout << a[i] << " ";
	}
}
int a[100001];
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
    _mergerSort(a, 0, n - 1);
    printArray(a, n);
    
    return 0;
}