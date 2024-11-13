#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"
#define M_PI 3.14159265358979323846

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 1;
    a = -1 / x;  // Початковий доданок ряду
    s = a;

    while (fabs(a) >= e) {  // Продовжуємо, доки доданок більший за точність e
        dod();  // Виклик функції для обчислення наступного доданку
        s += a;
        n++;
    }
    s = M_PI / 2 + s;  // Додаємо π/2 для результату
}