//乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。
//乌龟每分钟可以前进3米，兔子每分钟前进9米；
//兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟，
//于是，每跑10分钟回头看一下乌龟，
//若发现自己超过乌龟，就在路边休息，每次休息30分钟，
//否则继续跑10分钟；而乌龟非常努力，一直跑，不休息。
//假定乌龟与兔子在同一起点同一时刻开始起跑，请问
//
//T分钟后乌龟和兔子谁跑得快？
//
//输入格式：
//输入在一行中给出比赛时间T（分钟）。
//
//输出格式：
//在一行中输出比赛的结果：
//乌龟赢输出@_@，
//兔子赢输出^_^，
//平局则输出-_-；
//后跟1空格，再输出胜利者跑完的距离。

#include <stdio.h>
int main() {
	int T;
	scanf("%d", &T);

	int a = 0, b = 0, t;
	int isPrime = 1;
	int flag = 1;

	do {
		for (t = 1; t <= 10 && flag == 1; t++) {
			a += 3;
			b += 9;
			if (t == T) { 
				isPrime = 0;
				break;
			}
		}
		for (t = 1; t <= 30 && flag == 0; t++) {
			a += 3;
			if (t == T) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 0) {
			break;
		}
		if (flag == 1)
			T -= 10;
		else
			T -= 30;
		if (a < b) {
			flag = 0;
		} else {
			flag = 1;
		}

	} while (1);
 
	if (a > b) {
		printf("@_@ %d", a);
	} else if (a < b) {
		printf("^_^ %d", b);

	} else {
		printf("-_- %d", b);
	}
	return 0;
}
 