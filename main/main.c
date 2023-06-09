#include <stdio.h>
#include <stdlib.h>

#include "../lua/lua-5.3.6/src/lua.h"
#include "../lua/lua-5.3.6/src/lualib.h"
#include "../lua/lua-5.3.6/src/lauxlib.h"

int main(void)
{
     lua_State* L = luaL_newstate();
     luaL_openlibs(L);

     int hi = 5;
     printf("Test test test");

     luaL_dostring(L, "print('Hello world from lua!')");

     return 0;
}
