#include<iostream>
#include"wellcome.h"
#include"xuligame.h"
#include"giaodien.h"
using namespace std;
const int Solansaitoida = 8;
const char DATA_FILE[] = "DanhSachTu.txt";
const char WELLCOME[] ="gioithieu.txt";
int main()
{
    srand(time(0));
    KhoiDau();
   GioiThieu(WELLCOME);

    int diem=0,Solansai=0;
    TaoKhung();
    KetNoi();
    inSoLieu(diem,Solansai);
    Vonglap: do while(Solansai!=Solansaitoida)
    {
    string tubian = Chontu(DATA_FILE);
    string lonxon = randomViTri(tubian);
    inTuRaKhung(lonxon);

    string tudoan=Nhaptu();

    if( Sosanh(tubian,tudoan)==0)
    {
        diem+=10;
    }
    else{
        Solansai+=1;
        goto Vonglap;}
    inSoLieu(diem,Solansai);
    }
    Gameover(diem);
    return 0;
}
