#include <iostream>
using namespace std;

int main() {
    int n; //This variable is used to store the number input by the user. It is declared as an integer type since we are dealing with whole numbers. 

    cout << "Enter a number: "; //Changed the case sensitivity of the output to make it more user-friendly and readable.
    cin >> n;

    if(n % 2 == 0) //This is done to check if the number is even or odd as even numbers are divisible by 2 and odd numbers are not.
        cout << "even";
    else
        cout << "odd";

    return 0;
}