#include <iostream>


class Wektor2D
{
public:
    Wektor2D()  { x = 0.0; y = 0.0; }
    Wektor2D(double a, double b) 
    {
        x = a; 
        y = b;
        std::cout<<"pobralem wartosc" << std::endl;
    }

    double norm() {
        return sqrt(x * x + y * y);
    }
    void print() {
        std::cout << norm() << std::endl;
    }
    void setX(double a) 
    {
        x = a;
    }
    void setY(double b) 
    {
        y = b;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

   // ~Wektor2D()
    //    void print() {
    //    std::cout << "destruktor" << std::endl;
   // }
private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D A, Wektor2D B) {
    Wektor2D C{A.getX() + B.getX(), A.getY() + B.getY()};
    return C;
}

double operator*(Wektor2D A, Wektor2D B) {
    return (A.getX() * A.getY() + B.getX()*B.getY());
}
