#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void){
	chmod("test_chmod", S_IRUSR | S_IWUSR | S_IXUSR);
	return 0;
}
