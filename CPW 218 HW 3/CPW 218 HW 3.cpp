// CPW 218 HW 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Note: if you have using namespace std, you do not need to have std in front of every cout
//if you want to print something out to the user.
using namespace std;

int main()
{
    //When doing multiple couts, to save time, just type cout << "" and copy/paste however many you need.
    //in this case, we need 4.

    cout << "We will do a sum for you.\n";
    cout << "How many terms do you want?";
    int inputNum;
    cin >> inputNum;
    //The one at the top of the equation
    int TopNum = 1;
    // first number on the bottom
    int firstBottomNumber = 1;
    //second number on the bottom that is also squared.
    int secondSquaredNumber = std::sqrt(2);
    double outputNum = 0;

    /*
    * The equation itself looks like this:
    * 
    *                 1                  1
    *            -----------  +  -----------------
    *            1 + sqrt(2)     sqrt(2) + sqrt(3)
    */
    for (size_t i = 0; i < inputNum; i++)
    {
        outputNum += (static_cast<double>(TopNum)) / firstBottomNumber + secondSquaredNumber;
        
        if (firstBottomNumber >= 2)
        {
            firstBottomNumber = sqrt(firstBottomNumber);
        }
        firstBottomNumber++;
        secondSquaredNumber++;
    }
    cout << outputNum << "\n";
    cout << "Press any key to continue . . .";
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
