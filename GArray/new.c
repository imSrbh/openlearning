//We'll see a few different ways to create and destroy a GArray.
#include<glib.h>
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
	 char* x = g_strdup("hello world Saurabh");
	 char* y = g_strdup("Hii Saurabh Kumar Singh");
	 
	 g_array_append_val(a, x);
	 g_array_append_val(a, x);
	 g_print("le:%d\n", a->len);
	 g_print("The first item is '%s'\n", g_array_index(a, char*, 1));
	 g_array_free(a, TRUE);

return 0;
}
