//count the number of word
#include<iostream>
using namespace std;
int main()
{
  string s;
  cout<<"Enter string:";
  getline(cin,s);
  int count=0;

  for(char ch:s)
  {
     if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
     {
         count++;

    }
 }
cout<<count<<endl;
return 0;

}
