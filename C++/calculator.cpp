#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //console calculator prgm

    char op;
    double num1;
    double num2;
    double result;

    cout << "Calculator program" << endl << "Enter the operator: ";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "The addition of " << num1 << " and " << num2 << " is: " << result;
        break;

    case '-':
        result = num1 - num2;
        cout << "The addition of " << num1 << " and " << num2 << " is: " << result;
        break;

    case '*':   
        result = num1 * num2;
        cout << "The addition of " << num1 << " and " << num2 << " is: " << result;
        break;

    case '/':
        if(num1 != 0 and num2 !=0){

            result = num1 / num2;
            cout << "The addition of " << num1 << " and " << num2 << " is: " << result;
            break;
        }

        else{
            cout << "Do not enter zero";
        }

    case '%':

        if(num1 != 0 && num2 !=0){

            result = (int) num1 % (int) num2;
            cout << "The addition of " << num1 << " and " << num2 << " is: " << result;
            break;  
        }

        else{
            cout << "Do not enter zero";
        }
        
    
    default:
        cout << "Enter an expression (+,-,*,/,%)";
        break;
    }


    return 0;
}

