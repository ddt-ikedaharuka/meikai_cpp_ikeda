﻿/**
二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ。
作成者：池田
作成日：9/15
*/
#include <iostream>

int main()
{

	/* 加減乗除する値 */
	int x;

	/* 加減乗除する値 */
	int y;

	/* 整数値の入力を促す */
	std::cout << "整数値:";

	/* 実数値を読み込む */
	std::cin >> x;

	/* 整数値の入力を促す */
	std::cout << "整数値:";

	/* 実数値を読み込む */
	std::cin >> y;

	/* コンソールに値の差を出力する */
	std::cout << "それらの値の差は" << (x > y ? x - y : y - x);

}

