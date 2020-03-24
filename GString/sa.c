#include<glib.h>
#include<gmodule.h>
int main(){

char *cat = g_string_free("qwertyuiop", FALSE);
g_print("%s\n", cat);
g_free(cat);

return 0;
}
