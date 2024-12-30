#include <iostream>
#include <string>

using namespace std;

double Sum(double arr[], int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

double Avg(double arr[], int size) {
	double sum = Sum(arr, size);
	return sum / size;
}

int main() {
	int student = 0;
	cout << "�л��� �� : ";
	cin >> student;

	double* score = new double[student];

	for (int j = 0; j < student; j++) {
		cout << j + 1 << "��° �л��� ���� : ";
		cin >> score[j];
	}

	double total = Sum(score, student);
	double avg = Avg(score, student);

	cout << "�л� ���� ���� : " << total << endl;
	cout << "�л� ���� ��� : " << avg << endl;

	return 0;
}