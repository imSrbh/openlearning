//Sorting
#include<glib.h>
#include<stdio.h>
#include <gmodule.h>
void prt(GArray* a) {
 int i;
 printf("Array holds: ");
 for (i = 0; i < a->len; i++)
    printf("%d ", g_array_index(a, int, i));
    printf("\n");
}
// int compare_ints(gpointer a, gpointer b) {
//     int* x = (int*)a;
//     int* y = (int*)b;
//     return *x - *y;
// }

int cmpint (gconstpointer a, gconstpointer b)
{
  const gint *_a = a;
  const gint *_b = b;

  return *_a - *_b;
}

int main(int argc, char** argv) {
    GArray* a = g_array_new(FALSE, FALSE, sizeof(int));
    int x[6] = {2,1,6,5,4,3};
    g_array_append_vals(a, &x, 6);
    prt(a);

int k=2;
guint matched_index;
gboolean result = g_array_binary_search(a, &k, cmpint, &matched_index);
    
    g_array_free(a, FALSE);
    return 0;
}