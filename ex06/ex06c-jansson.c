/* ex06c-jansson.c, a simple example to test jansson variadic typing */
#include <stdlib.h>
#include <jansson.h>

json_t *valid_packpair(int x, int y)
{
  return json_pack("{sisi}", "X", x, "Y", y);
}
