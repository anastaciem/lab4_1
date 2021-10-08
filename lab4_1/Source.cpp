// lab4_1.cpp
// < Демчук Анастасія >
// Лабораторна робота № 4.1
// Цикли.
// Варіант 14
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i, N;
	double p = 1;

	cout << "N: "; cin >> N;

	i = N;

	while (i <= 10) {
		p *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
		i++;
	}

	cout << "Result 1: " << p << endl;
	p = 1;
	i = N;

	do {
		p *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
		i++;
	} while (i <= 10);

	cout << "Result 2: " << p << endl;
	p = 1;

	for (i = N; i <= 10; i++) {
		p *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
	}

	cout << "Result 3: " << p << endl;
	p = 1;

	for (i = 10; i >= N; i--) {
		p *= (i + 1 / pow(i, 2)) / sqrt(1 + exp(1 / i));
	}

	cout << "Result 4: " << p << endl;

	return 0;
}