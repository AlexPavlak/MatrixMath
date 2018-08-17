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
    
};