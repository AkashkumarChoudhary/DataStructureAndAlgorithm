#include<iostream>
using namespace std;

class Person 
{
    protected:
     string name;
     public:
     void introduce ()
     {
        cout<< "Hello my name is:  " << name << endl;
     }
};

class Employee : public Person 
{
    protected :
    int salary;

    public :
    void monthly_Salary ()
    {
        cout<< "Hello my name is: " << salary <<endl;
    }
};

class Manager :public Employee
{
    public :
    string department;

    Manager(string name, int salary , string department)
    {
        this->name = name;
        this->salary = salary;
        this->department== department;
    }
    void work ()
    {
        cout<< "I am leading the department" << department << endl;
    }
};

int main ()
{
    Manager A1 ("Akash", 200 , "Finance");
    A1.introduce();
    A1.work();
    A1.monthly_Salary();
    // A1.salary = 200;
    A1.department = "admin";
    cout<<A1.department;
}