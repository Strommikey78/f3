#include <iostream>
using namespace std;
class complex
{
    public:
        int real;
        int imaginary;

        void getdata()
        {
            cout<<"enter the real and the imaginary part :";
            cin>>real;
            cin>>imaginary;
        }
        complex(int r=0,int i=0)
        {
            real=r;
            imaginary=i;
        }

        complex operator +(complex &c1)
        {
            complex res;
            res.real=real+c1.real;
            res.imaginary=imaginary+c1.imaginary;
            return res;
        }

        complex operator *(complex &c2)
        {
            complex res;
            res.real=real*c2.real-imaginary*c2.imaginary;
            res.imaginary=real*c2.imaginary+imaginary*c2.real;
            return res;
        }

        void showdata()
        {
        
            cout<<real<<"+"<<imaginary<<"i";
        }
        friend istream &operator>>(istream &input,complex &t);
        friend ostream &operator<<(ostream &output,complex &t);

};

istream &operator>>(istream &input,complex &t)
{
    cout<<"enter the real part :";
    input>>t.real;
    cout<<"enter the imaginary part :";
    input>>t.imaginary;
}

ostream &operator<<(ostream &output,complex &t)
{
    output<<t.real<<"+"<<t.imaginary<<"!";
}
int main()
{
    complex n;
   /*/c1.getdata();
    //n.showdata();
    complex n1(1,2),n2(2,4);
    complex n3=n1+n2;
    cout<<"the addition is :"<<endl;
    //n3.showdata();

    complex m1(1,1),m2(1,1);
    complex m3=m1*m2;
    cout<<"the multiplication is :"<<endl;
    //m3.showdata();*/

    complex p1,p2;
    cin>>p1;
    cin>>p2;
    
    complex p3=p1+p2;
    cout<<p3;

    
    return 0;
}