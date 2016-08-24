set(EXENAME hello_world)

# Sources
include_directories("${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/libraries" "${CMAKE_CURRENT_SOURCE_DIR}")
file(GLOB SOURCE_FILES *.cpp)

# Add defines for exe build
# add_definitions("-DXXX=")

add_executable(${EXENAME} ${SOURCE_FILES})

#Added whole archive due to the "plug-in usage"
set(LIBS "")
target_link_libraries(${EXENAME} ${LIBS})

