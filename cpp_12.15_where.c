#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static_store = 30;
const char * pcg = "String Literal";
int main()
{
	int auto_store = 40;
	char auto_string[] = "Auto char Array";
	int *pi;
	char *pcl;

	pi = (int *)malloc(sizeof(int));
	*pi = 35;
	pcl = (char *)malloc(strlen("Dynamic String") + 1);
	strcpy(pcl, "Dynamic String");

	printf("static store: %d at %p\n", static_store, &static_store);
	printf("  auto store: %d at %p\n", auto_store, &auto_store);
	printf("         *pi: %d at %p\n", *pi, pi);
	printf("              %s at %p\n", pcg, pcg);
	printf("			  %s at %p\n", auto_string, auto_string); // 第二个“auto_string"前面有没有“&"号都能正常显示为automatic data storage的地址
	printf("              %s at %p\n", pcl, pcl);
	printf("              %s at %p\n", "Quoted String", "Quoted String");
	free(pi);
	free(pcl);

	return 0;
}