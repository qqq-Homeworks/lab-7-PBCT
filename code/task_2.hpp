// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>

#ifndef LAB2_07_VIRTUAL_TASK2_HPP
#define LAB2_07_VIRTUAL_TASK2_HPP

#include "iostream"

class Abstr {
    double number;
public:
    explicit Abstr(double x = 0) : number(x) {}

    virtual void print() = 0;

    virtual ~Abstr() {
        std::cout << std::endl << "Abstr object was destructed" << std::endl;
    }
};

class Deriv1 : public Abstr {
    double number;
public:
    explicit Deriv1(double x = 0) : number(x) {}

    void print() override {
        std::cout << "Deriv1 = [" << number << ']' << std::endl;
    }

    virtual ~Deriv1() {
        std::cout << std::endl << "Deriv1 object was destructed" << std::endl;
    }
};

class Deriv2 : public Deriv1 {
    double number;
public:
    explicit Deriv2(double x = 0) : number(x) {}

    void print() override {
        std::cout << "Deriv2 = [" << number << ']'<< std::endl;
    }

    virtual ~Deriv2() {
        std::cout << std::endl << "Deriv2 object was destructed" << std::endl;
    }
};

class Deriv3 : public Deriv1 {
    double number;
public:
    explicit Deriv3(double x = 0) : number(x) {}

    void print() override {
        std::cout << "Deriv3 = [" << number << ']'<< std::endl;
    }

    virtual ~Deriv3() {
        std::cout << std::endl << "Deriv3 object was destructed" << std::endl;
    }
};

#endif //LAB2_07_VIRTUAL_TASK2_HPP
