#include <iostream>
#include "task_1.hpp"
#include "task_2.hpp"
#include <list>

void printer(IPrint &pr) {
    pr.print();
}

int main() {

    Bas *pObj;
    Type1 T1(10);
    Type2 T2(20);
    pObj = &T1;
    std::cout << "T1 = " << T1.Coord << " T2 = " << T2.Coord << '\n';
    switch (pObj->ClassType) {
        case 1:
            ((Type1 *) pObj)->Move(5);
            break;
        case 2:
            ((Type2 *) pObj)->Move(5);
            break;
    }
    std::cout << "T1 = " << T1.Coord << " T2 = " << T2.Coord << '\n';

    pObj = &T2;
    switch (pObj->ClassType) {
        case 1:
            ((Type1 *) pObj)->Move(5);
            break;
        case 2:
            ((Type2 *) pObj)->Move(5);
            break;
    }
    std::cout << "T1 = " << T1.Coord << " T2 = " << T2.Coord << std::endl;

    std::cout << "--------------\n";

    U d1(404);
    Z d2(808);
    X d3(606);

    printer(d1);
    printer(d2);
    printer(d3);

    U *pAbs = &d1;

    pAbs->print();
    d1.print();

    pAbs = &d2;
    pAbs->print();
    d2.print();

    pAbs = &d3;
    pAbs->print();
    d3.print();

    std::cout << "--------------\n";

    std::list<U *> arr{&d1, &d2, &d3};
    while (!arr.empty()) {
        arr.front()->print();
        arr.pop_front();
    }
    return 0;
}
