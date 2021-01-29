// CPW 218 HW 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//CPW 218 HW 3 - Loops
//Ethen Oliva
//Instructor: Ken Meerdink
//Program Description:
/*
*  This program will ask the user for a number of terms,
*  then calculate a sum using an equation
*  with a for loop.
*/

#include <iostream>
#include <string>
#include<iomanip>
#include<cstdlib>

//Note: if you have using namespace std, you do not need to have std in front of every cout
//if you want to print something out to the user.
using namespace std;

int main()
{
    //since we're doing the extra credit, we want a new
    //variable for user input instead
    //of the TERM_NUMBER constant.

    //const int TERM_NUMBER = 624;

    int numInput;
    double equation = 0;
    cout << "We will do a sum for you\n";
    cout << "How many terms do you want?";
    cin >> numInput;
    if (numInput > 0) {
        //NOTE: for loop was set to int i = 0
        //instead of int i = 1, so thats why
        //it was printing one number off from the expected result.
        for (int i = 1; i <= numInput; i++)
        {
            equation += (1 / (sqrt(i) + sqrt(i + 1)));
        }

        cout << setprecision(2) << fixed << equation << endl;
        cout << "Press any key to continue. . ." << endl;
    }
    else
    {
        cout << "Invalid Number. Program only accepts numbers above 0." << endl;
    }
    
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
