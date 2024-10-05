#include<iostream>
using namespace std;

class Human 
{
    protected :
    string name;
    int age;

    public :
    Human ()
    {

    };
    Human(string name, int age )
    {
        this->name= name;
        this->age= age;
    }
    void display ()
    {
        cout<< name<< " " << age <<endl;
    }
    void work()
    {
        cout<< "I am working\n";
    }
};
class Student :public Human{
    int roll_number,fees;

    public:
    Student(string name, int age, int roll_Number, int fees):Human(name,age)
    {
        this->roll_number= roll_Number;
        this->fees = fees;

    }
    void display()
    {
        cout<< name << " " << age << " "<<roll_number<< " "<<fees << endl;
    }
};

class Teacher : public Human{
    int salary;
    public :
    Teacher(int salary, string name ,int age)
    {
        this->salary= salary;
        this->name= name;
        this->age=age;
    }

    void display()
    {
        cout<< name << " " << age << " " <<salary << " "<<endl;
    }
};
int main ()
{
    Student A1 ("Akash", 12,10, 98);
    A1.display();
    Teacher A2 ( 99, "MOhit", 32);
    A2.display();
}