#include <iostream>

// Code Sample for Inheritance
class Figure {
public:
    int side;
    Figure (int side) : side(side) {}
    int getSide() {
        return side;
    }
};

class Square : public Figure {
public:
    Square(int side) : Figure(side) {}
    int area() {
        return (getSide() * getSide());
    }
};

// Code sample for Decorator
class Figure {
public:
    int side;
    Figure (int side) : side(side) {}
    virtual int getSide() {
        return side;
    }
};

class Square : public Figure {
public:
    Square(int side) : Figure(side) {}
    int getSide() override {
        return side;
    }
};

class SquareDecorator {
public:
    SquareDecorator(Figure* figure) : figure(figure) {}
    int area() {
        return figure->getSide() * figure->getSide();
    }
private:
    Figure* figure;
};

// Code Sample for Facade
class Figure {
public:
    int side;
    Figure (int side) : side(side) {}
    virtual int getSide() {
        return side;
    }
};

class Square : public Figure {
public:
    Square(int side) : Figure(side) {}
    int getSide() override {
        return side;
    }
};

class Rhombus : public Figure {
public:
    Rhombus(int side) : Figure(side) {}
    int getSide() override {
        return side;
    }
};

class Facade {
public:
    Square square;
    Rhombus rhombus;
    Facade (Square square, Rhombus rhombus) : square(square), rhombus(rhombus) {}
    double sinusAlpha = 0.5; //constant is needed to obtain area of rhombus
    int SquareArea() {
        return square.getSide() * square.getSide();
    }
    double RhombusArea() {
        return rhombus.getSide() * rhombus.getSide() * sinusAlpha;
    }
};

// Code Sample for Composition
class Figure {
public:
    int side;
    Figure (int side) : side(side) {}
    virtual int getSide() {
        return side;
    }
};

class Square : public Figure {
public:
    Square(int side) : Figure(side) {}
    int getSide() override {
        return side;
    }
};

class Composition {
public:
    Composition(int side) : square(side) {}
    int area() {
        return square.getSide() * square.getSide();
    }
private:
    Square square;
};

// Code Sample for Delegation
class Figure {
public:
    int side;
    Figure (int side) : side(side) {}
    virtual int getSide() {
        return side;
    }
};

class Square : public Figure {
public:
    Square(int side) : Figure(side) {}

    int area() {
        return (getSide() * getSide());
    }
};

class Area {
public:
    Square square;
    Area(Square square) : square(square) {}
    int area() {
        return square.area();
    }
};

// Code Sample for Static Methods
class Figure {
public:
    int side;
    Figure (int side) : side(side) {}
    virtual int getSide() const {
        return side;
    }
};

class Square : public Figure {
public:
    Square(int side) : Figure(side) {}
    static int area(const Figure& figure){
        return figure.getSide() * figure.getSide();
    }
};
















