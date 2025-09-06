#include <vector>
#include <iostream>
using namespace std;

 void rev(vector<vector<int>>& a)
    {
        int n=a.size();
        for(int i=0;i<n;i++){
            int b=0;
            int e=n-1;
            while(b<e){
                swap(a[i][b],a[i][e]);
                b++;
                e--;
            }
        }
    }


    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int h = 0; h < n - 1; h++) {
            for (int i = h + 1; i < n; i++) {
                swap(matrix[i][h], matrix[h][i]);
            }
        }
        rev(matrix);
    }

int main()
{
    // Example initialization for a 2D vector (matrix)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

        rotate(matrix);
        for(const auto& row : matrix) {
            for(int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
        return 0;
}

