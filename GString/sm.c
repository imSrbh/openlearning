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
GString* string = g_string_new(NULL);
g_string_printf(string,"final string is %s",s);
g_print("%s\n",string);

return 0;
}
