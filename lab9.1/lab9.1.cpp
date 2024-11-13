#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "xp = "; cin >> x_p;
    cout << "xk = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> e;
    cout << "----------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "arctg(x)" << "|"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "----------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum(); // Виклик процедури обчислення суми
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << atan(x) << "|"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |" << endl;
        x += dx;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}