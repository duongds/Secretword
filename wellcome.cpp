#include"wellcome.h"

void KhoiDau()
{
   system("color 2");
   cout<< "      WELLCOME TO WORD SHUFFLE \n\n\n\n\n\n     An phim bat ki de tiep tuc";
	getch();
	system("cls");

}
void GioiThieu(const char* TenFile)
{
    ifstream file(TenFile);
    if(file.is_open())
    {string word;
    while (file>>word)
    {
        cout<< word<<" ";
    }
    file.close();
    }
    getch();
	system("cls");
}
