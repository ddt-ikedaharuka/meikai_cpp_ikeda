﻿/**
二つの実数値を読み込み、その合計と平均を求めて表示するプログラムを作成せよ。
作成者：池田
作成日：9/7
*/

#include <iostream>

int main()
{
    /* 加減乗除する値 */
    double x;

    /* 加減乗除する値 */
    double y;

    /* xの値に入力を促す。 */
    std::cout << "xの値:\n";

    /* xに小数値を読み込む */
    std::cin >> x;

    /* yの値に入力を促す */
    std::cout << "yの値:\n";

    /* yに小数値を読み込む */
    std::cin >> y;

    /* x + yの値を表示 */
    std::cout << "合計は" << x + y << "です。\n";

    /* (x + y)/2の値を表示 */
    std::cout << "平均は" << (x + y) / 2 << "です。\n";

}

