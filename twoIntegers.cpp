/* Jacob St Lawrence
 This program prompts the user to enter 2 integer numbers. It then display all odd
 numbers between them, the sum of the even numbers between them, the numbers 1 through
 10 and their squares, the sum of the squares of all odd numbers between the input
 integers, and all upper case letters. */

#include <iostream>
#include <iomanip>

using namespace std;

int main()  //start main
{
    //declare variables to be used
    int firstNum, secondNum;
    int sumEven = 0;
    int sumSquareOdd = 0;

    char chCounter;

    int counter;

    cout << "Enter two numbers." << endl;  //display instructions requesting input
    cout << "First number must be less than "
        << "the second number you enter" << endl;
    cout << "Enter numbers: " << flush;
    cin >> firstNum >> secondNum;  //assign input to variables
    cout << endl;

    if (firstNum % 2 == 0) //check if first number is even
        counter = firstNum + 1;    //if it is even, begin with odd number that follows
    else   //if it is odd, begin with input number
        counter = firstNum;

    cout << "Odd integers between " << firstNum << " and "
        << secondNum << " are: " << endl; //display message before output

        for (int i = counter; i <= secondNum; i += 2)  //for loop to run through odd numbers
        {
            cout << i << " ";  //output each number
        }

    cout << endl;

    if (firstNum % 2 == 0) //check if first number is even
        counter = firstNum;    //if it is even, begin with input number
    else
        counter = firstNum + 1;    //if it is odd, begin with even number that follows

        for (int i = counter; i <= secondNum; i += 2) //for loop to run through even numbers
        {
            sumEven = sumEven + i; //accumulate each number in sum
        }

    cout << "Sum of even integers between " << firstNum << " and "
        << secondNum << " = " << sumEven << endl; //display resulting output

    cout << "Number    Square of Number" << endl;  //display header for output table
        for (int i = 1; i <= 10; i++)   //for loop to run through numbers 1-10
        {
            cout << setw(4) << i << setw(18)
            << i * i << endl; //square each number, format output to display as table
        }

    cout << endl;
 
    if (firstNum % 2 == 0)  //check if first number is even
        counter = firstNum + 1; //if it is even, begin with odd number that follows
    else
        counter = firstNum; //if it is odd, begin with input number

        for (int i = counter; i <= secondNum; i += 2) //for loop to run through odd numbers
        {
            sumSquareOdd = sumSquareOdd + i * i; //square number and accumulate to sum
        }

    cout << "Sum of the squares of odd integers between "
        << firstNum << " and " << secondNum << " = "
        << sumSquareOdd << endl;    //display output

    cout << "Upper case letters are: "; //display message before output

    chCounter = 'A';    //initialize character counter at A
        for (char i = chCounter; i <= 'Z'; i++) //for loop to run through uppercase alphabet
        {
            cout << i << " ";   //display each letter
        }
    cout << endl;

    return 0;
}
