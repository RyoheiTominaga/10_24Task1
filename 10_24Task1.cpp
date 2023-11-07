// 10_24Task1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
/*105は奇数で正の約数を8個持ちます。
それを踏まえ、1以上N以下の奇数のうち、約数（正のみ）をちょうど8個持つ数の個数はいくつか？
※Nは1以上200の入力範囲を前提としてよい
[EasyDivisor]*/
#include <iostream>
#include"Divisor.h"
using namespace std;


//Divisor::Divisor(int few, int range) { _few = few, _range = range; }
//Divisor::~Divisor() {
//	if (_few != NULL && _range != NULL) {
//		_few = NULL; _range = NULL;
//	}
//}



int main()
{
	int few = 0,num=-1,range=0;//指定する約数数,奇数か偶数かを判断するやつ,範囲の最大値

	printf("指定する約数数を教えて下さい\n");
	cin >> few;
	printf("調べる値の最大値を教えてください\n");
	cin >> range;
	

	while (num != 0 && num != 1) {
		printf("奇数か偶数どちらで調べますか？\n0:偶数\n1:奇数\n");
		cin >> num;
	}
	Divisor divisor(few,range,num);
	switch (num) {
	case 1:printf("1から%dまでの範囲で約数が%dの数は%d個あります", range, few, divisor.DivisorsNumbers());//奇数のやつ
		break;
	case 2:printf("1から%dまでの範囲で約数が%dの数は%d個あります",range,few, divisor.DivisorsNumbers());//偶数のやつ
		break;
	}
}
// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
