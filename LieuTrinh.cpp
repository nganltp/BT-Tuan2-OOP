#include "LieuTrinh.h"

int LieuTrinh::GetGia()
{
	return gia;
}

int LieuTrinh::GetThoiGian()
{
	return thoiGian;
}

void LieuTrinh::SetTenLieuTrinh(string name)
{
	tenLieuTrinh = name;
}

void LieuTrinh::SetThoiGian(int thoigian)
{
	thoiGian = thoigian;
}

void LieuTrinh::SetGia(int gia)
{
	gia = gia;
}
