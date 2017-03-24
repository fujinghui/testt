#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char buffer[128];
	stdout = freopen("in.data", "w", stdout);
	stdin = freopen("in.data", "r", stdin);
	printf("hello!I'm out.data\n");
	gets(buffer);
	stdout = freopen("out.data", "w", stdout);
	printf("read data:%s\n", buffer);
	//printf("hello world");
	return 0;
}
