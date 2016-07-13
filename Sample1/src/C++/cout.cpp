
//coutとcin
#include"Cout.h"

void Cout() {

	//名前(文字列)の入れ物
	string name;
	
	cout << "こんにちは。私はコンピュータです。" << endl;
	
	cout << "貴方の名前を入力してください。" << endl;
	
	cin >> name;
	
	cout << name <<"さん。よろしく！"<< endl;
}