#include <iostream>
#include "task_1.hpp"
#include "task_2.hpp"
#include <list>

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

    Deriv1 d1(404);
    Deriv2 d2(808);
    Deriv3 d3(606);

    Abstr *pAbs = &d1;

    pAbs->print();
    d1.print();

    pAbs = &d2;
    pAbs->print();
    d2.print();

    pAbs = &d3;
    pAbs->print();
    d3.print();

    std::cout << "--------------\n";

    std::list<Abstr *> arr{&d1, &d2, &d3};
    while (!arr.empty()) {
        arr.front()->print();
        arr.pop_front();
    }
    return 0;
}
