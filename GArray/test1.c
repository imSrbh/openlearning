#include<glib.h>

int main(int argc, char** argv){
	GArray* ar = g_array_new(FALSE, FALSE, sizeof(char*));
	//char* a = "Hii", *b =  "Saurabh", *c = "Singh";
	char* a;
	char* b, c;
	//GArray* arr = g_array_new(FALSE, FALSE, sizeof(int*));
	//int* x=2, *y=3;
	//g_array_append_val(arr, x);
	//g_array_append_val(ar, y);
        g_print("Now we'll enter element from cmd line:\n");
	scanf("%s", &a);
	scanf("%s", &b);
	scanf("%s", &c);
	g_array_append_val(ar, a);
	g_array_append_val(ar, b);
	g_array_append_val(ar, c);
	int len;
	len=(ar->len);
	g_print("len: %d\n",len);
	g_print("Total no. of items in the array : %d\n", ar->len);


	//g_array_remove_index(ar, 1);
	//g_print("NOW Total no. of items in the array : %d\n", ar->len);
	//printf("INT array Total no. of items in the array : %d\n", arr->len);
	//printf("The first int arr item is '%d'\n", g_array_index(arr, int*, 0));
	//gint loop;
	//for(loop = 0; loop < ar->lebn; loop++)
      	//g_print("%s", ar[loop]);
	
return 0;
}
