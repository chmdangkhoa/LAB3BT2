#include "DaGiac.h"
#include <iostream>
#include <cmath>
using namespace std;


void DaGiac::Nhap() {
	cout << "Nhap So Dinh Cua Da Giac < 10: ";
	cin >> this->n;
	for (int i = 0; i < n; i++) {
		D[i].Diem::Nhap();
	}
}

void DaGiac::Xuat() const {
	for (int i = 0; i < n; i++) {
		D[i].Diem::Xuat();
	}
}

float DaGiac::ChuVi() {
	float result = TinhKhoangCach(D[0], D[n - 1]);
	for (int i = 1; i < n; i++) {
		result += TinhKhoangCach(D[i - 1], D[i]);
	}
	return result;
}

float DaGiac::DienTich() {
	// cong thuc shoelace
	float result = 0;
	for (int i = 0; i < n; i++) {
		int j = (i + 1) % n; // diem ke tiep (co vong lai diem dau)
		result += (D[i].getdX() * D[j].getdY()) - (D[j].getdX() * D[i].getdY());
	}
	return abs(result)/2.0;
}
void DaGiac::TinhTien(double X, double Y) {
	for (int i = 0; i < n; i++) {
		D[i].TinhTien(X, Y);
	}
}

void DaGiac::Quay(double d) {
	for (int i = 0; i < n; i++) {
		D[i].Quay(d);
	}
}

void DaGiac::PhongTo_ThuNho(double scale) {
	for (int i = 0; i < n; i++) {
		D[i].PhongTo_ThuNho(scale);
	}
}