#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "Enter number of data :";
    cin >> N;

    float X = 0, Y = 0, sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0;
    for (int i = 0; i < N; i++) {
        cout << "X" << i + 1 << " = ";
        cin >> X;
        cout << "Y" << i + 1 << " = ";
        cin >> Y;

        sumX += X;
        sumX2 += X * X;
        sumY += log(Y);
        sumXY += X * log(Y);
    }

    float D1 = sumY * sumX2 - sumXY * sumX;
    float D2 = N * sumXY - sumX * sumY;
    float D3 = N * sumX2 - sumX * sumX;

    float a = exp(D1 / D3);
    float b = D2 / D3;

    cout << "Required equation is y =" << a << "e^(" << b << "X)" << endl;
    return 0;
}