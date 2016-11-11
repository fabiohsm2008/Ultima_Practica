#ifndef POINT_H
#define POINT_H

class Punto{
private:
    double x;
    double y;
public:
    Punto();
    Punto(double ax, double ay);
    Punto(Punto &o);
    void setX(double nx);
    void setY(double ny);
    double getX();
    double getY();
    void imprimir_punto();
    void modificar_punto(double kx, double ky);
};

#endif // POINT_H
