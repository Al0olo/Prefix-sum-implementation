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

 // Find if there is a subarray with 0 sum

int main()
{
    fastread();
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                cout << true;
                return 0;
            }
        }
        sum = 0;
    }
    cout << -1;
    return 0;
}
