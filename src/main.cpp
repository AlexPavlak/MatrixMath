#include <iostream>
#include "Matrix.h"
#include <vector>

using namespace std;

int main(){
vector<vector<int> > testVector{{1,2,3},{2,4,6},{4,8,12}};
Matrix matrix(3);

matrix.matrix = testVector;
matrix.multRows(0,2);

Matrix I(3);
matrix.printMatrix();

I.makeIdentity();
I.printMatrix();


}