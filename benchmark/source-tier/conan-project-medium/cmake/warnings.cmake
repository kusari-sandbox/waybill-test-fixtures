# Warning-elevation profile.
if(MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wshadow -Wconversion)
endif()
