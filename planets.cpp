// planets.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Programmer: Marco Andrade
// Project: Calculate your Weight on Another Planet

#include <iostream>
using namespace std;

void weightCalc() {
    double weight = 0.0;
    double gravity = 9.81;
    int selection = 0;
    string planet = "";

    //Title
    cout << "This program will calculate your weight on another planet using pounds. " << endl;
    cout << endl;

    do {
        cout << "Enter your weight on Earth: ";
        cin >> weight; //weight input

        cout << endl;

        //Selection
        cout << "***************************************" << endl;
        cout << "*           Select a planet           *" << endl;
        cout << "***************************************" << endl;
        cout << " [1] Mercury - [2] Venus - [3] Mars " << endl;
        cout << " [4] Jupiter - [5] Saturn - [6] Uranus " << endl;
        cout << "   [7] Neptune - [0] Close Program " << endl;
        cout << "***************************************" << endl;
        cout << endl;

        cout << "Planet Selection: ";

        cin >> selection; //selection input

        cout << endl;

        switch (selection)
        {
        case 0:
            cout << "Goodbye . . . " << endl;
            cout << endl;
            break;
        case 1:
            planet = "Mercury";
            weight = (weight / gravity) * 3.7;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        case 2:
            planet = "Venus";
            weight = (weight / gravity) * 8.87;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        case 3:
            planet = "Mars";
            weight = (weight / gravity) * 3.711;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        case 4:
            planet = "Jupiter";
            weight = (weight / gravity) * 24.79;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        case 5:
            planet = "Saturn";
            weight = (weight / gravity) * 10.44;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        case 6:
            planet = "Uranus";
            weight = (weight / gravity) * 8.69;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        case 7:
            planet = "Neptune";
            weight = (weight / gravity) * 11.15;

            cout << "Your weighty on " << planet << " is " << weight << "lbs." << endl;
            cout << endl;
            break;
        default:
            cout << "Invalid Input . . . " << endl;
            cout << endl;
            break;
        }
    } while (selection != 0);
}

int main()
{
    weightCalc(); //calling the function
    
    return 0;
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
