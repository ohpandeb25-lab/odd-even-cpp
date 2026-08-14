#include <iostream>
using namespace std;

int main() {
    int n;  // Variable to store the input number

    cout << "Enter a number: "; //Added uppercasing to the prompt for better readability    
    cin >> n;

    if(n % 2 == 0) // Check if the number is even
        cout << "Number is even"; //Added uppercasing to the output for better readability
    else
        cout << "Number is odd"; //Added uppercasing to the output for better readability

    return 0;
}