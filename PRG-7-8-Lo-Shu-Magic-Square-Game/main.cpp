//
//  main.cpp
//  PRG-7-8-Lo-Shu-Magic-Square-Game
//
//  Created by Keith Smith on 10/8/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The Lo Shu Magic Square is a grid with 3 rows and 3 columns as shown in figure 7-19.
//  The Lo Shu Magic Square has the following properties:
//
//  * The grid contains the numbers 1 through 9 exactly.
//  * The sum of each row, each column, and each diagonal all add up to the same number.
//    This is shown in figure 7-20.
//
//  In a program, you can simulate a magic square using a two-dimensional array. Write a
//  function that accepts a two-dimensional array as an argument, and determines whether
//  the array is a Lo Shu Magic Square. Test the function in a program.

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
void initializeArray(int [][INT_COLS]);
void drawBoard(const int [][INT_COLS]);
void calculateIfSquare(const int [][INT_COLS]);

int main()
{
    char chrContinue;
    
    int intArray[INT_ROWS][INT_COLS];
    
    do
    {
        initializeArray(intArray);
        
        generateArray(intArray);
        
        // Query for replay, default replay if solution is not found
        cout << "Would you like to continue? Enter \'n\' to quit.\n";
        cin >> chrContinue;
        
    } while (chrContinue != 'n' || chrContinue == 'N');
    
    
    return 0;
}

// Simple loop through rows and cols to initialize all values to 0
void initializeArray(int intArray[][INT_COLS])
{
    for(int i = 0 ; i < INT_ROWS ; i++)
    {
        for(int j = 0 ; j < INT_COLS ; j++)
        {
            intArray[i][j] = 0;
        }
    }
}

void generateArray(int intArray[][INT_COLS])
{
    // Hold user input, written over each time
    int intCurrentInput;
    
    // Create bool flags to set if player enters number
    // used to track which numbers have been entered
    bool booNumber1 = false;
    bool booNumber2 = false;
    bool booNumber3 = false;
    bool booNumber4 = false;
    bool booNumber5 = false;
    bool booNumber6 = false;
    bool booNumber7 = false;
    bool booNumber8 = false;
    bool booNumber9 = false;
    
    bool booTurnOver = false;
    
    do
    {
        for (int rows = 0; rows < INT_ROWS; rows++)
        {
            for (int cols = 0; cols < INT_COLS; cols++)
            {
                // Draw board here
                drawBoard(intArray);
                
                cout << "Please enter a number for position [" << rows + 1 << ", " << cols + 1 << "]: ";
                cin >> intCurrentInput;
                // Data validation
                while (!cin || intCurrentInput < 1 || intCurrentInput > 9)
                {
                    cout << "Please enter a valid input (between 1 and 9): ";
                    cin.clear();
                    cin.ignore();
                    cin >> intCurrentInput;
                }
                
                do
                {
                    if(intCurrentInput == 1)
                    {
                        if(booNumber1 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber1 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 2)
                    {
                        if(booNumber2 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber2 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 3)
                    {
                        if(booNumber3 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber3 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 4)
                    {
                        if(booNumber4 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber4 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 5)
                    {
                        if(booNumber5 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber5 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 6)
                    {
                        if(booNumber6 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber6 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 7)
                    {
                        if(booNumber7 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber7 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 8)
                    {
                        if(booNumber8 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber8 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
                    else if(intCurrentInput == 9)
                    {
                        if(booNumber9 == false)
                        {
                            // Set current array cell to user input
                            intArray[rows][cols] = intCurrentInput;
                            booNumber9 = true;
                            booTurnOver = true;
                        }
                        else
                        {
                            cout << "That number has already been entered.\n";
                            cout << "Please enter another number: ";
                            cin.clear();
                            cin.ignore();
                            booTurnOver = false;
                        }
                        cin.clear();
                        cin.ignore();
                    }
    //                else
    //                {
    //                    // Set current array cell to user input
    //                    intArray[rows][cols] = intCurrentInput;
    //                }
                }while(booTurnOver == false);
            }
        }
        
        // Call function to sum rows and cols and diagonals
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
            initializeArray(intArray);
        }
        
    } while (intSumRow1 != 15 && intSumRow2 != 15 && intSumRow3 != 15 &&
             intSumCol1 != 15 && intSumCol2 != 15 && intSumCol3 != 15 &&
             intSumDiag1 != 15 && intSumDiag2 != 15);
}

// Cribbed from tic-tac-toe game, manually draw out board
void drawBoard(const int intArray[][INT_COLS])
{
    cout << endl << " " << intArray[0][0] << " | " << intArray[0][1] << " | " << intArray[0][2] << endl;
    cout << "----------" << endl;
    cout << " " << intArray[1][0] << " | " << intArray[1][1] << " | " << intArray[1][2] << endl;
    cout << "----------" << endl;
    cout << " " <<intArray[2][0] << " | " << intArray[2][1] << " | " << intArray[2][2] << endl << endl;
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

