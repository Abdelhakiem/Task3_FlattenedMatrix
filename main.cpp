#include <iostream>
#include <vector>
using namespace std;
/**
 * Data members and methods coded are all encapsulated into MatrixFlatteing class
 */

class MatrixFlatteing{
private:
    /**
     * n , m and p are the dimensions of the 3d matrix
     */
    int n,m,p;
    /**
     * matrix_3d: the 3 d matrix
     */
    vector<vector<vector<int>>>matrix_3d ;
    /**
     * q: size of the one dimensional matrix.
     * y: index of the one dimensional vector.
     */
    int q,y;
    /**
     * vec_1d : the one dimensional vector which 3d matrix will be flattened into
     */
    vector<int>vec_1d;

public:
/**
 * for inputting the values to the 3d matrix
 */
    void Fill3DMatrix(){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int k = 0; k < p; ++k) {
                    cin>>matrix_3d[i][j][k];
                }
            }
        }
    }
    /**
     * Initialing and inputting the values from the 3d matrix to the 1d vector
     */
    void Create1DVec( ){
        q =n*m*p;
        vec_1d=vector<int>(q);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int k = 0; k < p; ++k) {
                    ConvertIndex(i,j,k);
                    vec_1d[y] = matrix_3d[i][j][k];
                }
            }
        }
    }
    /**
     * Convert 3d matrix indexes to one dimensional index : y.
     * @param i index of the first dimension in the 3d matrix
     * @param j index of the second dimension in the 3d matrix
     * @param k index of the third dimension in the 3d matrix
     */
    void ConvertIndex(int i,int j , int k){

        y= (k + j*p + i*m*p);
    }
    /**
     * Prints the 1 d vector
     */
    void Print1D(){
        cout<<"Output of 1D vector:\n";
    for (int i:vec_1d) {
              cout<<i<<" ";
    }
    cout<<endl;
    }
    /**
     * Prints the expected output
     */
    void   ExpectedOut(){
        cout<<"expected output"<<endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int k = 0; k < p; ++k) {
                    cout<<matrix_3d[i][j][k]<<" ";
                }
            }
        }
        cout<<endl;
    }
    void Run(){

        /**
         * enter value of n m p which are the dimentions of the 3d matrix.
         */
        cin>>n>>m>>p;
         /**
          * Intializing the 3d matrix:
          */
        matrix_3d=vector<vector<vector<int>>>(n,vector<vector<int>>(m,vector<int>(p)));
        /**
         * user enters the values of the 3d matrix:
         */
        Fill3DMatrix();
        /**
         * Create1DVec is called to fill intialize and fill the 1d vector
         */
        Create1DVec();
        /**
         * Printing the expected output and the 1 dimensional matrix.
         */
        ExpectedOut();
        Print1D();

    }
};

int main() {
   #define TESTING
    #ifdef TESTING
    //input and output using text file, for using terminal just comment: #define Testing
        freopen("input2.txt", "r", stdin);
        freopen("output2.txt", "w", stdout);
    #endif
        /**
         * Making object from MatrixFlatteing class.
         */
        MatrixFlatteing flatteing;
        /**
         * Calling Run() method which calls other methods and manage the process of converting 3d into one d matrix.
         */
        flatteing.Run();

    }

