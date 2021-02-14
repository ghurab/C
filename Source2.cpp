////—Ì«÷ «Õ„œ ’«·Õ €«“Ì
////—ﬁ„ «·ﬁÌœ 0151_20
//// Œ’’ CS-AM
//
//#include <iostream>
//#include <sstream>
//using namespace std;
//
////the result for negativ power
//double result_for_negativ_power(double, double);
//
//
//// for the nigatev number
//int negativ_number(int);
//
////for the power
//double power1(double, double);
//
////the squrt function
//double squrt_f(double, double);
//
////the resut for dicemal number
//double the_decimal_power(double, double);
//
//int main()
//{
//	double the_power;
//	double input_num;
//
//	cout << "enter the number: ";
//	cin >> input_num;
//
//	cout << "enter the power number: ";
//	cin >> the_power;
//
//	if (the_power < 0)
//	{
//		cout << "The result for " << input_num
//			<< " ^ " << the_power
//			<< " is " << result_for_negativ_power(input_num, the_power);
//	}
//	else
//	{
//		cout << "The result for " << input_num
//			<< " ^ " << the_power
//			<< " is " << the_decimal_power(the_power, input_num);
//	}
//	cin >> the_power;
//	return 0;
//}
//
////the result for negativ power
//double result_for_negativ_power(double x, double y)
//{
//	int num = negativ_number(y);
//	return 1 / power1(x, num);
//}
//
////for the power
//double power1(double x, double y)
//{
//
//	double mul = 1;
//
//	for (int i = 0; i < y; i++)
//	{
//		mul *= x;
//	}
//
//	return mul;
//}
//
//// for the nigatev number
//int negativ_number(int y)
//{
//	int cont = 0;
//	int i = y;
//	while (i < 0)
//	{
//		cont++;
//		i += 1;
//	}
//
//	return cont;
//}
//
////the squrt function
//double squrt_f(double inside_num, double num_squrt)
//{
//	double x, A = inside_num, dx, eps = 10e-6, n = num_squrt;
//	x = A * 0.5;
//	dx = (A / power1(x, n - 1) - x) / n;
//	while (dx >= eps || dx <= -eps)
//	{
//		x = x + dx;
//		dx = (A / power1(x, n - 1) - x) / n;
//	}
//
//	return x;
//}
//
////the resut for dicemal number
//double the_decimal_power(double the_power, double input_num)
//{
//	string num1;
//	ostringstream num;
//
//	int a = the_power;
//	double b = the_power - a;
//
//	num << b;
//	num1 = num.str();
//
//	int number_string = 0;
//
//	for (int number = 2; number < num1.length(); number++)
//	{
//		number_string++;
//	}
//
//	int number_af1 = power1(10, number_string),
//		number_af2 = b * number_af1;
//
//	for (int i = number_af2; i > 0; i--)
//	{
//		if (number_af2 % i == 0 && number_af1 % i == 0)
//		{
//			number_af2 /= i;
//			number_af1 /= i;
//			break;
//		}
//	}
//	double end = squrt_f(input_num, number_af1);
//	if (the_power == 0.0)
//		return 1;
//	else
//		return power1(input_num, a) * power1(end, number_af2);
//}
