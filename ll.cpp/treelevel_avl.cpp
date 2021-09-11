#include<iostream>
#include<math.h>
//node con bên trái luôn nhỏ hơn node cha, 
//node con bên phải luôn lớn hơn học bằng node cha.
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
node *insert(node *t ,int x)
{
    if(t == NULL)
    {
        node *temp = new node;
        temp ->data = x ;
        temp ->left = NULL;
        temp ->right = NULL;
        return temp;
    }else{
        if( x < t->data )
        {
            t->left = insert(t->left,x);
        }else{
            t->right = insert(t->right,x);
        }
    }
}
// tao ham de tim level trong TREE
int treelevel(node *t)
{
    if(t == NULL) return -1;
    return 1+ max(treelevel(t->left),treelevel(t->right));
}
bool check(node *t)
{
    if(t==NULL) return true;
    if(abs(treelevel(t->left) - treelevel(t->right) > 1)) return false;
    return check(t->left) && check(t->right);
}
int main(){
	int n, temp;
	cin >> n;
	node * t = NULL;
	for (int i = 0; i < n; i++){
		cin >> temp;
		t = insert(t, temp);
	}
	cout << check(t) << endl;
	
	return 0;
}