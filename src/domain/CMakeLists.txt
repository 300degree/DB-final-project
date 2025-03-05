project( domain )
set (
    SOURCES services/UserServiceImpl.cpp
            entities/User.cpp
)

add_library( domain ${SOURCES} )
target_include_directories(
    domain PRIVATE ${CMAKE_SOURCE_DIR}/include 
                   ${crow_SOURCE_DIR}/include
                   ${nlohmann_json_SOURCE_DIR}/include )
