#pragma once
class Diem
{
protected:
	float dx, dy;
public:
	Diem() {
		this->dx = 0;
		this->dy = 0;
	}

	void setdX(float X);
	void setdY(float Y);

	float getdX() const ;
	float getdY() const ;

	void Nhap();
	void Xuat() const;
	void TinhTien(double X, double Y);
	void PhongTo_ThuNho(double scale);
	void Quay(double alpha);
	double TinhKhoangCach(Diem A, Diem B) const;
};

