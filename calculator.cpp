#include <iostream>

using namespace std;

int main()
{
    double number1, number2, answer = 0.0;
    int again = 0;
    char symbol;

    do
    {
        cout << "Enter value 1" << endl;
        cin >> number1;
        cout << "Enter value 2" << endl;
        cin >> number2;
        cout << "Enter symbol: + (add), - (subtract), * (multiply) or, / (divide)" << endl;
        cin >> symbol;
        
        if (symbol == '+')
        {
            answer = number1 + number2;
            cout << "answer = "  << answer << endl;
        }
        else if (symbol == '-')
        {
            answer = number1 - number2;
            cout << "answer = " << answer << endl;
        }
        else if (symbol == '*')
        {
            answer = number1 * number2;
            cout << "answer = " << answer << endl;
        }
        else if (symbol == '/')
        {
            answer = number1 / number2;
            cout << "answer = " << answer << endl;
        }
        else
            cout << "incorrect symbol" << endl;

        cout << "type 1 to calculate again." << endl;
        cin >> again;
    } while (again == 1);
}
