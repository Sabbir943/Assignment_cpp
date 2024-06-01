//WAP in C++ to count even and odd elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,13,45,32,60};
    int count_odd=0,count_even=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    cout<<"Number of even:"<<" "<<count_even<<endl;
    cout<<"Number of odd:"<<" "<<count_odd<<endl;
    return 0;

}