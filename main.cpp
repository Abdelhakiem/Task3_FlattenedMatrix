#include <iostream>
#include <vector>
using namespace std;


class MatrixFlatteing{
private:
    int n,m,p;
    vector<vector<vector<int>>>matrix_3d ;
    int q,y;
    vector<int>vec_1d;

public:

    void Fill3DMatrix(int n,int m,int p ){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                for (int k = 0; k < p; ++k) {
                    cin>>matrix_3d[i][j][k];
                }
            }
        }
    }
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
    void ConvertIndex(int i,int j , int k){

        y= (k + j*p + i*m*p);
    }
    void Print1D(){
        cout<<"Output of 1D vector:\n";
    for (int i:vec_1d) {
              cout<<i<<" ";
    }
    cout<<endl;
    }
    void   Print3D(){
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

        //enter value of n m p
        cin>>n>>m>>p;

        //filling 3d array matrix_3d
        matrix_3d=vector<vector<vector<int>>>(n,vector<vector<int>>(m,vector<int>(p)));
        Fill3DMatrix(n,m,p);
        Create1DVec();
        Print3D();
        Print1D();

    }
};

int main() {
   #define TESTING
    #ifdef TESTING
        freopen("input2.txt", "r", stdin);
        freopen("output2.txt", "w", stdout);
    #endif

        MatrixFlatteing flatteing;
        flatteing.Run();

    }

