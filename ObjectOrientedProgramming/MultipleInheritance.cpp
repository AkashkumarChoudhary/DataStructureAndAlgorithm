#include<iostream>
using namespace std;

class Engineer 
{
    void money()
    {
        cout<< "Hello Money\n";
    }
    public:
    string specilization;

    Engineer ()
    {
        cout<< "Hello engineer \n";
    }

    void work()
    {
        cout<< "I Have specialization in " << specilization << endl;

    }
};

class Youtuber
{
    public :
    int subscribers;

    Youtuber ()
    {
        cout<< "Hello Youtuber\n";
    }
    void contentcreator()
    {
        cout<< "I have a subscriber base of " <<subscribers << endl;
    }
};

class CodeTeacher : public Engineer , public Youtuber{
    public :
    string name;

    CodeTeacher()
    {
        cout<< "Hello coder \n";
    }
    CodeTeacher(string name, string specilization, int subscribers)
    {
        this->name = name;
        this->specilization= specilization;
        this->subscribers= subscribers;
    }
    void showcase()
    {
        cout<< "my name is "<< name<<endl;
        work();
        contentcreator();
    }
};

int main()
{
    CodeTeacher A1("Akash", "CSE", 30);
    A1.showcase();
    // A1.money();
}
