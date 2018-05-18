#ifndef GIAODIEN_H_INCLUDED
#define GIAODIEN_H_INCLUDED>
#include <ctime>
#include<windows.h>
#include"xuligame.h"
using namespace std;
void gotoxy(short x, short y);
void TaoKhung();// tao khung de in chu cai. Phien ban nay chi co khung cho tu 4 chu cai
void KetNoi();
void inSoLieu(int& diem,int& solansai);
string Nhaptu();
void inTuRaKhung(string& word);
void Gameover(int& diem);
#endif // GIAODIEN_H_INCLUDED
