#include "iostream"
#include "LieuTrinh.h"
#include "vector"
using namespace std;
#pragma once
class KhachHang
{
private:
	string tenKhachHang;
	vector <LieuTrinh> danhSachLieuTrinh;
public:
	KhachHang();
	int TongTien(vector <LieuTrinh>);
	int TongThoiGian(vector <LieuTrinh>);
};

