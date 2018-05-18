#include"game.h"
void wellcometo()
{
    khoidau();
    gioithieu(WELLCOME);
}
void ketnoigame(int diem, int doansai)
{
    string word = chooseWord(DATA_FILE);
    word = randomword(word);
    taokhung();
    inTuRaKhung(word);
    ketnoi();
    string tudoan=nhaptu();
    if( contains(word,tudoan))
    {
        diem+=10;
    }
    else doansai+=1;
    insolieu(diem,doansai);

}
