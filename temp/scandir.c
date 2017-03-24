#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
void printdir(char *dir, int depth){
	DIR *dp;
	struct dirent *entry;
	struct stat statbuf;
	if((dp = opendir(dir)) == NULL)
	{
		fprintf(stderr, "open faild:%s\n", dir);
		return ;
	}
	chdir(dir);
	while((entry = readdir(dp)) != NULL)
	{
		lstat(entry->d_name, &statbuf);
		if(S_ISDIR(statbuf.st_mode))
		{
			if(strcmp(".", entry->d_name) == 0 || strcmp("..", entry->d_name) == 0)
			continue;
			printf("%*s%s/\n", depth, "", entry->d_name);
			printdir(entry->d_name, depth+4);
		}
		else
			printf("%*s%s\n", depth, "", entry->d_name);
	}
	chdir("..");
	closedir(dp);
}
int main(int argc, char **argv){
	char buffer[128];
	if(argc == 2)
	{
		strcpy(buffer, argv[1]);
	//	printf("%s\n", buffer);
		printf("Directory scan of:%s\n", buffer);
		printdir(buffer, 0);
	}
	return 0;
}
