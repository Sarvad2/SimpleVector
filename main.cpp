#include <iostream>
#include "simple_vector.h"

// Tests
#include "tests.h"

using namespace std;
int main() {
    Test1();
    Test2();
    TestReserveMethod();
    TestReserveConstructor();
    /*
    TestTemporaryObjConstructor();
    TestTemporaryObjOperator();
    TestNamedMoveConstructor();
    TestNamedMoveOperator();
    TestNoncopiableMoveConstructor();
    TestNoncopiablePushBack();
    TestNoncopiableInsert();
    TestNoncopiableErase();
    */
    return 0;
}
