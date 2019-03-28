#include "types.h"
#include "readcount.h"

int readcount = 0;
int isInitialized = 0;

void incrementreadcount() {
	//if(isInitialized != 1) {
	//	readcount = 0;
	//	isInitialized = 1;
	//}
	readcount++;
}
