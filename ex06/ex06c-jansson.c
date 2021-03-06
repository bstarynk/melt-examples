/* ex06c-jansson.c, a simple example to test jansson variadic typing,
   in public domain */
#include <stdlib.h>
#include <jansson.h>
#include <string.h>

json_t *valid_pack(int x, int y)
{
  return json_pack("{sisiss}", 
		   "XX", x, 
		   "YY", y,
		   "STR", strdup ("a"));
}
