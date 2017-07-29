/* 
https://projecteuler.net/problem=1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int  summultiples(int limit, int bases[2]);
bool ismultiple(int a, int b);

int main(int argc, char *argv[]) {
	int basesin[2];
	basesin[0] = atoi(argv[1]);
	basesin[1] = atoi(argv[2]);
	int limitin = atoi(argv[3]);
	int sum = 0;
	sum = summultiples(limitin, basesin);
	printf("%d\n", sum);
	return 0;
}

int summultiples(int limit, int bases[2]) {
	int result = 0;

	for (int i = 0; i < limit; i ++) {
		for (int j = 0; j <= 2; j++) {
			bool multiple = ismultiple(i, bases[j]);
			if (multiple) {
				result += i;
				break;
			}
		}
	}
	return result;
}

bool ismultiple(int a, int b) {
	int mod = a%b;
	if (mod == 0 && a/b >= 1) {
		return true;
	} else {
		return false;
	}
}
