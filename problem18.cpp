//18. WAP in C++ to copy all elements of one array to another.
#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={10,20,30,40,50};
    int temp;
    for(int i=0;i<5;i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    cout<<"First Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Second Array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}