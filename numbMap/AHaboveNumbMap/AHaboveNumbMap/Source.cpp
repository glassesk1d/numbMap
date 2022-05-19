#include <iostream>
using namespace std;

int main() {
	int abvary[50][50];
	int abvidx = 0;
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			abvidx++;
			abvary[i][j] = 0;
			if ((i >= 4 && i <= 9) && ((j <= 2) || (j >= 4 && j <= 9))) {
					abvary[i][j] = 2;
			}
			if ((j == 5) && ((i >= 20 && i <= 40) || (i >= 15 && i <= 18))) {
				abvary[i][j] = 2;
			}
			if ((j >= 3 && j <= 7) && (i == 11 || i == 12)) {
				abvary[i][j] = 2;
			}
			if ((j == 6 || j == 7) && (i >= 13 && i <= 21)) {
				abvary[i][j] = 2;
			}
			if (((i >= 15 && i <= 18) || (i == 20 || i == 21)) && (j == 8)) {
				abvary[i][j] = 2;
			}
			if ((i >= 37 && i <= 40) && (j >= 7 && j <= 10)) {
				abvary[i][j] = 2;
			}
			if ((j == 5) && (i == 11 || i == 12 || i == 21 || i == 29 || i == 33 || i == 37)) {
				abvary[i][j] = 1;
			}
			if ((j == 3) && (i >= 6 && i <= 7)) {
				abvary[i][j] = 1;
			}
			if ((j == 6) && (i == 10 || i == 14 || i == 19 || i == 35 || i == 38 || i == 39)) {
				abvary[i][j] = 1;
			}
			if ((j == 7) && (i == 10 || i == 14 || i == 19 || i == 6)) {
				abvary[i][j] = 1;
			}
			if ((j == 8) && (i == 11 || i == 12 || i == 41)) {
				abvary[i][j] = 1;
			}
			if ((j == 9) && (i == 21 || i == 22 || i == 41)) {
				abvary[i][j] = 1;
			}
			if ((j == 11) && (i == 38 || i == 39)) {
				abvary[i][j] = 1;
			}
				cout << abvary[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}