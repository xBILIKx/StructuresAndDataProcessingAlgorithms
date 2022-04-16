#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <random>



int **arrayInit(int n, int m) {
    int **newArr = new int * [n];
    for (int i = 0; i < n; i++) {
        newArr[i] = new int [m];
    }
    return newArr;
}

void arrInput(int **arr, int n, int m) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> arr[i][j];
//            arr[i * j * n] = rand() % 10;
}

void arrOutput(int **arr, int n, int m) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

bool isSymmetric(int **arr, int n, int m){
    if (n != m) return false;
    for(int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if(arr[i][j] != arr[j][i])
                return false;
    return true;
}

int main() {

    SetConsoleOutputCP(1251);
  
    int rows, columns;
    std:: cout << "Количество рядов:";
    std::cin >> rows;
    std:: cout << "Количество столбцов:";
    std::cin >> columns;
  
    int **matrix;
    matrix = arrayInit(rows, columns);

    arrInput(matrix, rows, columns);
    arrOutput(matrix, rows, columns);

    if(isSymmetric(matrix, rows, columns))
        std::cout << "Матрицы семмитрична";
    else
        std::cout << "Матрицы не семмитрична";
}
