#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double side1, side2, side3, angle;
    cout << "Введите длину первой стороны: ";
    cin >> side1;
    if (side1 <= 0) {
        cout << "Стороны не должна быть равна нулю." << endl;
        return 1;
    }

    cout << "Введите длину второй стороны: ";
    cin >> side2;
    if (side2 <= 0) {
        cout << "Сторона не должна быть равна нулю." << endl;
        return 1;
    }

    cout << "Введите длину третьей стороны: ";
    cin >> side3;
    if (side3 <= 0) {
        cout << "Сторона не должна быть равна нулю." << endl;
        return 1;
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cout << "Эти стороны не могут образовать треугольник." << endl;
        return 1;
    }

    cout << "Введите значение угла: ";
    cin >> angle;
    if (angle < 90) {
        cout << "Треугольник является остроугольным." << endl;
    }
    else if (angle == 90) {
        cout << "Треугольник является прямоугольным." << endl;
    }
    else if (angle > 90 && angle < 180) {
        cout << "Треугольник является тупоугольным." << endl;
    }
    else {
        cout << "Угол должен быть 0 - 180) градусов." << endl;
    }
    return 0;
}
