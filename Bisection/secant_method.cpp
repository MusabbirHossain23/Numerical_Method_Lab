#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of f(x)
double func(double x) {
    return x * x * x - 2 * x * x - 4;
}

// Secant method to find the root of the function
double secant(double x0, double x1, double tolerance, int maxIterations) {
    double x2, f0, f1, f2;
    int iteration = 0;

    do {
        f0 = func(x0);
        f1 = func(x1);

        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);
        f2 = func(x2);

        iteration++;

        cout << "Iteration " << iteration << ": x0 = " << x0 << ", x1 = " << x1 << ", x2 = " << x2 << ", f(x2) = " << f2 << endl;

        x0 = x1;
        x1 = x2;
    } while (fabs(f2) >= tolerance && iteration < maxIterations);

    return x2;
}

int main() {
    double x0 = 1.0;
    double x1 = 2.0;
    double tolerance = 0.0001;
    int maxIterations = 100;

    double root = secant(x0, x1, tolerance, maxIterations);

    cout << "Root of the function is approximately: " << root << endl;

    return 0;
}
