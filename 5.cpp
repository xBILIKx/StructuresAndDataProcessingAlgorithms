#include <iostream>


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;
        if (mid >= l && arr[mid - 1] == x)
            return (mid - 1);
        if (mid <= r && arr[mid + 1] == x)
            return (mid + 1);

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 2, x);

        return binarySearch(arr, mid + 2, r, x);
    }


    return -1;
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << A[i] << " ";
}


int main()
{
    int n = 1000;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i;

    std::cout << binarySearch(arr, 0, n -1, 1) << std::endl;
    printArray(arr, n);
    return 0;
}
