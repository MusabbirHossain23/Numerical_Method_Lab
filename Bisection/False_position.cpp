// #include <iostream>
// #include <cmath>

// using namespace std;

// // Function to calculate the value of f(x)
// double func(double x) {
//    // return x * x * x + 2 * x * x - x + 8;
//      return x*x*x - x*x + 2;
// }

// // False position method to find the root of the function
// double falsePosition(double a, double b, double tolerance) {
//     double c, fc;
//     int iteration = 0;

//     do {
//         c = (a * func(b) - b * func(a)) / (func(b) - func(a));
//         fc = func(c);
//         iteration++;

//         cout << "Iteration " << iteration << ": a = " << a << ", b = " << b << ", c = " << c << ", f(c) = " << fc << endl;

//         if (fc == 0.0) {
//             return c;
//         } else if (fc * func(a) < 0.0) {
//             b = c;
//         } else {
//             a = c;
//         }
//     } while (fabs(b - a) >= tolerance);

//     return c;
// }

// int main() {
//     double a = -100.0;
//     double b = 100.0;
//     double tolerance = 0.0001;

//     double root = falsePosition(a, b, tolerance);

//     cout << "Root of the function is approximately: " << root << endl;

//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of f(x)
double func(double x) {
    return x * x * x - 5* x * x + 11 * x - 6;
}

// False position method to find the root of the function
double falsePosition(double a, double b, double tolerance) {
    double c, fc;
    int iteration = 0;

    do {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        fc = func(c);
        iteration++;

        cout << "Iteration " << iteration << ": a = " << a << ", b = " << b << ", c = " << c << ", f(c) = " << fc << endl;

        if (fc == 0.0) {
            return c;
        } else if (fc * func(a) < 0.0) {
            b = c;
        } else {
            a = c;
        }
    } while (fabs(b - a) >= tolerance);

    return c;
}

int main() {
    double a = 1.0;
    double b = 4.0;
    double tolerance = 0.0001;

    double root = falsePosition(a, b, tolerance);

    cout << "Root of the function is approximately: " << root << endl;

    return 0;
}
