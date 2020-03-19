//cc ex-garray-1.c `pkg-config --cflags --libs glib-2.0` -o ex-garray-1

#include<glib.h>
int main(int argc, char** argv){
	GArray* ar = g_array_new(FALSE,FALSE, sizeof(char*));
	char* a = "Saurabh", *b = "Kumar", *c = "Singh";
	g_array_append_val(ar,a);
	g_array_append_val(ar,b);
	g_array_append_val(ar,c);
	printf("There are %d items appended in the array\n", ar->len);
	printf("The First Item: '%s'\n", g_array_index(ar,char*, 0));
	printf("The Second Item: '%s'\n", g_array_index(ar, char*, 2));
	g_array_remove_index(ar,1);
	printf("Now there are %d items in array", ar->len);
	g_array_free(ar, FALSE);
	return 0;
}
