#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include"wellcome.h"
#include"xuligame.h"
#include"giaodien.h"

const char DATA_FILE[] = "test.txt";
const char WELLCOME [] = "gioithieu.txt";
void wellcometo();
void ketnoigame(string& tudoan,int diem, int doansai);
void gameover(int diem);
#endif // GAME_H_INCLUDED
