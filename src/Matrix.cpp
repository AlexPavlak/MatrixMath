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

    for(int i = 0; i < shape; i++){
        for(int j = 0; j < shape; j++){
            cout << matrix[i][j] << " ";
        }  
        cout << endl;
    } 

}

void Matrix::makeIdentity(){

    for(int i = 0; i < shape; i++){
        for(int j = 0; j < shape; j++){
            if(i == j){
                matrix[i][j] = 1;
            } else matrix[i][j] = 0;
        }
    }

}