#pragma once
#include "Diem.h"
#include<vector>
class DaGiac : public Diem
{
private:
	int n;
	Diem D[10];
public:
	DaGiac() : Diem() {}
	void Nhap();
	void Xuat() const;
	float ChuVi();
	float DienTich();
	void TinhTien(double X, double Y);
	void Quay(double d);
	void PhongTo_ThuNho(double scale);
};

