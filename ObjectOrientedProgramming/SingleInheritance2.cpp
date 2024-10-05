#include<iostream>
using namespace std;

class Human
{
    protected:
    string name ;
    int age;

    public :
    Human (string name, int age)
    {
        this-> name = name;
        this->age =age;

    }

    void display ()
    {
        cout<< name << age << " "; 
    }
    void work ()
    {
        cout<< "Iam working \n";
    }
};

class Student : public Human
{
    int roll_Number , fees;

    public :
    Student(string name, int age, int roll_Number, int fees ) : Human (name, age)
    {
        this ->roll_Number = roll_Number;
        this->fees = fees;
    }
    void display()
    {
        cout<< name << age<< roll_Number << fees << " ";
    }
};

int main ()
{
    Student A("Akash", 21 , 84, 11000);
    A.display();
}