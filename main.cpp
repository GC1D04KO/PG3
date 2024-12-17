#include <iostream>
#include<stdio.h>

// テンプレートクラスの定義

template <typename Type, typename Type2>
class TemplateClass {
public:
    TemplateClass(Type number1, Type2 number2) : number1(number1), number2(number2) {}

    Type Min() {
        if (number1 < number2) {
            return number1;
        }
        else {
            return number2;
        }
    }

private:
    Type number1;
    Type2 number2;
};

int main() {
    // TemplateClassのインスタンスを適切な型引数で生成
    TemplateClass<int, float> intFloatTemplate(5, 50.0f);
    TemplateClass<int, double> intDoubleTemplate(2, 13.0);
    TemplateClass<float, int> floatIntTemplate(3.0f, 9);
    TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
    TemplateClass<double, int> doubleIntTemplate(666.0, 333);
    TemplateClass<double, float> doubleFloatTemplate(435.8, 563.5f);

    std::cout << "int(5) と float(50.0f) の最小値: " << intFloatTemplate.Min() << std::endl;
    std::cout << "int(2) と double(13.0) の最小値: " << intDoubleTemplate.Min() << std::endl;
    std::cout << "float(3.0f) と int(9) の最小値: " << floatIntTemplate.Min() << std::endl;
    std::cout << "float(11.0f) と double(3.5) の最小値: " << floatDoubleTemplate.Min() << std::endl;
    std::cout << "double(666.0) と int(333) の最小値: " << doubleIntTemplate.Min() << std::endl;
    std::cout << "double(435.8) と float(563.5) の最小値: " << doubleFloatTemplate.Min() << std::endl;

    return 0;
}