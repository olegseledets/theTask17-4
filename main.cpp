#include <iostream>

void arrFilling(int arr[][4]){
  int newArr[4][4];
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 4; ++j){
      std::cout<< "[" << i << "][" << j << "] = ";
      std::cin >> arr[i][j];
    }
  }
}

bool comparisonArr(int arrOne[][4], int arrTwo[][4]){
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 4; ++j){
      if(arrOne[i][j] != arrTwo[i][j]){
        std::cout << "Ошибка!!!!\n";
        return false;
      }
    }
  }
  std::cout << "Успех!!! \n";
  return true;
}

int main() {
  int arrOne[4][4], arrTwo[4][4];
  std::cout << "Заполнение массива 1" << std::endl;
  arrFilling(arrOne);
  std::cout << "Заполнение массива 2" << std::endl;
  arrFilling(arrTwo);
  comparisonArr(arrOne, arrTwo) ? std::cout << "Массивы равны \n" : std::cout << "Массивы не равны \n";
}

/*
Задача 4. Равенство матриц

Требуется реализовать небольшую программу для сравнения двух двумерных матриц размерами 4х4 на предмет их полного равенства. Программа принимает на вход две целочисленные матрицы A и B, которые вводятся с помощью std::cin и сравнивает их на предмет полного равенства. Если матрицы равны, то об этом сообщается в стандартном выводе. Алгоритм должен быть по возможности оптимальным и не проводить лишних операций.
*/