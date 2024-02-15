#include <iostream>
using namespace std;
#include "1.hpp"
int main(){
	float a, b;
	cout << "Введите два значения" << endl;
	cin >> a >> b;
	cout << "Сумма этих чисел равна: " << summ(a, b) << endl;
	return 0;
}
