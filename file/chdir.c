#include <stdio.h>
#include <unistd.h>
int main(void){
	char buffer[128];
	char *p = NULL;
	p = getcwd(buffer, 128);
	if(p != NULL)
		printf("%s\n", p);
	return 0;
}
