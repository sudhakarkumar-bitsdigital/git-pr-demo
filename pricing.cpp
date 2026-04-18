#include <iostream>
using namespace std;

double calculateFinalPrice(double price, double discountPercent) {
    return price - (price * discountPercent / 100);
}

int main() {
    cout << "Final Price: " << calculateFinalPrice(1000, 10) << endl;
    return 0;
}