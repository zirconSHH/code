# include <iostream>
# include <vector>

using namespace std;

template<typename T>
int binary_search_first(T& arr, int target)
{
    int result = 0;
    int left = 0;
    int right = arr.size() - 1;
    int first = 0;
    bool find = false;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            find = true;
            first = mid;
            right = mid - 1;
        }
    }

    if (find)
    {
        return first;
    }
    return -1;
}