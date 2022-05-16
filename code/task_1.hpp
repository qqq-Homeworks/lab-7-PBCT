// Copyright 2022 qqq <polyakovdd@student.bmstu.ru>


#ifndef CODE_TASK_1_HPP
#define CODE_TASK_1_HPP

class Bas {
public:
    int a;
    int ClassType;
    Bas(int x = 0) : a(x), ClassType(0) {} // Конструктор
};
// Производный класс 1
class Type1 : public Bas {
public:
    int Coord;
    Type1(int x=0) : Coord(x) { ClassType = 1; }    // Конструктор
    void Move(int Delta) { Coord += Delta; } // Метод для динамического вызовa
};
// Производный класс 2
class Type2 : public Bas {
public:
    int Coord;
    Type2(int x = 0) : Coord(x) { ClassType = 2; }    // Конструктор
    void Move(int Delta) { Coord -= Delta; }   // Метод для динамического вызовa
};


#endif //CODE_TASK_1_HPP
