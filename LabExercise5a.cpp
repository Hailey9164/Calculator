/*
* CSC/CIS-5-48828/48893  Fall 2023 Program Logic Using C++
 *
 * INSTRUCTOR: Charles Locke
 * STUDENT:    Hailey Campbell
 * ASSIGNMENT: Lab Exercise 4a
 * DUE DATE:   09/23/2023
 *
 */

/* Place Library References Here */
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 4a
 * Main Program
 * Description: Following the guidelines in the assignmnet, solve simple arthmetic
 *              expressions. For example:
 *
 *                 23.5 + -2.3
 * 
 * 4c 
 * Replace the if-else-if statements with a switch statement.
 * Add operators 'X' and 'x' to perform multiplication (there are now three 
 *  possible multiplication operators)
 * Remove the user prompt.  When you run it, just start entering the expression.
 * Use the 'default' switch case to handle invalid operators. 
 * 
 * 5a
 * Create a loop
 * Allow the '#' operator to turn off the calculator
 */
int main() {

  cout << "Professor Locke's SuperRich-boy Calculator \n";
  cout << "Solves arithmetic expressions using * X x, /, +, -, ^ or % \n";
  cout << "Enter an expression with the '#' operator to exit \n\n";
  cout << "Calculator ON \n\n";
  
  // ??? Define variables and constants
  double operand1, operand2, answer;
  char op = 0; 
  while (op != '#') {
    // ??? Ask the user to enter an expression as shown in the
    //     assignment then read the expression 
    cin >> operand1 >> op >> operand2;

    // ??? Use switch and case statements to solve the equation.
    switch (op)
    {
        case '*':
        case 'x':
        case 'X':
            answer = operand1*operand2;
            cout << operand1 << " " << op << " " << operand2 << " = " << answer << endl << endl;
            break;
        case '/':
            answer = operand1/operand2;
            cout << operand1 << " " << op << " " << operand2 << " = " << answer << endl << endl;
            break;
        case '+':
            answer = operand1+operand2;
            cout << operand1 << " " << op << " " << operand2 << " = " << answer << endl << endl;
            break;
        case '-':
            answer = operand1-operand2;
            cout << operand1 << " " << op << " " << operand2 << " = " << answer << endl << endl;
            break;
        case '^':
            answer = pow(operand1,operand2);
            cout << operand1 << " " << op << " " << operand2 << " = " << answer << endl << endl;
            break;
        case '%':
            operand1 = static_cast<int> (operand1);
            operand2 = static_cast<int> (operand2);
            answer = int(operand1)%int(operand2);
            cout << operand1 << " " << op << " " << operand2 << " = " << answer << endl << endl;
            break;     
        case '#':
            break;
        default:
            cout << "Error: Invalid operator '" << op << "'." << endl << endl;
    }
    // ??? Output the expression and the answer in the
    // format shown in the assignment
  }
  cout << endl << "Calculator OFF";
  return 0;       
  }