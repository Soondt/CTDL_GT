#include<iostream>
#include<stack>

using namespace std;

int main(){
	string s;
    //size : tra ve kich thuoc hien tai cua stack
    // empty : true stack neu rong va nguoc lai
    // push : day pt vao stack 
    //pop : loai bo pt o dinh cau stack 
    // top : truy cap toi pt o dinh stack
	stack<char> st;
    // doc ca dong
	getline(cin,s);
	for (int i = 0; i < s.length(); i++){
		st.push(s[i]);
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	
	return 0;
}
/*
    string s;
    stack <char> st ;
    // nhap chuoi s dang co dau cach
    getline(cin, s);
    for(int i = 0 ; i < s.length() ; i ++)
    {
        st.push(s[i]);
    }
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
*/