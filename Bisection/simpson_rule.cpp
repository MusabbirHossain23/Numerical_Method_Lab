// #include <iostream>
// #include <cmath>

// using namespace std;

// #define PI 3.141592653589793238462643383279502884L

// // Function to calculate the value of the function to be integrated
// double func(double x) {
//     return sin(x);
// }

// // Simpson's Rule for numerical integration
// double simpsonsRule(double a, double b, int n) {
//     double h = (b - a) / n;
//     double sum = func(a) + func(b);

//     for (int i = 1; i < n; i++) {
//         double x = a + i * h;
//         if (i % 2 == 0) {
//             sum += 2 * func(x);
//         } else {
//             sum += 4 * func(x);
//         }
//     }

//     return (h / 3) * sum;
// }

// int main() {
//     double a = 0.0;          // Lower limit of integration
//     double b = PI;           // Upper limit of integration (pi)
//     int n = 1000;            // Number of subintervals

//     double result = simpsonsRule(a, b, n);

//     cout << "Approximate integral: " << result << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of f(x) = sin(sqrt(x))
double func(double x) {
    return sin(sqrt(x));
}

// Simpson's 1/3 Rule for numerical integration
double simpsons13Rule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = func(a) + func(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * func(x);
        } else {
            sum += 4 * func(x);
        }
    }

    return (h / 3) * sum;
}

int main() {
    double a = 0.0; // Lower limit of integration
    double b = 2.0; // Upper limit of integration
    int n = 8;      // Number of subintervals

    double result = simpsons13Rule(a, b, n);

    cout << "Approximate integral: " << result << endl;

    return 0;
}

