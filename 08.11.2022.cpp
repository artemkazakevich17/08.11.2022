#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//Array1.Дано целое число N(> 0).Сформировать и вывести целочисленный
	//массив размера N, содержащий N первых положительных нечетных чисел : 1, 3, 5, . . . 
	/*const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++) {
	mas[0] = 1;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2;
		cout << mas[i] << ' ';

	}
	cout << endl;
	}*/
	//Array2.Дано целое число N(> 0).Сформировать и вывести целочисленный массив размера N, содержащий степени двойки от 
	//первой до N - й: 2, 4, 8, 16, . . . .
	/*const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++) {
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << ' ';

	}
	cout << endl;
	}*/
	//Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать и вывести массив размера N, 
	//содержащий N первых членов данной прогрессии : A, A + D, A + 2·D, A + 3·D
	/*int a, d;
	cin >> a >> d;
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++) {
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';

	}
	cout << endl;*/
	//Array4.Дано целое число N(> 1), а также первый член A и знаменатель D геометрической прогрессии.Сформировать и вывести массив размера N, 
	//содержащий N первых членов данной прогрессии : A, A·D, A·D*2n, A·D*3n
	/*int a, d;
	cin >> a >> d;
	const int n = 10;
	int mas[n];
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//Array5.Дано целое число N(> 2).Сформировать и вывести целочисленный массив
	//размера N, содержащий N первых элементов последовательности чисел Фибоначчи FK : F1 = 1, F2 = 1, FK = FK?2 + FK?1, K = 3, 4, . . . .
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	mas[1] = 1;
	cout << mas[0] << mas[1] << ' ';
	for (int i = 2; i < n; i++) {
		mas[i] = mas[i - 2] + mas [i - 1];
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//Array6.Даны целые числа N(> 2), A и B.Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй
	//равен B, а каждый последующий элемент равен сумме всех предыдущих.
	/*const int n = 10;
	int mas[n];
	mas[0] = A;
	mas[1] = B;
	cout << mas[0] << mas[1] << ' ';
	for (int i = 2; i < n; i++) {
		mas[i] = mas[0] + mas [1];
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//Array7.Дан массив размера N.Вывести его элементы в обратном порядке.
	/*const int n = 10;
	int mas[n];
	for (i = 0; i < n; i++) {
		cout << mas[0] << ' ';
	for (i -1; i >= 0, i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/















}



