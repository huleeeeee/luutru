#define _USE_MATH_DEFINES
#include<cmath>

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << "moi nhap vao so\n";
	double p = 4;
	if (p <= 5)
		cout << "tot";
	
	else
	{
		cout << "ban cook";
	}
	cout << "nhap diem tb";
	double dtb = 5;

	if (dtb >= 8 && dtb <= 10)
		cout << "ban gioi";
	else if (dtb < 8 && dtb >= 6.5)
		cout << "ban kha";
	else
	{
		cout << "ban yeu";
	}
	//tổng hiệu hai số 
	cout << " nhap vao tong hai so\n";
	double t=2;
	//cin >> t;
	cout << "nhap vao hieu hai so\n";
	double h=3 ;
	//cin >> h;
	cout << "x=" << (t + h) / 2 << endl;
	cout << "y=" << (t - h) / 2 << endl;
	//bmi 
	cout << "nhap vao chieu cao\n";
	double chieucao = 6, can = 90, bmi;
	//cin >> chieucao;
	cout << "nhap vao can nang\n";
	//cin >> can;
	bmi = can / pow(chieucao, 2);
	cout << "gia tri bmi=" << bmi << endl;
	if (bmi < 15)
		cout << "than hinh qua gay\n";
	else if (bmi >= 15 && bmi < 16)
		cout << "than hinh gay\n";
	else if (bmi >= 16 && bmi < 17)
		cout << "than hinh bth\n";
	else
	{
		cout << "than hinh xam\n";

	}
	//tính năm nhuận 
	int nam = 2024;
	cout << "nhap vao nam \n";
	//cin >> nam;
	if (((nam % 4 == 0) && (nam % 100 != 0)) || (nam % 400 == 0))
		cout << "nam nhuan\n";
	else
	{
		cout << "la nam thuong\n";

	}
	//xem tháng có bao nhiêu ngày 
	int thang=3;
	int n;
	cout << "nhap thang vao\n";
	//cin >> thang;
	if (((thang <= 12) && (thang >= 1)) && ((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11)))
		cout << "co 31 ngay\n";
	else if (((thang <= 12) && (thang >= 1)) && !((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11) || (thang == 2)))
		cout << "thang co 30 ngay \n";
	else if (thang == 2)
	{
		cout << "nhap nam\n";
		cin >> n;
		if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
			cout << "29 ngay\n";
		else
		{
			cout << "28 ngay\n";

		}

	}
	else
	{
		cout << "nhap sai\n";
	}
	double a, b, c, x1, x2, d;
	cout << "nhap vao a b c\n";
	cin >> a >> b >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d < 0)
		cout << "phuong trinh vo nghiem\n";
	else if (d == 0)
	{
		cout << "phuong trinh co nghiem duy nhat\n";
		x1 = x2 = -b / (2 * a);
		cout << "x1=x2=" << x1 << endl;
	}
	else if (d > 0)
	{
		cout << "phuong trinh co hai nghiem phan biet";
		x1 = (-b - pow(d, 1 / 2))/ (2 * a);
		x2 = (-b + pow(d, 1 / 2)) / (92 * a);
		cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
		
	}







}

