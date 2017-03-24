#include <stdio.h>
int main(void){
	stdout = freopen("out.data", "w", stdout);
	printf("hello!I'm re stdout\n");
	return 0;
}
