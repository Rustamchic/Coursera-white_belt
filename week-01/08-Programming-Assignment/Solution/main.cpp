#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // пока оба числа положительны, будем их уменьшать, не меняя их НОД
    while (a > 0 && b > 0) {

        // возьмём большее из чисел и заменим его остатком от деления на второе
        // действительно, если a и b делятся на x, то a - b и b делятся на x
        // тогда и a % b и b делятся на x, так что можно a заменить на a % b
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }

    }

    // если одно из чисел оказалось равно нулю, значит, на последней итерации
    // большее число разделилось на меньшее
    cout << a + b;

    return 0;
}
