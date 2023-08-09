#include <iostream>

using namespace std;

int main()
{
    cout << "\n\Welcome to the addition program!\n\n" << endl;

    // This is a comment.
    // This input section prompts the user for two (integer) numbers.
    int num1 = 0;
    int num2 = 0;
    int theSum = 0;
    int theProduct = 0;
    int theResult = 0;
    int theDiff = 0;

    // Get the first number from the user.
    cout << "\n Please enter the first number...";
    cin >> num1;

    //Get the second number from the user.
    cout << "\n Please enter the second number...";
    cin >> num2;

    // Add the two numbers
    theSum = num1 + num2;

    // Output the sum!
    cout << "\n\n The sum is " << theSum << "!";

    //Processing.
    theProduct = num1 * num2;

    // Output the product.
    cout << "\n\n The product is " << theProduct << "!";

    //Processing.
    theResult = num1 / num2;

    // Output the result.
    cout << "\n\n The result is " << theResult << "!";

    //Processing.
    theDiff = num1 - num2;

    // Output the result.
    cout << "\n\n The Difference is " << theDiff << "!";


    return 0;
}
