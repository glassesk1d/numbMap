#include <iostream>
using namespace std;

int main() {
	int bloary[50][50];
	int bloidx = 0;
	for (int b = 0; b < 50; b++) {
		for (int a = 0; a < 50; a++) {
			bloidx++;
			bloary[b][a] = 0;
			if ((a >= 29 && a <= 31) && (b >= 14 && b <= 16)) {
				bloary[b][a] = 2;
			}
			if ((a >= 30 && a <= 35) && (b == 9 || b == 10)) {
				bloary[b][a] = 2;
			}
			if ((b == 17 || b == 18) && (a == 27 || a == 31 || a == 38)) {
				bloary[b][a] = 2;
			}
			if ((a == 28 || a == 37) && b == 7) {
				bloary[b][a] = 2;
			}
			if (b == 8 && ((a >= 27 && a <= 30) || (a >= 37 && a <= 41))) {
				bloary[b][a] = 2;
			}
			if ((a >= 28 && a <= 37) && b == 6) {
				bloary[b][a] = 2;
			}
			if ((a >= 36 && a <= 40) && b == 10) {
				bloary[b][a] = 2;
			}
			if ((a >= 36 && a <= 40) && b == 10) {
				bloary[b][a] = 2;
			}
			if ((a >= 27 && a <= 40) && b == 27) {
				bloary[b][a] = 2;
			}
			if ((a >= 30 && a <= 36) && b == 25) {
				bloary[b][a] = 2;
			}
			if ((a >= 28 && a <= 33) && b == 23) {
				bloary[b][a] = 2;
			}
			if (b == 21 && (a == 32 || a == 33 || a == 39)) {
				bloary[b][a] = 2;
			}
			if ((a >= 33 && a <= 38) && (b == 19 || b == 22)) {
				bloary[b][a] = 2;
			}
			if ((a == 40 || a == 41) && (b == 9 || b == 22)) {
				bloary[b][a] = 2;
			}
			if (a == 30 && (b >= 11 && b <= 13)) {
				bloary[b][a] = 2;
			}
			if (a == 33 && (b >= 21 && b <= 27)) {
				bloary[b][a] = 2;
			}
			if ((a == 27 || a == 28) && b == 16) {
				bloary[b][a] = 2;
			}
			if (b == 20 && (a == 38 || a == 39)) {
				bloary[b][a] = 2;
			}
			if (a == 32 && b == 5) {
				bloary[b][a] = 2;
			}
			if (a == 32 && b == 4) {
				bloary[b][a] = 1;
			}
			if (a == 26 && b == 27) {
				bloary[b][a] = 1;
			}
			if ((a >= 22 && a <= 25) && (b >= 25 && b <= 28)) {
				bloary[b][a] = 2;
			}
			if ((a == 23 || a == 24 || a == 26) && (b >= 30 && b <= 33)) {
				bloary[b][a] = 2;
			}
			if ((b == 31 || b == 32) && (a == 27 || a == 25 || a == 22)) {
				bloary[b][a] = 1;
			}
			if ((a == 23 || a == 24) && (b == 24 || b == 29)) {
				bloary[b][a] = 1;
			}
			cout << bloary[b][a] << " ";
		}
		cout << endl;
	}
	return 0;
}