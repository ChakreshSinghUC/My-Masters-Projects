#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    map<int, int> m;

    // store the array in a hashmap..
    for (int i = 0; i < size; i++)
    {
        m.insert(make_pair(arr[i], i));
    }

    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            do
            {
                {
                    if (m.find(-(arr[i] + arr[j])) != m.end())
                        cout << arr[i] << " " << arr[j] << " " << m.find(-(arr[i] + arr[j]))->first << endl;
                }
            } while (m.find(arr[i]) == m.end() || m.find(arr[j]) == m.end());
        }
    }

    return -1;
}