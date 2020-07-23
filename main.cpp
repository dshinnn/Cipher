/*************************************************************************
 * AUTHOR           :  David Shin
 * Project          :  Mathematics Specification
 ************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;
/*************************************************************************
* Mathematics Specification
* _________________________________________________________________________
* This is a school project which required us to create a program that would 
* prompt for an mathematical operation (addition, subtraction, division, 
* mulitplication, absolute value, square root, quadratic, pythagorean) and 
* returns the results.
* _________________________________________________________________________
* INPUT:
*    num1          :  Asks for the first number for the equation
*    num2          :  Asks for the second number for the equation
*    num3          :  Asks for the third number for the equation
*    operation     :  Asks the user what operation to execute
* OUTPUT:
*    result        :  Processes the equations and is included in the output
*                     statement
*__________________________________________________________________________
*************************************************************************/
int main(int argc, char *argv[])
{
    double num1, num2, num3;    //  INPUT - first, second and third number
    double result;              //  CALC & OUT - Calculates the equation
                                //               and is included in the
                                //               ouput statment

    double pResult, nResult;    //  CALC - Calculates the negative and
                                //         positive results of the
                                //         quadratic formula


    string operation;           //  INPUT - The variable used to get the
                                //          operation requested

    //  OUTPUT - Asks for the operation
    cout << "Please choose an operation: " << endl;
    //  INPUT - Initializes the variable operation
    cin >> operation;

    if (operation != "addition" && operation != "subtraction"
        && operation != "multiplication" && operation != "division"
            && operation != "quadratic" && operation != "sqrt"
            && operation != "pythagorean" && operation != "fabs")
    {
        //  OUTPUT - Outputs error when the operation is not supported
        cout << "Error: Operation not supported." << endl;
    }
    else
    {
        //  OUTPUT - Asks for the first number
        cout << "Enter your first number:  \n";
        //  INPUT - Initializes the num1 variable
        cin >> num1;

        if (operation != "sqrt" && operation != "fabs")
        {
            //  OUPUT - Asks for the second number for certain equations
            cout << "Enter your second number:  \n";
            //  INPUT - Initializes the num2 variable
            cin >> num2;

            if(operation == "quadratic")
            {
                //  OUTPUT - Asks for the third number for certain
                //           equations
                cout << "Enter your third number:  \n";
                //  INPUT - Initializes the num3 variable
                cin >> num3;
            }
        }

        if(operation == "addition")
        {
            //  CALC - Processes the addition equation
            result = num1 + num2;
            //  OUPUT - Displays the equation with the variables
            cout << "Equation: " << num1 << " + " << num2 << endl << " "
                 << endl;
            //  OUTPUT - Displays the solution
            cout << "Results: " << result << endl;

        }
        else if (operation == "subtraction")
        {
            //  CALC - Processes the subtraction equation
            result = num1 - num2;
            //  OUPUT - Displays the equation with the variables
            cout << "Equation: " << num1 << " - " << num2 << endl << " "
                 << endl;
            //  OUTPUT - Displays the solution
            cout << "Results: " << result << endl;

        }
        else if (operation == "division")
        {
            //  CALC - Processes the division equation
            result = num1 / num2;
            if (num2 == 0)
            {
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: " << num1 << " / " << num2 << endl
                     << " " << endl;
                //  OUTPUT - Displays an error message
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: " << num1 << " / " << num2 << endl;
                //  OUTPUT - Displays the solution
                cout << "Results: " << result << endl;
            }
        }
        else if (operation == "multiplication")
        {
            //  CALC - Processes the multiplication equation
            result = num1 * num2;
            //  OUPUT - Displays the equation with the variables
            cout << "Equation: " << num1 << " * " << num2 << endl << " "
                 << endl;
            //  OUTPUT - Displays the solution
            cout << "Results: " << result << endl;
        }
        else if (operation == "fabs")
        {
            //  CALC - Processes the fabs equation
            result = fabs(num1);
            //  OUPUT - Displays the equation with the variables
            cout << "Equation: " << "fabs(" << num1 << ") " << endl << " "
                 << endl;
            //  OUTPUT - Displays the solution
            cout << "Results: " << result << endl;
        }
        else if (operation == "sqrt")
        {
            if (num1 < 0)
            {
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: sqrt(" << num1 << ")" << endl << " "
                     << endl;
                //  OUTPUT - Displays an error message
                cout << "Error: Cannot take square root of a negative "
                        "number." << endl;
            }
            else
            {
                //  CALC - Processes the square root equation
                result = sqrt(num1);
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: " << "sqrt(" << num1 << ")" << endl
                     << " " << endl;
                //  OUTPUT - Displays the solution
                cout << "Results: " << result << endl;
            }
        }
        else if (operation == "quadratic")
        {
            //  CALC - Processes a portion of the quadratic equation
            result = (num2*num2 - 4*num1*num3);
            if (result < 0)
            {
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: " <<num1 << "x^2" << " + " << num2
                     << "x" << " + " << num3 << " = 0" << endl << " "
                     << endl;
                //  OUTPUT - Displays an error message
                cout << "Error: Cannot take square root of a negative "
                        "number." << endl;
            }
            else if (2*num1 == 0)
            {
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: " <<num1 << "x^2" << " + " << num2
                     << "x" << " + " << num3 << " = 0" << endl << " "
                     << endl;
                //  OUTPUT - Displays an error message
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                //  CALC - Processes a portion of the quadratic equation
                result = (num2*num2 - 4*num1*num3);
                //  CALC - Processes the quadratic equation when it is
                //         negative
                nResult = (-num2 - sqrt(result)/2*num1);
                //  CALC - Processes the quadratic equation when it is
                //         positive
                pResult = (-num2 + sqrt(result)/2*num1);
                //  OUPUT - Displays the equation with the variables
                cout << "Equation: " <<num1 << "x^2" << " + " << num2
                     << "x" << " + " << num3 << " = 0" << endl << " "
                     << endl;
                //  OUTPUT - Displays the solution
                cout << "Results: " << pResult << ", " << nResult << endl;
            }
        }
        else if (operation == "pythagorean")
        {
            //  CALC - Processes the pythagorean equation
            result = sqrt((num1*num1) + (num2*num2));
            //  OUPUT - Displays the equation with the variables
            cout << "Equation: " << "sqrt(" << num1 << "^2" << " + "
                 << num2 << "^2" <<")" << endl << " " << endl;
            //  OUTPUT - Displays the solution
            cout << "Results: " << result << endl;
        }
    }
}



