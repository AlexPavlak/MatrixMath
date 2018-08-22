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
    void addRows(int base, int operand);
    void subRows(int base, int operand);
    void multRows(int base, int multiplier);
    void swapRows(int row1,int row2);

    bool isIdentity();
    
};