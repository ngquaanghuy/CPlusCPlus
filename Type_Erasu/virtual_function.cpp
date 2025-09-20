#include <iostream>

using namespace std;

class Shape {
    public:
        virtual ~Shape() = default;
        virtual void draw() const = 0;
        virtual double area() const = 0;
};

class Circle : public Shape {
    double radius;
    public:
        Circle(double r) : radius(r) {}
        void draw() const override {
            cout << "Draw" << endl;
        }
        double area() const override {
            return 3.14159 * radius * radius;
        }
};
