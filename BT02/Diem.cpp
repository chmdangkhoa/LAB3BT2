#include "Diem.h"
#include<iostream>
#include <cmath>
using namespace std;


void Diem::Nhap() {
    cin >> this->dx >> this->dy;
}


void Diem::setdX(float X) {
    this->dx = X;
}

void Diem::setdY(float Y) {
    this->dy = Y;
}

float Diem::getdX() const {
    return this->dx;
}

float Diem::getdY() const{
    return this->dy;
}

void Diem::Xuat() const {
    cout << this->dx << " " << this->dy << endl;
}

void Diem::TinhTien(double X, double Y) {
    this->dx += X;
    this->dy += Y;
}

void Diem::PhongTo_ThuNho(double scale) {
    this->dx *= scale;
    this->dy *= scale;
}


void Diem::Quay(double alpha) { // alpha la goc quay tinh bang do
    double nX = dx * cos(alpha) - dy * sin(alpha);
    double nY = dx * sin(alpha) + dy * cos(alpha);
    this->dx = nX;
    this->dy = nY;
}

double Diem::TinhKhoangCach(Diem A, Diem B) const {
    return sqrt(pow(B.dx - A.dx, 2) + pow(B.dy - A.dy, 2));
}