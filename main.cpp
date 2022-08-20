#include <iostream>
#include <vector>
#include <set>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int arr[100000];
int prefixsums[100001] = { 0 };

int main()
{
    fastread();
    int n;
    cin >> n; // # of nums you want to get thier prefix sum
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // get the first element
        if(!i)
            prefixsums[i] += arr[i];
        // get all another elements
        else
            prefixsums[i] = prefixsums[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++) // print the array of prefix sums
        cout << prefixsums[i] << " ";
    return 0;
}
