#include<iostream>
#include<cmath>
#define PI 3.1415
using namespace std;

int main() {

    long long R, L;
    cin >> R >> L;

    double balloon_volume = (4.0 / 3) * PI * pow(R, 3);

    long long total_filled_balloons = L / balloon_volume;

    cout << total_filled_balloons << endl;

    return 0;
}
