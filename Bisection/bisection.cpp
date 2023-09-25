// #include <iostream>
// #include <cmath>

// using namespace std;

// // Function to calculate the value of f(x)
// double func(double x) {
//     return x*x*x + 2*x*x - x + 8;
// }

// // Bisection method to find the root of the function
// double bisection(double a, double b, double tolerance) {
//     if (func(a) * func(b) >= 0) {
//         cout << "Bisection method cannot guarantee convergence in this interval." << endl;
//         return NAN;
//     }
    
//     double c;
    
//     while ((b - a) >= tolerance) {
//         c = (a + b) / 2.0;
        
//         if (func(c) == 0.0) {
//             return c;
//         }
//         else if (func(c) * func(a) < 0.0) {
//             b = c;
//         }
//         else {
//             a = c;
//         }
//     }
    
//     return c;
// }

// int main() {
//     double a = -100.0;
//     double b = 100.0;
//     double tolerance = 0.0001;
    
//     double root = bisection(a, b, tolerance);
    
//     if (!isnan(root)) {
//         cout << "Root of the function is approximately: " << root << endl;
//     }
    
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the value of f(x)
double func(double x) {
    return x * x * x + 2 * x * x - x + 8;
}

// Bisection method to find the root of the function
double bisection(double a, double b, double tolerance) {
    if (func(a) * func(b) >= 0) {
        cout << "Bisection method cannot guarantee convergence in this interval." << endl;
        return NAN;
    }

    double c;
    int iteration = 0;

    while ((b - a) >= tolerance) {
        c = (a + b) / 2.0;
        iteration++;

        cout << "Iteration " << iteration << ": a = " << a << ", b = " << b << ", c = " << c << ", f(c) = " << func(c) << endl;

        if (func(c) == 0.0) {
            return c;
        } else if (func(c) * func(a) < 0.0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    double a = -100.0;
    double b = 100.0;
    double tolerance = 0.0001;

    double root = bisection(a, b, tolerance);

    if (!isnan(root)) {
        cout << "Root of the function is approximately: " << root << endl;
    }

    return 0;
}
