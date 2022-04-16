#include <iostream>


int search(const int arr[], int size, int key) {
    for (int i = 0; i < 100; i++)
        if (arr[i] == key)
            return i;

    return -1;
}


void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        std::cout << A[i] << " ";
}

int main()
{
    int n = 1000;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10;

    std::cout << search(arr, n, 9) << std::endl;
    printArray(arr, n);
    return 0;
}
