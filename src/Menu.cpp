#include "Menu.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

void Menu::startMenu(Matrix* matrix){

    int choice = 0;
    while (!matrix->isIdentity())
    {
        cout << "This is your matrix:" << endl;
        matrix->printMatrix();
        cout << "What would you like to do?" << endl;
        cout << "1: Add Rows" << endl;
        cout << "2: Subtract Rows" << endl;
        cout << "3: Multiply Rows" << endl;
        cout << "4: Swap Rows." << endl;
        cin >> choice;

        switch(choice){
            case 1: addPrompt(matrix);
            break;
            
            case 2: subPrompt(matrix);
            break;
            /*
            case 3: multPrompt();
            break;

            case 4: swapPrompt();
            break;
            */

            default: break;
        }
    }// end while          
    
}

void Menu::addPrompt(Matrix* matrix){
    int row1;
    int row2;

    cout << "Which rows would you like to add together?" << endl;
    cin >> row1;
    cin >> row2;

    matrix->addRows(row1, row2);

    return;
}

void Menu::subPrompt(Matrix* matrix){
    int row1;
    int row2;

    cout << "Which row do you want to subtract from?" << endl;
    cin >> row1;
    cout<< "Which row do you wish to subtract from row" + row1 << "?"<<endl;
    cin >> row2;

    matrix->subRows(row1, row2);

    return;
}