#include <iostream>
#include <algorithm>
using namespace std;
/*
bool compare(int a, int b)
{
    return a < b;
}
Here, above comparator function is used as a default 
*/
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}