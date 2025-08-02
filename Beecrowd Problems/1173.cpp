#include <iostream>
#include<array>

using namespace std;

int main() {
    int a;
    cin >> a;
    array <int, 10> arr;
    arr[0] = a;
    cout << "N[0] = " << a << endl;

    for (int i = 1; i < arr.size(); i++) {
        arr[i] = 2 * arr[i - 1];
        cout << "N[" << i << "] = "<<arr[i] << endl;
    }
    return 0;
}
