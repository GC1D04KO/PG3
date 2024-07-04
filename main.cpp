#include <iostream>

class 親クラス {
public:
    virtual void Voice() { 
        std::cout << "あにまる" << std::endl;
    }
};

class 子供A : public 親クラス {
public:
    void Voice() override {
        std::cout << "子供Aっす" << std::endl;
    }
};

class 子供B : public 親クラス {
public:
    void Voice() override {
        std::cout << "子供Bっす" << std::endl;
    }
};

int main() {
    親クラス* animal[2] = { new 子供A, new 子供B };

    animal[0]->Voice();
    animal[1]->Voice();

    delete animal[0];
    delete animal[1];

    return 0;
}