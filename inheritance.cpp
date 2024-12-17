#include <iostream>
using namespace std;
class Publication
{
    public:
    
    float price;
    string title;

    Publication()
    {
        price=0;
        title=" ";
    }

    void getdata()
    {
        cout<<"Enter the price of publication :-";
        cin>>price;

        cout<<"Enter the title of publication :-";
        cin>>title;
    }

    void showdata()
    {
        cout<<"The price of Publication :-"<<price<<endl;
        cout<<"The title of the publication :-"<<title<<endl;
    }
};
class Book:public Publication
{
    public:
    int page_count;

    Book()
    {
        page_count=0;
    }

    void getdata()
    {
        cout<<"Enter the number of the pages :-";
        cin>>page_count;
        
        try
        {

            if(page_count<0)
            {
                throw 1;
            }

        }
        catch(int a)
        {
            title="0";
            price=0;
            page_count=0;

            cout<<"Enter the page count greater than zero \n";
        }
        Publication::getdata();
    }

    void showdata()
    {
        
        cout<<"The number of pages in Publication is :-"<<page_count<<endl;
        Publication::showdata();
    }
};
class Tape:public Publication
{
    public:
    float play_time;

    Tape()
    {
        play_time=0;
    }

    void getdata()
    {
        

        cout<<"Enter the playing time of publication :-";
        cin>>play_time;

        try
        {

            if(play_time<0)
            {
                throw 1;
            }

        }
        catch(int a)
        {
            title="0";
            price=0;
            play_time=0;

            cout<<"enter the playtime more than one ";
        }

        
        Publication::getdata();
    }

    void showdata()
    {
        
        cout<<"The playtime of the Publication is :-"<<play_time<<endl;    
        Publication::showdata();
    }

};
int main()
{
    Book b;
    b.getdata();
    b.showdata();

    Tape t;
    t.getdata();
    t.showdata();

    return 0;
}

