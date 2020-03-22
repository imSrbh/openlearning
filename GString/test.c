#include<glib.h>
GString*
g_string_new (const gchar *init)
{
  GString *string;
  if (init == NULL || *init == '\0')
    string = g_string_sized_new (2);
  else 
    {
      gint len;
      len = strlen (init);
      string = g_string_sized_new (len + 2);
      g_string_append_len (string, init, len);
    }
  return string;
}
