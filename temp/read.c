#include <stdio.h>
#include <string.h>
#include <stdio.h>
int main(void){
	char buffer[128];
	stdin = freopen("out.data", "r", stdin);
	gets(buffer);
	printf("read data:%s\n", buffer);
	return 0;
}
