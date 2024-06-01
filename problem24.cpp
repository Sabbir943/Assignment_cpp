#include <iostream>
using namespace std;

void swapping(int n1, int n2) // Passing variables by reference
{
    int temp;
    cout << "Before swapping: " << n1 << "," << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "After swapping: " << n1 << "," << n2 << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter Two Numbers: ";
    cin >> n1 >> n2;
    swapping(n1, n2);
     
    return 0;
}
