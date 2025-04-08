#include "DaGiac.h"
#include <iostream>
using namespace std;

int main() {
	DaGiac DG;
	DG.Nhap();
	cout << "Chu Vi: " << DG.ChuVi() << endl;
	cout << "Dien Tich: " << DG.DienTich() << endl;
	cout << "Tinh Tien: " << endl;
	double X, Y; cin >> X >> Y;
	DG.TinhTien(X, Y);
	DG.Xuat();
	cout << "Quay: " << endl;
	double d; cin >> d;
	DG.Quay(d);
	DG.Xuat();
	cout << "Phong To, Thu Nho: " << endl;
	double scale; cin >> scale;
	DG.PhongTo_ThuNho(scale);
	DG.Xuat();
	return 0;
}