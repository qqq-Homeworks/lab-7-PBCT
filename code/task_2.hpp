// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>

#ifndef LAB2_07_VIRTUAL_TASK2_HPP
#define LAB2_07_VIRTUAL_TASK2_HPP

#include "iostream"

class Y {
    double number;
public:
    explicit Y(double x = 0) : number(x) {}

    virtual ~Y() {
        std::cout << std::endl << "Y object was destructed" << std::endl;
    }
};

class IPrint {
public:
    virtual void print() = 0;
};

class U : public Y, public IPrint {
    double number;
public:
    explicit U(double x = 0) : number(x) {}

    void print() override {
        std::cout << "U = [" << number << ']' << std::endl;
    }

    virtual ~U() {
        std::cout << std::endl << "U object was destructed" << std::endl;
    }
};

class Z : public U {
    double number;
public:
    explicit Z(double x = 0) : number(x) {}

    void print() override {
        std::cout << "Z = [" << number << ']' << std::endl;
    }

    virtual ~Z() {
        std::cout << std::endl << "Z object was destructed" << std::endl;
    }
};

class X : public U {
    double number;
public:
    explicit X(double x = 0) : number(x) {}

    void print() override {
        std::cout << "X = [" << number << ']' << std::endl;
    }

    virtual ~X() {
        std::cout << std::endl << "X object was destructed" << std::endl;
    }
};

#endif //LAB2_07_VIRTUAL_TASK2_HPP
