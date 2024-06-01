#include<iostream>
using namespace std;
int main()
{
    int n1,n2,count;
    cout<<"Enter strating Number:";
    cin>>n1;
    cout<<"Enter Ending Number:";
    cin>>n2;
    while(n1<=n2)
    {
      count=0;
      for(int i=2;i<=n1/2;i++)
      {
        if(n1%i==0)
        {
            count++;
            break;
        }

      }
      if(count==0)
      {
        cout<<n1<<" ";
      }
      n1=n1+1;
    }
    return 0;

}