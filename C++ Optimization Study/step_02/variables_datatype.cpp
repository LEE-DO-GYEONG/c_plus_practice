#include <iostream>
#include <iomanip>
using namespace std;

// ���� 1: BMI ���
void problem1() {
    double weight, height;
    cout << "������(kg)�� Ű(cm)�� �Է��ϼ���: ";
    cin >> weight >> height;
    double bmi = weight / ((height / 100) * (height / 100));
    cout << "BMI: " << bmi << endl;
}

// ���� 2: �� �ڸ� ���� �и�
void problem2() {
    int num;
    cout << "�� �ڸ� ������ �Է��ϼ���: ";
    cin >> num;
    cout << "���� �ڸ�: " << num / 10 << endl;
    cout << "���� �ڸ�: " << num % 10 << endl;
}

// ���� 3: �µ� ��ȯ��
void problem3() {
    double c;                          
    cout << "���� �µ��� �Է��ϼ���: ";
    cin >> c;                          

    double f = c * (9.0 / 5.0) + 32.0; // ���� ������ ����

    // ������ ����: �Ҽ� �� �ڸ� ����
    cout << fixed << setprecision(1);
    cout << "���� " << c << "�� = ȭ�� " << f << "��\n";
}

int main() {
    int choice;
    cout << "������ ���� ��ȣ�� �����ϼ��� (1,2,3): ";
    cin >> choice;

    if (choice == 1) problem1();
    else if (choice == 2) problem2();
    else if (choice == 3) problem3();
    else cout << "�߸��� �����Դϴ�." << endl;

    return 0;
}