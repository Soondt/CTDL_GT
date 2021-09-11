#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *create(int x)
{
    node *temp = new node;
    temp ->data = x;
    temp->next = NULL;
    return temp;
}
node *addElement(node *p ,int x)
{
    node *temp = create(x);
    temp ->next = p ;
    return temp ;
}
void print(node *l)
{
    node *p = l ;
    while(p != NULL )
    {
        cout << p -> data << " ";
        p = p ->next ;
    }
}

//them pt
node *add_dau(node * l , int x)
{
   
    node *temp = new node;
    temp ->data = x ;
    temp ->next = l ;
    l = temp ;
    return l ; 
}
node *addtail(node *l , int x)
{
    node * p = l;
    while (p-> next != NULL)
    {
        p = p ->next;
    }
    node * temp = new node;
    temp -> data = x ;
    temp ->next = NULL;
    p ->next = temp ;
    return l ;
}
node *add_at(node * l ,int k ,int x)
{
    node * p = l ;
    for(int i = 0 ; i < k-1; i ++)
    {
        p = p ->next;
    }
    node * temp = new node;
    temp -> data = x ;
    temp ->next = p ->next ;
    p ->next = temp ;
    return l ;
}
// xoa
node *deleteHead(node *l)
{
    node * p = l ;
    p = p ->next ;
    delete(l);
    return p;
}
node *deleteTail(node *l)
{
    node * p = l ;
    while(p ->next->next != NULL)
    {
        p = p ->next;
    }
    delete(p->next);
    p ->next = NULL;
    return l ;
}
node *deleteAT(node *l , int k)
{
    node * p = l ;
    for(int i= 0 ; i< k -1; i++)
    {
        p = p->next;
    }
    node *temp = p-> next ;
    p->next = p ->next->next;
    delete(temp);
    return l;
}
// tahy dooi gia tri a bang b
node *convert(node * l, int a ,int b)
{
    node * p = l ;
    while( p != NULL)
    {
        if(p ->data == a)
        {
            p ->data = b;
        }
        p = p->next;
    }
    return l ;
}

// in ra gia tri tai vi tri
node *getOne(node *l,int k)
{
    node *p = l ;
    for(int i = 0 ; i < k ; i ++)
    {
        p = p ->next;
    }
    return l ;
}

// tao linklist moi de luu nhung gia tri <= k
// can them pt vao cuoi _ va tao ra link list moi
node *addTaill(node * l , int x)
{
    // them pt moi vao cuoi cua list
    node *p = l;
    while(p ->next != NULL)
    {
        p = p ->next;
    }
    node *temp = new node ;
    temp -> data = x ;
    temp ->next = NULL;
    p->next = temp;
    return l ;
}
node *deleteBigger(node *l, int k)
{
    node * p = l ;
    node *ans = new node;
    // tao va in sao gia tri qua ans
    while( p != NULL)
    {
        if(p ->data <= k)
        {
            ans = create(p->data);
            p = p->next;
            break;
        }
        p = p->next;
    }
// them vao pt cuoi cung cua list ans
    while(p != NULL)
    {
        if(p ->data <= k )
        {
            ans = addTaill(p->data);

        }
        p = p ->next;
    }
    return ans;
}
node *getNode(node *l,int k )
{
    // xoa di pt khong thoa man dieu kien
    node *p = l ;
    for(int i = 0 ; i < k ; i++)
    {
        p = p ->next;
    }
    return p;
}
