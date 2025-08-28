#include <iostream>
using namespace std;

// ���� 1: ���� ���� ����
void problem1() {
    string product;
    int qty;
    cout << "��ǰ �ڵ�� ������ �Է��ϼ���: ";
    cin >> product >> qty;

    if (qty >= 1000) cout << product << " �� ���� A" << endl;
    else if (qty >= 500) cout << product << " �� ���� B" << endl;
    else cout << product << " �� ���� C" << endl;
}

// ���� 2: ���� üũ
void problem2() {
    int n;
    cout << "�ֹ� �Ǽ��� �Է��ϼ���: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int days;
        cout << i << "��° �ֹ��� �����ϼ�: ";
        cin >> days;

        if (days <= 0) cout << "����" << endl;
        else if (days <= 3) cout << "�ӹ�" << endl;
        else cout << "����" << endl;
    }
}

// ���� 3: ���� ��� ���
void problem3() {
    int stock;
    cout << "�ʱ� ��� �Է��ϼ���: ";
    cin >> stock;

    for (int day = 1; day <= 7; day++) {
        int inQty, outQty;
        cout << day << "���� �԰�/��� ���� �Է�: ";
        cin >> inQty >> outQty;

        stock += inQty;
        stock -= outQty;

        if (stock < 0) {
            cout << "��� ���� �߻� (Day " << day << ")" << endl;
        }
        cout << day << "���� ���: " << stock << endl;
    }

    cout << "���� ���: " << stock << endl;
}

int main() {
    int choice;
    cout << "������ ���� ��ȣ�� �����ϼ��� (1:�������, 2:����üũ, 3:�����): ";
    cin >> choice;

    if (choice == 1) problem1();
    else if (choice == 2) problem2();
    else if (choice == 3) problem3();
    else cout << "�߸��� �����Դϴ�." << endl;

    return 0;
}