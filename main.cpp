#include<stdio.h>
#include"Air.h"
#include"refrigerator.h"

int main() {
	electricity* electricity[3];


	for (int i = 0; i < 3; i++) {
		if (i < 1) {
			electricity[i] = new refrigerator;
		}
		else {
			electricity[i] = new Aircontion;
		}
	}


	for (int i = 0; i < 3; i++) {
		electricity[i]->electricAppliances();
	}

	for (int i = 0; i < 3; i++) {
		delete electricity[i];
	}

	return 0;
}