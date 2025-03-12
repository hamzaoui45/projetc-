# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Employee_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Employee_autogen.dir\\ParseCache.txt"
  "Employee_autogen"
  )
endif()
