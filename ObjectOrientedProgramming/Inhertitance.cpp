#include<iostream>
using namespace std;

class Human 
{
    // 1st
    // string name;
    // int age, weight;
    // 2nd
     protected:
     string name;
    int age, weight;
    // public:
    //  string name;
    // int age, weight;
};

// class Student:public Human{
//     private:
//     int roll_number, fees;
// };
class Student:protected Human{
    private:
    int roll_number, fees;
    
    public :
    
    void fun(string n, int  a, int w)
    {
        name = n;
        age = a;
        weight = w;
    }
    void display (){
        cout<< name << " " << age << " " << weight << " " ;
    }
};

int main()
{

    // 1st
    // Student A;
    // A.name = "akash;
    // not allowed to access from private
    // 2nd 
    // Student A;
    // A.name = "akash;
    // not allowed to access from protected
    Student A;
    // A.name = "akash";
    A.fun("rohit", 10,50);
    A.display();
}