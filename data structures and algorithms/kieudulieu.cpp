#include <iostream>
#include <iomanip>	// for std::setprecision()

using namespace std;

int main()
{
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl; 

// C++11, may not be supported by your compiler
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; 
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; 

	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl; 

// C++11, may not be supported by your compiler
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl; 

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

	// You can also use the sizeof operator on a variable name
	int n;
	cout << "n variable:\t" << sizeof(n) << " bytes" << endl;

    // mặc định cout chỉ xuất hiện được 6 kí tự đằng sau
    float d;
    d = 1.23456789;
	cout << d << endl;

    // sự khác nhau giữa độ chính xác của kiểu float và kiểu double
    cout << std::setprecision(20);		// Show 20 digits

	float	f{ 9.66666666666666666666f }; 	// Initializations
	cout << "su chinh xac cua kieu float :" << f << endl;

    double	e{ 9.66666666666666666666 };	// Initializations
	cout << "su chinh xac cua kieu double :" << e << endl;

	return 0;
}