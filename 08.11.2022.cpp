#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//Array1.���� ����� ����� N(> 0).������������ � ������� �������������
	//������ ������� N, ���������� N ������ ������������� �������� ����� : 1, 3, 5, . . . 
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
	//Array2.���� ����� ����� N(> 0).������������ � ������� ������������� ������ ������� N, ���������� ������� ������ �� 
	//������ �� N - �: 2, 4, 8, 16, . . . .
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
	//Array3.���� ����� ����� N(> 1), � ����� ������ ���� A � �������� D �������������� ����������.������������ � ������� ������ ������� N, 
	//���������� N ������ ������ ������ ���������� : A, A + D, A + 2�D, A + 3�D
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
	//Array4.���� ����� ����� N(> 1), � ����� ������ ���� A � ����������� D �������������� ����������.������������ � ������� ������ ������� N, 
	//���������� N ������ ������ ������ ���������� : A, A�D, A�D*2n, A�D*3n
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
	//Array5.���� ����� ����� N(> 2).������������ � ������� ������������� ������
	//������� N, ���������� N ������ ��������� ������������������ ����� ��������� FK : F1 = 1, F2 = 1, FK = FK?2 + FK?1, K = 3, 4, . . . .
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
	//Array6.���� ����� ����� N(> 2), A � B.������������ � ������� ������������� ������ ������� N, ������ ������� �������� ����� A, ������
	//����� B, � ������ ����������� ������� ����� ����� ���� ����������.
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
	//Array7.��� ������ ������� N.������� ��� �������� � �������� �������.
	/*const int n = 10;
	int mas[n];
	for (i = 0; i < n; i++) {
		cout << mas[0] << ' ';
	for (i -1; i >= 0, i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/















}



