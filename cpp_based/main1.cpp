#include<iostream>
using namespace std;

struct Student 
{
    string name;
    int age;
    int score;
};


int main()
{

    struct Student st = {"张三", 10, 100};

    struct Student * st1 = new Student;
    st1->age=12;

    
    return 0;
}



