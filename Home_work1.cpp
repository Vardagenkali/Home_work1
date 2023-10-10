#include <iostream>
#define end cout<<endl;
using namespace std;

class Fraction {
public:
    int numerator;
    int denominator;

    int addition();
    int subtraction();
    int multiplication();
    int division();

};

int Fraction::addition() {
    return numerator + denominator;
}

int Fraction::subtraction() {
    return numerator - denominator;
}

int Fraction::multiplication() {
    return numerator * denominator;
}

int Fraction::division() {
    return numerator / denominator;
}

int main()
{
    setlocale(LC_ALL, "");
    int choice;
    Fraction fraction;
    cout << "Введите числитель: ";
    cin >> fraction.numerator;
    end
    cout << "Введите знаменатель: ";
    cin >> fraction.denominator;
    end
    cout << "Выберите арифметическую операцию: \n1)+\n2)-\n3)*\n4)/\nВаш выбор:";
    cin >> choice;
    end
    switch (choice) {
    case 1: cout<<fraction.addition();
        break;
    case 2: cout<<fraction.subtraction();
        break;
    case 3: cout<<fraction.multiplication();
        break;
    case 4: cout<<fraction.division();
        break;
    default: cout << "Error!" << endl;
        break;
    }
    end
}

