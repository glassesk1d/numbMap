#include <iostream>
using namespace std;

int main() {
	int abvary[50][50];
	int abvidx = 0;
	for (int a = 0; a < 50; a++) {
		for (int b = 0; b < 50; b++) {
			abvidx++;
			abvary[a][b] = 1;
			if (abvidx == 302 || abvidx == 352 || abvidx == 307 || abvidx == 1909 || abvidx == 1910) {
				abvary[a][b] = 2;
			}
			if(a )
			cout << abvary[a][b] << " ";
		}
		cout << endl;
	}
	return 0;
}