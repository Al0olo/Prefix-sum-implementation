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

 // Equilibrium index of an array

int main()
{
    fastread();
    
    int n;
    cin >> n;

    int sum = 0, leftsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
        if (leftsum == sum)
        {
            cout << i << endl;
            return 0;
        }
        leftsum += arr[i];
    }
    cout << -1;
    return 0;
}
