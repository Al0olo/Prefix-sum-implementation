#include <iostream>
#include <vector>
#include <set>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int arr[100000][5];
int prefixsums[100001][5] = {0};

 // Prefix sum of Matrix (2D array).

int main()
{
    fastread();
    
    int r,c; // # of rows and columns
    cin >> r >> c;
    
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    // the first element
    prefixsums[0][0] = arr[0][0];

    // fill the first row and first column.
    for (int i = 1; i < c; i++)
        prefixsums[0][i] = prefixsums[0][i - 1] + arr[0][i];
    for (int i = 1; i < r; i++)
        prefixsums[i][0] = prefixsums[i - 1][0] + arr[i][0];

    // fill the rest of matrix

    for(int i=1;i<r;i++)
        for (int j = 1; j < c; j++)
        {
            prefixsums[i][j] = prefixsums[i - 1][j] + prefixsums[i][j - 1] - prefixsums[i - 1][j - 1] + arr[i][j];
        }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << prefixsums[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
