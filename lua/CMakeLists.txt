set(lua_source_root "lua-5.3.6/src")

set(lua_library_sources
    ${lua_source_root}/lapi.c
    ${lua_source_root}/lcode.c
    ${lua_source_root}/lctype.c
    ${lua_source_root}/ldebug.c
    ${lua_source_root}/ldo.c
    ${lua_source_root}/ldump.c
    ${lua_source_root}/lfunc.c
    ${lua_source_root}/lgc.c
    ${lua_source_root}/llex.c
    ${lua_source_root}/lmem.c
    ${lua_source_root}/lobject.c
    ${lua_source_root}/lopcodes.c
    ${lua_source_root}/lparser.c
    ${lua_source_root}/lstate.c
    ${lua_source_root}/lstring.c
    ${lua_source_root}/ltable.c
    ${lua_source_root}/ltm.c
    ${lua_source_root}/lundump.c
    ${lua_source_root}/lvm.c
    ${lua_source_root}/lzio.c
    ${lua_source_root}/lauxlib.c
    ${lua_source_root}/lbaselib.c
    ${lua_source_root}/lbitlib.c
    ${lua_source_root}/lcorolib.c
    ${lua_source_root}/ldblib.c
    ${lua_source_root}/liolib.c
    ${lua_source_root}/lmathlib.c
    ${lua_source_root}/loslib.c
    ${lua_source_root}/lstrlib.c
    ${lua_source_root}/ltablib.c
    ${lua_source_root}/lutf8lib.c
    ${lua_source_root}/loadlib.c
    ${lua_source_root}/linit.c
)

# Compile lua as a static library -- (liblua.a)
add_library("lua" STATIC
    ${lua_library_sources}
)

# Compile the lua repl program as well
add_executable(lua_repl
    ${lua_source_root}/lua.c
)
target_link_libraries(lua_repl lua)

# To include lua script files use this command
# configure_file(${CMAKE_CURRENT_SOURCE_DIR}/script.lua
#     ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
