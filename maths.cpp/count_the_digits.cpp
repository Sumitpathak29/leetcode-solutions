#include <iostream>
using namespace std;

// Function to count number of digits in a number
int countDigit(int n) {

    // Special case: if number is 0, it has 1 digit
    if(n == 0)
        return 1;

    int cnt = 0;   // Variable to store digit count

    // If number is negative, convert it to positive
    if(n < 0)
        n = -n;

    // Loop runs until number becomes 0
    while(n > 0){

        // Extract the last digit using modulus operator
        // Example: 1234 % 10 = 4
        int lastDigit = n % 10;

        // Increase digit counter
        cnt = cnt + 1;

        // Remove the last digit using division
        // Example: 1234 / 10 = 123
        n = n / 10;
    }

    // Return total number of digits
    return cnt;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of digits: " << countDigit(num);

    return 0;
}
