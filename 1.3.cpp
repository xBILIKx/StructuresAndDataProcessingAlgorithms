#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>


std::vector<int> createArray(int size) {
    return std::vector<int>(size);
}

void arrInput(std::vector<int>& arr, int size) {
    for(int i = 0; i < size; i++)
        std::cin >> arr[i];
}

void arrOutput(std::vector<int>& arr, int size){
    for(int i = 0; i < size; i++)
        std::cout << "ar[" << i << "] = " << arr[i] << std::endl;
}

int findMaxAndEven(const std::vector<int>& arr, int size){
    int max = INT32_MIN;
    int idx = 0;
    for(int i = 0; i < size; i++){
        int current = arr[i];
        if(current > max && current % 2 == 0){
            max = current;
            idx = i;
        }
    }

    return idx;
}

void insertAfterMax(std::vector<int>& arr, int& size, int value){
    int idx = findMaxAndEven(arr, size);
    size++;

    for(int i = size - 1; i > idx; i--)
         arr[i] = arr[i - 1];
    arr[idx + 1] = value;
}

void deleteBeforeMax(std::vector<int>& arr, int& size){
    int idx = findMaxAndEven(arr, size);

    for(int i = idx; i < size; i++)
        arr[i-1] = arr[i];
    size--;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int size;

    std::cout << "Укажите длину массива: ";
    std::cin >> size;
    std::vector<int> arr = createArray(size);

    std::cout << "Введите данные для массива: " << std::endl;
    arrInput(arr, size);

    int n;
    std::cout << "Введите значение что бы вставить в массив после максимального четного числа: ";
    std::cin >> n;
    std::cout << "Массив до изменения:" << std::endl;
    arrOutput(arr, size);
    insertAfterMax(arr, size, n);
    std::cout << "Массив после изменение:" << std::endl;
    arrOutput(arr, size);
    std::cout << "Удаляем число до максимального четного числа: " << std::endl;
    deleteBeforeMax(arr, size);
    std::cout << "Массив после изменения:" << std::endl;
    arrOutput(arr, size);
}
