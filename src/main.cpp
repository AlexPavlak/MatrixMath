#include <iostream>
#include "Matrix.h"


using namespace std;

int main(){

Matrix matrix(3);
Matrix I(3);

matrix.fillRand();
matrix.printMatrix();

I.makeIdentity();
I.printMatrix();


}