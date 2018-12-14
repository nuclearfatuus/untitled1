#include <iostream>

class point() {
    int x;
    int y;
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    point (int _x, int _y) {
        x = _x;
        y = _y;
        std::cout<< x << '|'<< y <<std::endl;
    }

    }

int main() {
    point(3, 4);
    return 0;
}
