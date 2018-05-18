#include"giaodien.h"
 void gotoxy(short x, short y)
   {
     HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD pos;
      pos.X=x-1;
     pos.Y=y-1;
    SetConsoleCursorPosition(hCon, pos);
  }
    void TaoKhung()
  {

      for(int i=30;i<43;i++)
      {
          for(int j=5;j<9;j++)
          {
              if(i==30&&j==5)
              {
                  gotoxy(i,j);
                  system("color 9");
                  cout<<char(218);
              }
              else if(i==30&&j==8)
              {
                  gotoxy(i,j);

                  cout<<char(192);
              }
              else if(i==42&&j==8)
              {
                  gotoxy(i,j);

                  cout<<char(217);
              }
              else if(i==42&&j==5)
              {
                  gotoxy(i,j);

                  cout<<char(191);
              }
              else if((i%3)!=0&&(j%3)==2)
              {
                  gotoxy(i,j);

                  cout<<char(196);
              }
              else if((i%3)==0&&(j%3)!=2)
              {
                  gotoxy(i,j);

                  cout<<char(179);
              }
              else if((i%3)==0&&j==5)
              {
                  gotoxy(i,j);

                  cout<<char(194);
              }
              else if((i%3)==0&&j==8)
              {
                  gotoxy(i,j);

                  cout<<char(193);
              }
              else if ((i%3)==1&&j==6)
              {
                  gotoxy(i,j);
                  cout<< char(32);
              }

          }

      }
  }




void KetNoi()
{
    system("color 7");
    gotoxy(10,10);
    cout<<"So lan doan sai cua ban: ";
    gotoxy(10,12);
    cout<<"Diem cua ban: ";
    gotoxy(10,15);
    cout<<"Dap an cua ban: ";

}
void inSoLieu(int& diem,int& solansai)
{
    gotoxy(35,10);
    cout<< solansai;
    gotoxy(26, 12);
    cout<< diem;
    for( int i=30;i<36;i++)
    {
        gotoxy(i,15);
        cout<< char(32);
    }

}
string Nhaptu()
{
  string dapan;
  gotoxy(30,15);
  cin>> dapan;
  return inHoa(dapan);
}
void inTuRaKhung(string& word)
{
    system("color 8");
    const int j=6;
    int a=0,i;
    for (i=31;i<41;i+=3)
    {
        gotoxy(i,j);
        cout<< word[(i%31)-a];
        a+=2;
    }
}
void Gameover(int& diem)
{
    system("cls");
    gotoxy(30,10);
    cout<<" GAME OVER! \n\n\n           Diem cua ban la: "<<diem;
}
