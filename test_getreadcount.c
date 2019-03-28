#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	printf(1, "Read has been called %d times\n", getreadcount());
	exit();
}
