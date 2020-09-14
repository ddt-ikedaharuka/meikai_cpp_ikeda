﻿/**
小数部を持つ実数値をxやyにお代入するプログラムを作成せよ。
その実行結果から、int型変数が整数値のみしか扱えないことを確認すること。
作成者：池田
作成日：20209/3
*/

#include <iostream>

using namespace std;

int main()
{
    /* xはint型の変数 */
    int x;

    /* yはint型の変数 */
    int y;

    /* xに63を代入 */
    x = 63;

    /* xに18を代入 */
    y = 18;

    /* xの値をコンソールに出力 */
    cout << "xの値は" << x << "です。\n";

    /* yの値をコンソールに出力 */
    cout << "yの値は" << y << "です。\n";

    /* xとyの合計値をコンソールに出力 */
    cout << "合計は" << x + y  << "です。\n";

    /* xとyの平均値をコンソールに出力 */
    cout << "平均値は" << (x + y)/2 << "です。\n";

}

