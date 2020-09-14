/**
キーボードから読み込んだ整数値±5の範囲の整数値をランダムに生成して表示するプログラムを生成せよ。
作成者：池田
作成日：9/7
*/
#include<ctime>
#include<cstdlib>
#include <iostream>

int main()
{
    int x;

    std::cout << "整数値:";

    std::cin >> x;

    std::srand(time(NULL));

    std::rand() % (x + 5) + (x - 5);

    std::cout << "その値の±5の乱数を生成しました。それは" << x << "です。\n";
}

