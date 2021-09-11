#include<iostream>

using namespace std ; 

struct Student
{
    string name ;
    int  age ;
    string classs;
    float score;

    void hienthi()
    {
        cout << "Name : " << name << endl ;
        cout << "Age : " << age << endl;
        cout << "Class : " << classs << endl;
        cout << "Score : " << score << endl ;
    }
};

int main ()
{
    int n ;
    cout << "Nhap so thanh vien =  " ; 
    cin >> n ;
    // cap phat dogn cho mang Student 
    Student *students = new Student[100];

    for (size_t i = 0; i < n ; i++)
    {
        cin >> students[i].name >> students[i].age >> students[i].classs >> students[i].score; 
    }
    // so sanh ket qua
    Student s = students[0];
    for (size_t i = 1; i < n; i++)
    {
        if (students[i].score > s.score)
        {
            s = students[i]; 
        }
        
    }
    cout << "-------------------------------\n";
  
    
        s.hienthi();
    
    
    delete[] students;
    return 0 ;
}