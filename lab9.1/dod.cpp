#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsVar;

void nsDod::dod() {
    double R = -1.0 * (2.0 * n - 1) / (2.0 * n + 1) / (x * x);  // Рекурентне співвідношення
    a *= R;  // Оновлення члена ряду
}