#include <iostream>
using namespace std;
int main()
{
 int i = 1, j = 0;

    // input entering number of rows
    int rows = 5;

    // given a character
    char character = 'A';


    // while loops checks the conditions until the
    // condition is false if condition is true then enters
    // in to the loop and executes the statements
    while (i <= rows) {

        while (j <= i - 1) {

            // printing character to get the required
            // pattern
            cout << character << " ";

            j++;

            // incrementing character value so that it
            // will print the next character
            character++;
        }
        cout << "\n";

        j = 0;
        i++;
    }
    return 0;
}
