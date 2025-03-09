
#include<iostream>
#include<vector>
using namespace std;


class Person
{    
   public:    
   // 函数的声明
    Person(){};
    ~Person(){};
    virtual void Eat(){ cout << "吃饭！" << endl; };
    virtual void Drink() = 0;

};


class Man : public Person
{

    public:
    Man() : Person() {};
    
    void Drink() override
    { cout << "Man Gulp Drink Water!" << endl; };
};


class Woman:public Person
{
    public:
    Woman():Person(){};
    void Drink() override
    { cout << "Woman Gulp Drink Water!" << endl;}


};


int main()
{

    vector<Person*> p;
    auto man = new Man();
    auto woman = new Woman();
    p.push_back(man);
    p.push_back(woman);
    for(Person* pp : p)
    {
        pp->Eat();
        pp->Drink();

    }



    return 0;
}

