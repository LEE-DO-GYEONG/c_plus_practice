#include <iostream>
using namespace std;

// 문제 1: 생산 라인 배정
void problem1() {
    string product;
    int qty;
    cout << "제품 코드와 수량을 입력하세요: ";
    cin >> product >> qty;

    if (qty >= 1000) cout << product << " → 라인 A" << endl;
    else if (qty >= 500) cout << product << " → 라인 B" << endl;
    else cout << product << " → 라인 C" << endl;
}

// 문제 2: 납기 체크
void problem2() {
    int n;
    cout << "주문 건수를 입력하세요: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int days;
        cout << i << "번째 주문의 남은일수: ";
        cin >> days;

        if (days <= 0) cout << "지연" << endl;
        else if (days <= 3) cout << "임박" << endl;
        else cout << "여유" << endl;
    }
}

// 문제 3: 누적 재고 계산
void problem3() {
    int stock;
    cout << "초기 재고를 입력하세요: ";
    cin >> stock;

    for (int day = 1; day <= 7; day++) {
        int inQty, outQty;
        cout << day << "일차 입고/출고 수량 입력: ";
        cin >> inQty >> outQty;

        stock += inQty;
        stock -= outQty;

        if (stock < 0) {
            cout << "재고 부족 발생 (Day " << day << ")" << endl;
        }
        cout << day << "일차 재고: " << stock << endl;
    }

    cout << "최종 재고: " << stock << endl;
}

int main() {
    int choice;
    cout << "실행할 문제 번호를 선택하세요 (1:생산라인, 2:납기체크, 3:재고계산): ";
    cin >> choice;

    if (choice == 1) problem1();
    else if (choice == 2) problem2();
    else if (choice == 3) problem3();
    else cout << "잘못된 선택입니다." << endl;

    return 0;
}