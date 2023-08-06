#include <iostream>
using namespace std;


// TASK 3.1 The code in task 3 performs a transpose of 2 matrices (max is 10*10 matrix) using C++ but is broken and does
// not generate the correct output due to some syntax and logical errors. Fix the program so it produces the correct
// output.


int main(){
    int a[10][10], b[10][10], transpose[10][10], r1, c1, r2, c2, i, j;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1 ;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Error Handling if the rows and column is above TEN
    if ((r1 >= 1 && r1 < 10) && (c1 >= 1 && c1 < 10) && (r2 >= 1 && r2 < 10) && (c2 >= 1 && c2 < 10)){
        cout << endl << "Enter elements of matrix 1:" << endl;
        for (i = 0; i < r1; ++i){
            for (j = 0; j < c1; ++j){
                cout << "Enter element a " << i + 1 << j + 1 << " : ";
                cin >> a[i][j];
            }
        }
        cout << endl << "Enter elements of matrix 2:" << endl;
        for (i = 0; i < r2; ++i){
            for (j = 0; j < c2; ++j)
            {
                cout << "Enter element b" << i + 1 << j + 1 << " : " ;
                cin >> b[i][j];
            }
        }

        // Output Matrix A
        cout << endl << "Output Matrix A: " << endl;
        for (i= 0; i < r1; ++i){
            for (j= 0; j < c1; ++j){
                cout << " " << a[i][j];
                if (j == c1 - 1){
                    cout << endl;
                }
            }
        }
        // initializing transpose of the matrix A
        for (i= 0; i < r1; ++i){
            for (j= 0; j < c1; ++j){
                transpose[j][i] = a[i][j];
            }
        }

        cout << "Output Transpose of Matrix A: " << endl;
        for (i= 0; i < c1; ++i){
            for (j= 0; j < r1; ++j){
                cout << " " << transpose[i][j] ;
                if (j == r1 - 1){
                    cout << endl ;
                }
            }

        }


        // Output Matrix B
        cout << endl << "Output Matrix B: " << endl;
        for (i= 0; i < r2; ++i){
            for (j= 0; j < c2; ++j){
                cout << " " << b[i][j];
                if (j == c2 - 1){
                    cout << endl;
                }
            }
        }
        // initializing transpose of the matrix B
        for (i= 0; i < r2; ++i){
            for (j= 0; j < c2; ++j){
                transpose[j][i] = b[i][j];
            }
        }

        cout << "Output Transpose of Matrix B: " << endl;
        for (i= 0; i < c2; ++i){
            for (j= 0; j < r2; ++j){
                cout << " " << transpose[i][j] ;
                if (j == r1 - 1)
                    cout << endl;
            }
        }
    }
    else{
        cout << " Wrong Format " << endl;

    }

    return 0;
}
