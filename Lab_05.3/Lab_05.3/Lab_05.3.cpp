#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double k(const double x);

int main() {
    double zp, zk, m;
    double n; 
    cout << "zp = ";
    cin >> zp;
    cout << "zk = ";
    cin >> zk;
    cout << "n = ";
    cin >> n;
    cout << fixed;
    cout << "--------------------------------------------------------------" << endl;
    cout << "|" << setw(5) << "z" << "   |"
        << setw(25) << "m" << "                          |" << endl;
    cout << "--------------------------------------------------------------" << endl;
    double z = zp;

    while (z <= zk) {
        m = k(pow(z, 2) + 1) - k(pow(z, 2) - 1) + 2 * k(z);
        cout << "|" << setw(7) << setprecision(2) << z
            << " |" << setw(50) << setprecision(3) << m
            << " |" << endl;
        z += n;
    }
    cout << "--------------------------------------------------------------" << endl;
    return 0;
}

double k(const double x) {
    if (abs(x) >= 1) {
        return (exp(x) + sin(x)) / (pow(cos(x), 2) + 1);
    }
    else {
        double S = 0;
        int i = 0;
        while (i <= 5) {
            int P = 1;
            int n = 1;
            while (n <= i) {
                P *= n;
                n++;
            }
            S += pow(x, i) / P;
            i++;
        }
        return (1 / exp(x)) * S;
    }
}
