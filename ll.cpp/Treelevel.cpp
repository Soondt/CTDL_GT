#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
node *insert(node *t, int x)
{
    if(t== NULL)
    {
        node *temp = new node;
        temp -> data =x;
        temp ->left = NULL;
        temp ->right = NULL;
        return temp;
    }else{
        if(x > t->data){
            t->right = insert(t->right,x);
        }else{
            t->left = insert(t->left,x);
        }
    }
}
bool isleadTRee(node *l)
{
    return (l->left == NULL && l ->right == NULL);
}
int TReelevel(node * t)
{
    if(t ==NULL) return -1;
    if(isleadTRee(t)) return 0 ;
    return 1 + max(TReelevel(t->left), TReelevel(t->right));
}
int main ()
{
    int n,temp;
    cin >> n;
    node *t = NULL;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> temp ;
        t = insert(t,temp);
    }
    cout << TReelevel(t);
    return 0;
}

