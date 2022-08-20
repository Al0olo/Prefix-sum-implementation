#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

 // Kadane’s Algorithm:
 // Largest Sum Contiguous Subarray

int arr[100000];
int main()
{
    fastread();
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max_sum = INT_MIN,max_ending_here=0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum > max_ending_here)
                max_ending_here = sum;
        }
        max_sum = max(max_ending_here, sum);
        sum = 0;
    }
    cout << max_sum;
    return 0;
}
