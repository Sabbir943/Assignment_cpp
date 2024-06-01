//22. Sum of series in C++ language 1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ..... + 1/(n*n).
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double sum=0,a;
    int n,i;
    cout<<"Enter Range of serice:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       a=1/pow(i,i);
       sum+=a;
    }
    cout<<"Sum of Serice: "<<sum<<setprecision(3)<<endl;
    return 0;
}
