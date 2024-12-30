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
	cout << "학생의 수 : ";
	cin >> student;

	double* score = new double[student];

	for (int j = 0; j < student; j++) {
		cout << j + 1 << "번째 학생의 점수 : ";
		cin >> score[j];
	}

	double total = Sum(score, student);
	double avg = Avg(score, student);

	cout << "학생 점수 총합 : " << total << endl;
	cout << "학생 점수 평균 : " << avg << endl;

	return 0;
}