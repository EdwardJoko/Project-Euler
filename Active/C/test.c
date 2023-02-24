#include <stdio.h>

#include "tester.h"

#include "p001.h"
#include "p002.h"
#include "p003.h"
#include "p004.h"
#include "p005.h"
#include "p006.h"
#include "p007.h"
#include "p008.h"

int main(int argc, char *argv[]) {
    test("001", compute001( 1000         ), 233168);
    test("002", compute002( 4000000      ), 4613732);
    test("003", compute003( 600851475143 ), 6857);
    test("004", compute004( 3            ), 906609);
    test("005", compute005( 20           ), 232792560);
    test("006", compute006( 100          ), 25164150);
    test("007", compute007( 10001        ), 104743);
    test("008", compute008( 13           ), 23514624000);

    return 0;
}
