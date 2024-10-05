#include<iostream>
using namespace std;

class Human 
{
    string Religion , color;
    protected:
    string name;
    int age, weight;
};

class Student :private Human 
{
    private :
    int roll_number ,fees;
    public:
    Student (string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age= age;
        this ->weight = weight;
        this->roll_number=roll_number;
        this->fees= fees;
    }
    void display()
    {
        cout << name << " age is " << age << " weight is "<<weight << " roll_number is " << roll_number<< " fees is " << fees << " ";
    }
};

int main()
{
    Student A ("Akash", 12, 70, 20, 250);
    A.display();
}