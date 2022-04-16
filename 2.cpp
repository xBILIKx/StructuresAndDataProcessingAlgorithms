#include <iostream>
#include <string>

void shakerSort(int arr[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        swapped = false;

        for (int i = start; i < end; ++i)
        {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;

        swapped = false;

        --end;

        for (int i = end - 1; i >= start; --i)
        {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        ++start;
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

    shakerSort(arr, n);
    
    std::cout << "Sorted array :\n";
    printArray(arr, n);

    return 0;
}
