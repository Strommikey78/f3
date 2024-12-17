#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll_number;
    string classname;
    char division;
    int contact_number;

    static int stc;
    static int count()
    {
        cout<<"object created :-"<<stc;
    }

    Student()
    {
        name="yashu";
        roll_number=45;
        classname="se";
        division='A';
        contact_number=9988;
        ++stc;
    }

    void get_data()
    {
        cout<<"enter the name :-";
        cin>>name;
        cout<<"enter the roll_number :-";
        cin>>roll_number;
        cout<<"enter the class name :-";
        cin>>classname;
        cout<<"enter the division :-";
        cin>>division;
        cout<<"enter the contact number :-";
        cin>>contact_number;
    }
    
    /*void show_data()
    {
        cout<<"name:-"<<name<<endl;
        cout<<"roll number :-"<<roll_number<<endl;
        cout<<"class :-"<<classname<<endl;
        cout<<"division :-"<<division<<endl;
        cout<<"contact number :-"<<contact_number<<endl;

    }*/
friend void show_data(Student s);

};
int Student::stc=0;
void show_data(Student s)
{
    cout<<"name:-"<<s.name<<endl;
    cout<<"roll number :-"<<s.roll_number<<endl;
    cout<<"class :-"<<s.classname<<endl;
    cout<<"division :-"<<s.division<<endl;
    cout<<"contact number :-"<<s.contact_number<<endl;

}

int main()
{
    Student s1;
    s1.get_data();
    show_data(s1);
    s1.count();

    return 0;
}
