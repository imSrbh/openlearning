#include<glib.h>
#include<gmodule.h>
int main(){
char* val ="This is string ";
GString* s = g_string_new (val);

char* v = "Saurabh Kumar SIngh";
g_string_append (s,v);

char* va = "Rachit ";
g_string_prepend(s,va);
g_string_prepend(s,"Srbh");
char* to_print = g_string_free(s, FALSE);

g_print("%s\n", to_print);
//g_free(to_print);

return 0;
}
