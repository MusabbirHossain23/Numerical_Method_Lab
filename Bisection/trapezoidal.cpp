// #include <iostream>

// using namespace std;

// // Function to calculate the value of f(x) = x^2
// double func(double x) {
//     return x * x;
// }

// // Trapezoidal Rule for numerical integration
// double trapezoidalRule(double a, double b, int n) {
//     double h = (b - a) / n;
//     double sum = 0.5 * (func(a) + func(b));

//     for (int i = 1; i < n; i++) {
//         double x = a + i * h;
//         sum += func(x);
//     }

//     return h * sum;
// }

// int main() {
//     double a = 0.0; // Lower limit of integration
//     double b = 4.0; // Upper limit of integration
//     int n = 4;      // Number of subintervals (step size of 1)

//     double result = trapezoidalRule(a, b, n);

//     cout << "Approximate area under the curve: " << result << " sq units" << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of f(x) = 1/x
double func(double x) {
    return 1.0 / x;
}

// Trapezoidal Rule for numerical integration
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (func(a) + func(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += func(x);
    }

    return h * sum;
}

int main() {
    double a = 1.0;   // Lower limit of integration
    double b = 2.0;   // Upper limit of integration
    int n = 1000;     // Number of subintervals for accuracy

    double result = trapezoidalRule(a, b, n);

    cout << "Approximate integral: " << result << endl;

    return 0;
}
