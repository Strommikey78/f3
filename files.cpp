#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
    public:
    string name;
    int salary;
    int age;

    void getdata()
    {
        cout<<"Enter the name :-";
        cin>>name;

        cout<<"Enter the salary :-";
        cin>>salary;

        cout<<"Enter the age :-";
        cin>>age;
    }

    void showdata()
    {
        cout<<name<<"\t"<<salary<<"\t"<<age<<endl;
    }
};
int main()
{
    Employee o[5];
    fstream f;
    int n,i;
    f.open("input.txt",ios::out);
    cout<<"\n how many empolyee information u want to store :-";
    cin>>n;
    cout<<"\n enter the information of employee :-";
    for(i=0;i<n;i++)
    {
        cout<<"\n enter the information of "<<i+1<<"employee";
        o[i].getdata();
        f.write((char *)&o[i],sizeof(o[i]));
    }
    f.close();
    f.open("input.txt",ios::in);
    for(i=0;i<n;i++)
    {
        f.read((char *)&o[i],sizeof(o[i]));
        o[i].showdata();
    }
    f.close();
    return 0;
}
