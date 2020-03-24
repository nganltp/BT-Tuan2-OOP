#include "iostream"
using namespace std;
#pragma once
class LieuTrinh
{
private:
	string tenLieuTrinh;
	string moTa;
	int thoiGian;
	int gia;
public:
	//string GetTenLieuTrinh(string);
	int GetGia();
	int GetThoiGian();

	void SetTenLieuTrinh(string);
	void SetThoiGian(int);
	void SetGia(int);
};

