//
//  main.cpp
//  PRG-7-8-Lo-Shu-Magic-Square-Game
//
//  Created by Keith Smith on 10/8/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include <iostream>

using namespace std;

const int INT_ROWS = 3;
const int INT_COLS = 3;

int intSumRow1;
int intSumRow2;
int intSumRow3;
int intSumCol1;
int intSumCol2;
int intSumCol3;
int intSumDiag1;
int intSumDiag2;

void generateArray(int [][INT_COLS]);
void calculateIfSquare(const int [][INT_COLS]);

int main()
{
    char chrContinue;
    
    int intArray[INT_ROWS][INT_COLS];
    
    do
    {
        generateArray(intArray);
        
        cout << "Would you like to continue? Enter \'n\' to quit.\n";
        cin >> chrContinue;
        
    } while (chrContinue != 'n' || chrContinue == 'N');
    
    
    return 0;
}

void generateArray(int intArray[][INT_COLS])
{
    int intCurrentInput;
    
    bool booNum1 = false;
    bool booNum2 = false;
    bool booNum3 = false;
    bool booNum4 = false;
    bool booNum5 = false;
    bool booNum6 = false;
    bool booNum7 = false;
    bool booNum8 = false;
    bool booNum9 = false;
    
    do
    {
        for (int rows = 0; rows < INT_ROWS; rows++)
        {
            for (int cols = 0; cols < INT_COLS; cols++)
            {
                cout << "Please enter a number for position [" << rows + 1 << ", " << cols + 1 << "]: ";
                cin >> intCurrentInput;
                while (!cin || intCurrentInput < 1 || intCurrentInput > 9)
                {
                    cout << "Please enter a valid input (between 1 and 9): ";
                    cin.clear();
                    cin.ignore();
                    cin >> intCurrentInput;
                }
                intArray[rows][cols] = intCurrentInput;
            }
        }
        
        calculateIfSquare(intArray);
        
        if (intSumRow1 == 15 && intSumRow2 == 15 && intSumRow3 == 15 &&
            intSumCol1 == 15 && intSumCol2 == 15 && intSumCol3 == 15 &&
            intSumDiag1 == 15 && intSumDiag2 == 15)
        {
            cout << "That is a Lo Shu square!\n";
        }
        else
        {
            cout << "That was not a Lo Shu square. Please try again.\n";
        }
        
    } while (intSumRow1 != 15 && intSumRow2 != 15 && intSumRow3 != 15 &&
             intSumCol1 != 15 && intSumCol2 != 15 && intSumCol3 != 15 &&
             intSumDiag1 != 15 && intSumDiag2 != 15);
}

void calculateIfSquare(const int intArray[][INT_COLS])
{
    intSumRow1 = intArray[0][0] + intArray[0][1] + intArray[0][2];
    intSumRow2 = intArray[1][0] + intArray[1][1] + intArray[1][2];
    intSumRow3 = intArray[2][0] + intArray[2][1] + intArray[2][2];
    intSumCol1 = intArray[0][0] + intArray[1][0] + intArray[2][0];
    intSumCol2 = intArray[0][1] + intArray[1][1] + intArray[2][1];
    intSumCol3 = intArray[0][2] + intArray[1][2] + intArray[2][2];
    intSumDiag1 = intArray[0][0] + intArray[1][1] + intArray[2][2];
    intSumDiag2 = intArray[0][2] + intArray[1][1] + intArray[2][0];
}

