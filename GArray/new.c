//We'll see a few different ways to create and destroy a GArray.
#include<glib.h>
#define ll g_array_index(a, char*, 1)
#define G_GUINT64_FORMAT "lu"

int main(){
	// g_array_sized_new (gboolean zero_terminated,
    	//                gboolean clear_,
    	//                guint element_size,
    	//                guint reserved_size);
	GArray* a= g_array_sized_new(TRUE, TRUE, sizeof(int), 16);
    	g_print("len:%d\n", a->len);
	g_array_free(a, FALSE);

	 // this creates an empty array, then resizes it to 16 elements
	 a = g_array_new(FALSE, FALSE, sizeof(char));
	 g_array_set_size(a, 16);
	 g_array_free(a, FALSE);

	 a = g_array_new(FALSE, FALSE, sizeof(char));
	 char* x = "Hii"; 
	 char* y =  "Saurabh";
	 char* z = "Singh";
	 //char* x = g_strdup("L");
	 //char* y = g_strdup("H");
	 
	 g_array_append_val(a, x);
	 g_array_append_val(a, y);
	 g_array_append_val(a, z);
	 
	 printf("The first item is '%s'\n", g_array_index(a, char*, 1));
	 g_print("le:%d\n", a->len);
	 //g_array_free(a, TRUE);

return 0;
}














