#include <iostream>
#include <string>
#include <cmath>
#define PI 3.142
using namespace std;

class Shape {
    public:
        string color;
        int position;
        int borderthickness;
        
        Shape(string color, int position, int borderthickness) : color(color), position(position), borderthickness(borderthickness) {}

         virtual void draw() {
            cout << "Drawing a shape!\n";
        }
        virtual void calculateArea() {
            cout << "calculating area of a random shape!\n";
        }
        virtual void calculatePerimeter() {
            cout << "Calculating Parameter of a random area\n";
        }
};

class Circle : public Shape {
    public:
    double area, radius, perimeter;

    Circle(string color, int position, int borderthickness, double radius ): Shape(color, position, borderthickness), radius(radius) {}
        void draw() {
            cout << "Drawing a circle!\n";
        }
        void calculateArea() {
            area = PI * pow(radius, 2);
            cout << "Area: " << area << endl;
        }
        void calculatePerimeter() {
            perimeter = 2 * PI * radius;
            cout << "Parameter: " << perimeter << endl;
        }
};

class Rectangle : public Shape {
    public:
        double width, height , area, perimeter;
    Rectangle(string color, int position, int borderthickness, double width, double height): Shape(color, position, borderthickness), width{width}, height(height) {}        
        void draw() {
           cout << "Drawing a rectangle!\n";
        }
        void calculateArea() {
            area = width * height;
            cout << "Area: " << area << endl;
        }
        void calculatePerimeter() {
            perimeter = 2 * (width + height);
            cout << "Parameter: " << perimeter << endl;
        }
};
class Triangle : public Shape {
    public:
        double base, height , area, perimeter, a, b, c;
    Triangle(string color, int position, int borderthickness, double base, double height, double a, double b, double c): Shape(color, position, borderthickness), base{base}, height(height), a(a), b(b), c(c) {}        
        void draw() {
            cout << "Drawing a triangle!\n";
        }
        void calculateArea() {
            area = 0.5 * base * height;
            cout << "Area: " << area << endl;
        }
        void calculatePerimeter() {
            perimeter = a + b + c;
            cout << "Parameter: " << perimeter << endl;
        }
};

int main() {
    Shape* s = new Circle("orange", 4, 12, 3);
    Circle c("red", 4, 12, 5);
    Rectangle r("blue", 5, 9, 2, 3);
    Triangle t("black", 8, 7, 1, 2, 3, 4, 5);
    s -> draw();
    c.draw();
    r.draw();
    t.draw();
    s -> calculateArea();
    c.calculateArea();
    r.calculateArea();
    t.calculateArea();
    s -> calculatePerimeter();
    c.calculatePerimeter();
    r.calculatePerimeter();
    t.calculatePerimeter();
    delete s;
    return 0;
}
