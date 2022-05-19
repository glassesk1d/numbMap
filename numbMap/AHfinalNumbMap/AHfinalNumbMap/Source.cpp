#include <iostream>
using namespace std;


int above() {
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
int middle() {
	int ary[50][50];
	int idx = 0;
	for (int y = 0; y < 50; y++) {
		for (int x = 0; x < 50; x++) {
			idx++;
			ary[y][x] = 0;
			if ((y >= 4 && y <= 7) && (x == 4 || x == 3 || (x >= 6 && x <= 8) || x == 12 || x == 18 || x == 20 || x == 22)) {
				ary[y][x] = 2;
			}
			if (y == 6 && ((x >= 10 && x <= 20) || (x >= 22 && x <= 25))) {
				ary[y][x] = 2;
			}
			if ((y >= 5 && y <= 7) && (x >= 27 && x <= 29)) {
				ary[y][x] = 2;
			}
			if ((y == 4 || y == 8) && (x >= 12 && x <= 14)) {
				ary[y][x] = 2;
			}
			if ((x == 29 || x == 30) && (y >= 9 && y <= 34)) {
				ary[y][x] = 2;
			}
			if (x == 23 && y == 3) {
				ary[y][x] = 2;
			}
			if (x == 25 && (y >= 3 && y <= 6)) {
				ary[y][x] = 2;
			}
			if ((x == 31 || x == 28) && ((y >= 15 && y <= 17) || (y >= 19 && y <= 27) || (y >= 30 && y <= 32))) {
				ary[y][x] = 2;
			}
			if ((x >= 26 && x <= 28) && (y >= 9 && y <= 13)) {
				ary[y][x] = 2;
			}
			if (x == 16 && y == 7) {
				ary[y][x] = 2;
			}
			if ((y == 4) && (x == 19 || x == 21)) {
				ary[y][x] = 2;
			}
			if ((y == 8) && (x >= 22 && x <= 24)) {
				ary[y][x] = 2;
			}
			if ((y == 3) && ((x == 22) || (x >= 25 && x <= 29))) {
				ary[y][x] = 2;
			}
			if ((y == 29) && (x >= 5 && x <= 10)) {
				ary[y][x] = 2;
			}
			if ((y >= 25 && y <= 28) && (x == 6 || x == 10)) {
				ary[y][x] = 2;
			}
			if ((x == 7) && ((y >= 23 && y <= 25) || (y == 29) || (y == 35))) {
				ary[y][x] = 2;
			}
			if ((x == 8) && ((y == 22 || y == 23) || (y >= 32 && y <= 35))) {
				ary[y][x] = 2;
			}
			if ((x == 9) && (y >= 30 && y <= 32)) {
				ary[y][x] = 2;
			}
			if ((x >= 10 && x <= 12) && (y == 22 || y == 33)) {
				ary[y][x] = 2;
			}
			if (x == 13 && ((y >= 24 && y <= 27) || (y >= 32 && y <= 34))) {
				ary[y][x] = 2;
			}
			if (y == 24 && (x >= 11 && x <= 15)) {
				ary[y][x] = 2;
			}
			if (x == 11 && y == 25) {
				ary[y][x] = 2;
			}
			if (x == 33 && (y >= 21 && y <= 24)) {
				ary[y][x] = 2;
			}
			if (x == 12 && y == 23) {
				ary[y][x] = 2;
			}
			if (x == 14 && y == 27) {
				ary[y][x] = 2;
			}
			if (x == 10 && y == 32) {
				ary[y][x] = 2;
			}
			if ((x == 2 || x == 5 || x == 9) && (y == 5 || y == 6)) {
				ary[y][x] = 1;
			}
			if (x == 27 && (y == 3 || y == 31 || y == 32)) {
				ary[y][x] = 1;
			}
			if (x == 28 && (y == 4 || y == 8)) {
				ary[y][x] = 1;
			}
			if (x == 7 && y == 8) {
				ary[y][x] = 1;
			}
			if ((x == 29 || x == 30) && (y == 14 || y == 18 || y == 28)) {
				ary[y][x] = 1;
			}
			if (x == 32 && (y == 22 || y == 23)) {
				ary[y][x] = 1;
			}
			if (x == 6 && y == 35) {
				ary[y][x] = 1;
			}
			if (x == 9 && y == 6) {
				ary[y][x] = 1;
			}
			if (x == 9 && (y == 21 || y == 22)) {
				ary[y][x] = 1;
			}
			cout << ary[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}
int below() {
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

int main() {
	above();
	cout << endl;
	middle();
	cout << endl;
	below();
	cout << endl;
	return 0;
}

