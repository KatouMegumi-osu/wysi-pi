#include <iostream>
#include <cmath>

using namespace std;

//Try to get pi using inifnite Leibniz formula
int main()
{
    constexpr double division = 1;
    double divided = 1;

    int counter = 0;
    double quarter_pi = 1;

    while(counter < 2147483647) {
        ++counter;
        quarter_pi = quarter_pi-(division/(divided+=2))+(division/(divided+=2));

        //Kudos to Zhuriel#0110 on thepoon discord
        if (counter % 100000000 == 0) {
            cout << "Checkpoint [" << counter << "]: " << quarter_pi*4 << '\n';
            cout.precision(90);
        } 

        if (counter == 2147483647) {
            cout << "last pi is: " << quarter_pi*4 << '\n';
            cout.precision(90);
        } 
    } 
}