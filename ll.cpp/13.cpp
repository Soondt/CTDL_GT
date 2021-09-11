#include<iostream>

using namespace std ;

struct Student
{
    int age ;
    string name;
    void display()
    {
        cout << "Name : " << name << endl ;
        cout << "Age  : " << age << endl ;
    }
    void nhap()
    {
        cin >> name;
        cin >>age ;
    }
};
int main  ()
{
    int n ;
    cout <<"Nhap n = ";
    cin >> n ;
    Student *student = new Student[100];
    // nhap  
    for (size_t i = 0; i < n; i++)
    {
        student[i].nhap();
    }
    cout << "-------------------------------\n";
    for (size_t i = 0; i < n; i++)
    {
        student[i].display();
    }
    
    delete[] student;
    return 0;
}
