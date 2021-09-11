#include<iostream>
// chi do chan gia tri le ... in ra kien bool kt de kt cho 2 truong hop
using namespace std;

int a[100001];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool kt = true;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0 && a[i] % 2 == 1){
            cout << a[i] << " ";
            kt = false;
        }
    }
    if (kt) cout << "NULL";
    return 0;
}