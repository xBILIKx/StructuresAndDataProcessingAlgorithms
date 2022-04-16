#include <iostream>
#include <string>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}


int main()
{
    int n = 1000;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10;
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
