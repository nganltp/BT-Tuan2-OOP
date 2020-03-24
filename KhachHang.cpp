#include "KhachHang.h"

KhachHang::KhachHang()
{
	LieuTrinh lt;
	lt.SetTenLieuTrinh("Tay trang");
	lt.SetGia(30);
	lt.SetThoiGian(5);
	danhSachLieuTrinh.push_back(lt);

}
int KhachHang::TongTien(vector<LieuTrinh> dsLieuTrinh)
{
	int sum = 0;
	for (int i = 0; i < dsLieuTrinh.size(); i++)
	{
		sum = sum + dsLieuTrinh[i].GetGia();
	}
	return sum;
}

int KhachHang::TongThoiGian(vector<LieuTrinh> dsLieuTrinh)
{
	int sum = 0;
	for (int i = 0; i < dsLieuTrinh.size(); i++)
	{
		sum = sum + dsLieuTrinh[i].GetThoiGian();
	}
	return sum;
}
