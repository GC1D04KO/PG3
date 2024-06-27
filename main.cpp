#include <iostream>
using namespace std;

// 自作クラス
class MyClass {
public:
    void Update();

    void State1();
    void State2();
    void State3();

    // メンバ関数ポインタのテーブル
    static void (MyClass::* table[])();

private:
    // メンバ関数ポインタのテーブルを参照するインデックス
    int index = 0;
};

void MyClass::State1() {
    cout << "敵の接近！" << endl;
}

void MyClass::State2() {
    cout << "敵の攻撃！" << endl;
}

void MyClass::State3() {
    cout << "敵の後退！" << endl;
}

void MyClass::Update() {

    (this->*table[index])();


    int a = 0;

    scanf_s("%d", &a);

    if (a == 0) {
        index = (index + 1) % 3;
    }
}


void (MyClass::* MyClass::table[])() = {
  &MyClass::State1,
  &MyClass::State2,
  &MyClass::State3,
};

int main() {
    MyClass my;

    for (int i = 0; i < 10; ++i) {
        my.Update();
    }

    return 0;
}