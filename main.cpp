#include <iostream>

class point() {
    int x;
    int y;
    int getX() const {
        return x;
    }
    void setX(int x) {
        point::x = x;
    }

    int getY() const {
        return y;
    }
    void setY(int y) {
        point::y = y;
    }
point (int _x, int _y) {
    x = _x;
    y = _y;
    std::cout<< x << '|'<< y <<std::endl;
}
    class point2: public point {
    public:
        int z;
        int t;

        int getZ() const {
            return z;
        }
        void setZ(int z) {
            point2::z = z;
        }

        int getT() const {
            return t;
        }
        void setT(int t) {
            point2::t = t;
        }

        point2 (int _x, int _y, int _z, int _t) {
            x = _x;
            y = _y;
            z = _z;
            t = _t;
            std::cout<<x<<' '<<y<<' '<<z<<' '<<t<<std::endl;
        }

        int velocity(int x1, int y1, int z1, int x2, int y2, int z2, int t) {
            int v = (sqrt((x1 - x2) ^ 2 + (y1 - y2) ^ 2 + (z1 - z2) ^ 2)) / t;
            std::cout << "velocity =" << v << std::endl;
        }
    };

    }

int main() {
    srand(time(NULL));
    point2 (rand()%200-100; rand()%200-100; 0, rand()%1000);
    std::vector<int>a;
    int k=0;
    while (k<10) {
        point2 b;
        b.setX(rand()%200-100);
        b.setY(rand()%200-100);
        b.setT(rand()%1000);
        a.push_back(b);
        k+=1;
    }





    return 0;
}
