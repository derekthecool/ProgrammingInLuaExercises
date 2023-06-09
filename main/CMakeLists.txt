add_executable(programmingInLua
    # Sources
    main.c)

  target_include_directories(programmingInLua PUBLIC ../lua/src)


  target_link_libraries(programmingInLua lua)
