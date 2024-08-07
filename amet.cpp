#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}
};

int getValue(MyClass& c) {
    return c.value;
}

int main() {
    MyClass obj(42);
    std::cout << getValue(obj) << std::endl;  // Output: 42
    return 0;
}
