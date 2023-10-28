#include <iostream>


class Wektor2D
{
public:
    Wektor2D() 
    {
        x = 0;
        y = 0;
    }
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

    double getX(double a)
    {
        return x;
    }

    double getY(double b)
    {
        return y;
    }

   // ~Wektor2D()
    //    void print() {
    //    std::cout << "destruktor" << std::endl;
   // }
//private:
   // double x;
   // double y;
};

Wektor2D operator+(Wektor2D A, Wektor2D B) {
    return (A.getX() + B.getY());
}

Wektor2D operator*(Wektor2D A, Wektor2D B) {
    return (A.getX() * B.getY());
}
