// やりたいこと
// テキストファイルから設定を1行分だけ読み込む

// 流れ
// ファイルストリームのヘッダをインクルード
// ストリングのヘッダをインクルード
// ファイルを読み込む
// stringに一行分書き込む
// 使いたい型に変換

// 備考
// このプログラムでは実行ファイルと同じ階層にconfig.txtを用意しないといけない
// 他にもっといいやり方ありそう

// 参考URL
// http://kaworu.jpn.org/cpp/std::stoi
// http://nekko1119.hatenablog.com/entry/2013/08/17/144722


// ファイルストリームのヘッダをインクルード
#include <fstream>
// ストリングのヘッダをインクルード
#include <string>

using namespace std;

int main(){
	// ファイルを読み込む
	ifstream ifs("config.txt");
	string config_string;
	// stringに一行分書き込む
	ifs >> config_string;

	// intに直したいなら
	stoi(config_string);
	// 16進をintに直したいなら
	stoi(config_string, nullptr, 16);
	// C言語の文字配列に直したいなら
	config_string.c_str();

	return 0;
}
