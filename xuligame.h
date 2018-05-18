#ifndef XULIGAME_H_INCLUDED
#define XULIGAME_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include<fstream>
#include<conio.h>
#include <vector>
#include <algorithm>
using namespace std;
string Chontu(const char* fileName);// CHon tu trong file.
string inHoa(const string& s);// chuyen tu sang dang in hoa.
string randomViTri( string s);// dao lon vi tri cac chu cai cua tu.
bool Sosanh( string& word1, string& word2 );
#endif // XULIGAME_H_INCLUDED
