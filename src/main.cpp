#include <iostream>
#include "Matrix.h"
#include "Menu.h"
#include <vector>


using namespace std;

int main(){

vector<vector<int> > testVector{{1,2,3},{2,4,6},{4,8,12}};
Matrix matrix(3);

Menu menu();

matrix.matrix = testVector;

menu.startMenu();
}// end main
