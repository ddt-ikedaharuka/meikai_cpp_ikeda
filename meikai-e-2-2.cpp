/**
List2-5の最後のelseを、else if(n == 0)に変更するとどうなるかを検討せよ。
作成者：池田
作成日：9/11
*/
#include <iostream>

int main()
{
	int n;

	std::cout << "整数値：";

	std::cin >> n;

	if (n > 0) {
		std::cout << "その値は正です。\n";

		} else if (n < 0){
			std::cout << "その値は負です。\n";
		} else if (n == 0){
			std::cout << "その値は0です。\n";
		}


}

