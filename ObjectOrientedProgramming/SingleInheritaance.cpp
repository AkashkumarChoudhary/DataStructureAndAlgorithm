#include<iostream>
using namespace std;

class Human 
{
    protected :
    string name;
    int age;

    public :
    Human (){
        cout<< "Hello World \n";

    }
    ~Human (){
        cout<< "Hello World \n";

    }
    void work ()
    {
        cout<< "I am working \n";
    }
};

class Student :public Human 
{
    int roll_number , fees;

    public:
    // Student (string name, int age, int roll_number, int fees)
    // {
    //     this->name = name;
    //     this -> age = age;
    //     this ->roll_number = roll_number ;
    //     this-> fees = fees;
    // }
    Student ()
    {
        cout<< "Hello Student\n";
    }
    ~Student ()
    {
        cout<< "Hello Student\n";
    }
};

int main (){
    // Student A("Akash", 21, 21, 2000);
    Student A;
}