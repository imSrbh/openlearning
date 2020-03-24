#include<glib.h>
#include<gmodule.h>
int main(){


char* val ="This is string ";
GString* s = g_string_new (val);
char *cat = g_string_free(s, FALSE);
g_print("%s\n", cat);
g_free(cat);

return 0;
}
