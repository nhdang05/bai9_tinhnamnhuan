// bai9_tinhnamnhuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isNamNhuan(int sonam);
int main()
{
	int nam;
	cout << " nhap nam";
	cin >> nam;
	if (isNamNhuan(nam))
	{
		cout << "Nam Nhuan";
	}
	return 0;
}
/// <summary>
/// ham su dung de xac dinh nam nhuan hay khong
/// Neu Nhuan = Tru
/// Neu khong Nhuan = false
/// <summary>
/// param name = "sonam" ></param>
/// <return></return>
bool isNamNhuan(int sonam) {
	if (sonam % 4 == 0 && sonam % 100 != 0 || sonam % 400 == 0)
	{
		return true;
	}
	else {
		return false;
	}
}