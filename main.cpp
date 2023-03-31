#include <iostream>
#include "printDynArr.h"
#include "arrAppend.h"

using namespace std;

int main(int argc, char** argv){
	int aSize(0), lSize(0);
	
	do {
		cout << "Введите фактический размер массива: ";
		cin >> aSize;
		cout << "Введите логический размер массива: ";
		cin >> lSize;
		if (lSize > aSize) {
			cout << "Ошибка! Логический размер массива не может превышать фактический!" << endl;
		}
	} while (lSize > aSize);

	int* arr = new int[aSize]();

	for (int i = 0; i < lSize; i++) {
		cout << "Введите arr[" << i << "]: ";
		cin >> arr[i];
	}

	print_dynamic_array(arr, lSize, aSize);

	int input = 0;
	do {
		cout << "Введите элемент для добавления: ";
		cin >> input;

		arr = append_to_dynamic_array(arr, lSize, aSize, input);
		print_dynamic_array(arr, lSize, aSize);
	} while (input != 420);

	cout << "Спасибо! ";
	print_dynamic_array(arr, lSize, aSize);

	delete[] arr;
	arr = nullptr;

	return 0;
}