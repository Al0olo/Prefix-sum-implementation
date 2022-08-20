#include <iostream>
#include <vector>
#include <set>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

 // Difference Array | Range update query in O(1)

int arr[100000];
int difference[100000];

int main()
{
    fastread();
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Initialize Diff Array
    difference[0] = arr[0];

    for (int i = 1; i < n; i++)
        difference[i] = arr[i] - arr[i - 1];

    // take number of queries
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        // take the parameters of querey
        int left, right, add;
        cin >> left >> right >> add;
        
        // Does range update
        difference[left] += add;
        difference[right + 1] -= add;
    }

    //print
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            arr[i] = difference[i];
        else
        {
            arr[i] = difference[i] + arr[i - 1];
        }
        cout << arr[i] << " ";
    }
    
    return 0;
}
