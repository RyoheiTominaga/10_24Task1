// 10_24Task1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
/*105は奇数で正の約数を8個持ちます。
それを踏まえ、1以上N以下の奇数のうち、約数（正のみ）をちょうど8個持つ数の個数はいくつか？
※Nは1以上200の入力範囲を前提としてよい
[EasyDivisor]*/
#include <iostream>
using namespace std;
class Divisor {
public:
	Divisor(int few,int range);
	~Divisor();
	int odd();//奇数
	int numbered();//偶数

private:
	int _few;//約数数の指定
	int _range;//範囲
};

Divisor::Divisor(int few, int range) { _few = few, _range = range; }
Divisor::~Divisor() {
	if (_few != NULL && _range != NULL) {
		_few = NULL; _range = NULL;
	}
}

int Divisor::numbered()//偶数
{
	int count = 0;
	int numCount = 0;
	for (int i = 0;i <= _range;i += 2) {
		for (int j = 1;j <= _range;++j) {
			if (i < j)
			{
				break;
			}
			else if (i % j == 0)
			{
				count++;
			}
			
		}
		if (_few == count) {
			numCount++;
		}
		count = 0;
	}
	return numCount;
}
int Divisor::odd()//奇数
{
	int count = 0;
	int numCount = 0;
	for (int i = 1;i <= _range;i += 2) {
		for (int j = 1;j <= _range;++j) {
			if (i < j)
			{
				break;
			}
			else if (i % j == 0)
			{
				count++;
			}

		}
		if (_few == count) {
			numCount++;
		}
		count = 0;
	}
	return numCount;
}
int main()
{
	int few = 0,num=-1,range=0;//指定する約数数,奇数か偶数かを判断するやつ,範囲の最大値

	printf("指定する約数数を教えて下さい\n");
	cin >> few;
	printf("調べる値の最大値を教えてください\n");
	cin >> range;

	while (num != 1 && num != 2) {
		printf("奇数か偶数どちらで調べますか？\n1:奇数\n2:偶数\n");
		cin >> num;
	}
	Divisor divisor(few,range);
	switch (num) {
	case 1:printf("1から%dまでの範囲で約数が%dの数は%d個あります", range, few, divisor.odd());//奇数のやつ
		break;
	case 2:printf("1から%dまでの範囲で約数が%dの数は%d個あります",range,few, divisor.numbered());//偶数のやつ
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
