#include<glib.h>
int main(){
gchar *s = "Hello, World";
GString* hello_world_string = g_string_new(s);

char* to_print = g_string_free(hello_world_string, FALSE);

g_print("%s\n", to_print);
g_free(to_print);
}
