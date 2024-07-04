#include <stdio.h>

// 親クラス
class Shape {
public:
    virtual void Size() = 0;
    virtual void Draw() = 0;

protected:
    float size;
    float radius;
};

// 円クラス
class Circle : public Shape {
public:
    void Size() override;
    void Draw() override { printf("面積 %f\n", size); }
};

// 四角クラス
class Rectangle : public Shape {
public:
    void Size() override;
    void Draw() override { printf("面積 %f\n", size); }
};

void Circle::Size() {
    radius = 5.0f;
    printf("円の半径 %f\n", radius);
    size = radius * radius * 3.14f;
}

void Rectangle::Size() {
    radius = 5.0f;
    printf("矩形の半径 %f\n", radius);
    size = radius * 2.0f * radius * 2.0f;
}

int main(void) {
    Shape* ishape[2] = { new Circle, new Rectangle };

    ishape[0]->Size();
    ishape[1]->Size();

    ishape[0]->Draw();
    ishape[1]->Draw();

    delete ishape[0];
    delete ishape[1];

    return 0;
}