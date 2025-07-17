#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "\nEnter the elements of the matrix:\n";
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << "Element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    bool isSymmetric = true;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = false;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    cout << "\nThe matrix is ";
    if(!isSymmetric)
        cout << "not ";
    cout << "symmetric." << endl;

    return 0;
}
