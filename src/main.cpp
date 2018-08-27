#include <iostream>
#include "Matrix.h"
#include <vector>

using namespace std;

void addPrompt(Matrix*);

int main(){

vector<vector<int> > testVector{{1,2,3},{2,4,6},{4,8,12}};
Matrix matrix(3);

matrix.matrix = testVector;
matrix.multRows(0,2);

Matrix I(3);
matrix.printMatrix();

I.makeIdentity();
I.printMatrix();

cout << "isIdentity worked!" << endl;
int choice = 0;
while (!matrix.isIdentity())
{
    cout << "This is your matrix:" << endl;
    matrix.printMatrix();
    cout << "What would you like to do?" << endl;
    cout << "1: Add Rows" << endl;
    cout << "2: Subtract Rows" << endl;
    cout << "3: Multiply Rows" << endl;
    cout << "4: Swap Rows." << endl;
    cin >> choice;

    switch(choice){
        case 1: addPrompt(&matrix);
        break;
        /*
        case 2: subPrompt();
        break;

        case 3: multPrompt();
        break;

        case 4: swapPrompt();
        break;
        */

        default: break;
    }
}// end while
}// end main

void addPrompt(Matrix* matrix){
    int row1;
    int row2;

    cout << "Which rows would you like to add together?" << endl;
    cin >> row1;
    cin >> row2;

    matrix->addRows(row1, row2);

    return;
}