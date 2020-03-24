#include<glib.h>
int main(){
GString *err_str = g_string_new("");
 g_string_printf(err_str, "Could not convert \"%s\" to a number.", str);
}
