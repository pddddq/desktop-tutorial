#include <iostream>
using namespace std;

void Array(int arr[], int size, int a) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (a == 1 && arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (a == 2 && arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, a;

    cout << "������ ������ ����: ";
    cin >> size;

    int* arr = new int[size];

    cout << "������ ����: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "1: ��������, 2: �������� : ";
    cin >> a;

    if (a != 1 && a != 2) {
        cout << "1 �Ǵ� 2�� �Է��ϼ���." << endl;
        return 1;
    }

    Array(arr, size, a);

    cout << "���ĵ� ���: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}