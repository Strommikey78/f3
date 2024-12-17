#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string s;
    map<string,int> mymap;
    map<string,int>::iterator i;
    mymap.insert(pair<string,int>("maharashtra",20));
    mymap.insert(pair<string,int>("kerala",34));
    mymap.insert(pair<string,int>("madhyapradesh",25));
    mymap.insert(pair<string,int>("punjab",10));
    mymap.insert(pair<string,int>("delhi",20));
    mymap.erase("madhyapradesh");

    for(i=mymap.begin();i!=mymap.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    cout<<"enter the state :-";
    cin>>s;

    cout<<"population of state(in millions) :-"<<mymap[s]<<endl;
    cout<<"population of state (in millions :-)"<<mymap["madhyapradesh"];


    return 0;

}
