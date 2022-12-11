#include <iostream>

#include "vector.h"
#include "matrix.h"

using namespace std;

int main() {
    /*------------------Assign--------------------*/
    //Vector
    int size_v, size_w;
    //Matrix
    int numRows_A, numCols_A;
    int numRows_B, numCols_B;
    int numRows_C, numCols_C;
    int numRows_D, numCols_D;
    double *v, *w;
    double **A, **B, **C, **D;
    //Vector input
    cout << "Input size of vector v:" << endl;
    cin >> size_v;
    cout << "Input size of vector w:" << endl;
    cin >> size_w;
    //Matrix input
    cout << "Input row and column of A:" << endl;
    cin >> numRows_A >> numCols_A;
    cout << "Input row and column of B:" << endl;
    cin >> numRows_B >> numCols_B;
    cout << "Input row and column of C:" << endl;
    cin >> numRows_C >> numCols_C;
    cout << "Input row and column of D:" << endl;
    cin >> numRows_D >> numCols_D;
    cout << endl;
    /*------------------Action--------------------*/
    //Allocation
    v = allocate(size_v);
    w = allocate(size_w);
    A = allocate(numRows_A, numCols_A);
    B = allocate(numRows_B, numCols_B);
    C = allocate(numRows_C, numCols_C);
    D = allocate(numRows_D, numCols_D);
    //Initialization
    random(v, size_v);
    zeros(w, size_w);
    random(A, numRows_A, numCols_A);
    random(B, numRows_B, numCols_B);
    zeros(C, numRows_C, numCols_C);
    zeros(D, numRows_D, numCols_D);
    //Linear algebra
    //Print results
    cout << "Vector v is: "<<endl;
    print(v, size_v);
    cout << "Vector w is: "<<endl;
    print(w, size_w);
    cout << "Matrix A is: "<<endl;
    print(A, numRows_A, numCols_A);
    cout << "Matrix B is: "<<endl;
    print(B, numRows_B, numCols_B);
    cout << "Matrix C is: "<<endl;
    print(C, numRows_C, numCols_C);
    cout << "Matrix D is: "<<endl;
    print(D, numRows_D, numCols_D);
    //Deallocation
    deallocate(v);
    deallocate(w);
    deallocate(A, numRows_A);
    deallocate(B, numRows_B);
    deallocate(C, numRows_C);
    deallocate(D, numRows_D);
    /*------------------Assert--------------------*/

}