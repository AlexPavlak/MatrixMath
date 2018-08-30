#include <vector>

using namespace std;
class Matrix{

    public:

    vector< vector<int> > matrix;
    int shape;
    Matrix();
    Matrix(int n);
    void fillRand();
    void printMatrix();
    void makeIdentity();
    //adds operand to base
    void addRows(int base, int operand);
    //subtracts operand from base
    void subRows(int base, int operand);
    void multRows(int base, int multiplier);
    void swapRows(int row1,int row2);

    bool isIdentity();
    
};