#include <iostream>
#include <iomanip>
using namespace std;

// 문제 1: BMI 계산
void problem1() {
    double weight, height;
    cout << "몸무게(kg)와 키(cm)를 입력하세요: ";
    cin >> weight >> height;
    double bmi = weight / ((height / 100) * (height / 100));
    cout << "BMI: " << bmi << endl;
}

// 문제 2: 두 자리 정수 분리
void problem2() {
    int num;
    cout << "두 자리 정수를 입력하세요: ";
    cin >> num;
    cout << "십의 자리: " << num / 10 << endl;
    cout << "일의 자리: " << num % 10 << endl;
}

// 문제 3: 온도 변환기
void problem3() {
    double c;                          
    cout << "섭씨 온도를 입력하세요: ";
    cin >> c;                          

    double f = c * (9.0 / 5.0) + 32.0; // 정수 나눗셈 방지

    // 포맷은 선택: 소수 한 자리 예시
    cout << fixed << setprecision(1);
    cout << "섭씨 " << c << "도 = 화씨 " << f << "도\n";
}

int main() {
    int choice;
    cout << "실행할 문제 번호를 선택하세요 (1,2,3): ";
    cin >> choice;

    if (choice == 1) problem1();
    else if (choice == 2) problem2();
    else if (choice == 3) problem3();
    else cout << "잘못된 선택입니다." << endl;

    return 0;
}