#include "syscall.h"
main() {
	int i;
	for (i = 0; i < 8; i++) {
		Sleep(100000);
		PrintInt(i);
	}
	return 0;
}