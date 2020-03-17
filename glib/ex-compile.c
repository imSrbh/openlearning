#include<glib.h>
int main(int argc, char** argv){
	Glist* list =NULL;
	list=g_list_append(list, "Hello world!!");
	printf("The first item is '%s'\n", g_list_firt(list)->data);
	return 0;
}

