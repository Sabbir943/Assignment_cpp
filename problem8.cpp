#include<iostream>
bool check_vowel(char ch)
{
    ch=tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
using namespace std;
int main()
{

    string s;
    cout<<"Enter string:";
    getline(cin,s);
    cout<<"The string are vowel"<<endl;
    for(char ch:s)
        {

            if(check_vowel(ch))
            {
                cout<<ch<<' ';
            }


        }
        cout<<endl;
        return 0;
}

