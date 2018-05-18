#include "xuligame.h"
string inHoa(const string& s)
{
     string Tu = s;
    transform(s.begin(), s.end(), Tu.begin(), ::toupper);
    return Tu;
}
string Chontu(const char* fileName)
{
	vector<string> Danhsach;
	fstream file(fileName);
      if (file.is_open()) {
	    string word;
		while (file >> word) {
            Danhsach.push_back(word);
        }
    	file.close();
  	} else cout<<"may tinh hong";
  	if (Danhsach.size() > 0) {
  		int random=0;
  		random = rand() % Danhsach.size();
    	return inHoa(Danhsach[random]);
	} else return "";
}
string randomViTri( string word)
{

    random_shuffle(word.begin(), word.end());
    return inHoa(word);

}
bool Sosanh( string& word1, string& word2 )
{

    if(word1==word2)
        return 0;
    else return 1;
}
