#include <iostream>
using namespace std;

template <typename t>
void selection_sort(t arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
                arr[i]=arr[i]+arr[min];
                arr[min]=arr[i]-arr[min];
                arr[i]=arr[i]-arr[min];
            }
        }
    }

}
int main()
{
    int choice;
    cout<<"enter choice :1)integer array 2)float array  :-";
    cin>>choice;

    int size;
    cout<<"enter size of array :-";
    cin>>size;

if(choice==1)
{
    int arr[size];

    cout<<"enter the elements in array :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    selection_sort(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
else if (choice==2)
{
    float arr[size];

    cout<<"enter the elements in array :";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }

}
else
{
    cout<<"user exited !!";
}

return 0;
}