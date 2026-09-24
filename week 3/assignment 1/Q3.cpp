#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = 2;
    double y = 5;
    double z = 5;

    x = x + (((3 * y) - sqrt(z + 4)) / (2 * z)) - ((x * y) / 5);

    cout << fixed << setprecision(4) << x << endl;
    return 0;
}