#include "Matrix.h"
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

Matrix::Matrix(){};

Matrix::Matrix(int n){

    shape = n;
    matrix.resize(shape, vector<int>(shape));
}

void Matrix::fillRand(){

    for(int i = 0; i < shape; i++){
        for(int j = 0; j < shape; j++){
            matrix[i][j] = rand() % 10;
        }
    }
}

//Used to print the contents of the matrix
void Matrix::printMatrix(){
    cout << "This is what the matrix looks like:"<< endl;
    for(int i = 0; i < shape; i++){
        for(int j = 0; j < shape; j++){
            cout << matrix[i][j] << " ";
        }  
        cout << endl;
    } 

}

//Turns the matrix into an Identity matrix.
void Matrix::makeIdentity(){

    for(int i = 0; i < shape; i++){
        for(int j = 0; j < shape; j++){
            if(i == j){
                matrix[i][j] = 1;
            } else matrix[i][j] = 0;
        }
    }

}

//Adds each element of the operand to the corresponding element in the base
void Matrix::addRows(int base, int operand){

    for(int i = 0; i < shape; i++){
        matrix[base][i] = matrix[base][i] + matrix [operand][i];
    }
}

//Adds each element of the operand to the corresponding element in the base
void Matrix::subRows(int base, int operand){

    for(int i = 0; i < shape; i++){
        matrix[base][i] = matrix[base][i] - matrix [operand][i];
    }
}

void Matrix::multRows(int base, int multiplier){

    for(int i = 0; i < shape; i++){
        matrix[base][i] = matrix[base][i] * multiplier;
    }

}

void Matrix::swapRows(int row1,int row2){

    int temp1;
    int temp2;

    for(int i = 0; i < shape; i++){
        temp1 = matrix[row1][i];
        temp2 = matrix[row2][i];

        matrix[row1][i] = temp2;
        matrix[row2][i] = temp1;
    }
}

bool Matrix::isIdentity(){

    for(int i = 0; i < shape; i++){
        for(int j = 0; j < shape; j++){
         if(i == j){

            if((matrix[i][j] != 1)) return false;     

        } else if( matrix[i][j] != 0){

                return false;
            }
        }
    }
    return true;
}