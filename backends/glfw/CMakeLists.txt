target_link_libraries(${PROJECT_NAME} PUBLIC  glfw)

target_link_libraries(${PROJECT_NAME} PRIVATE gdi32 opengl32 user32 shell32)
       target_sources(${PROJECT_NAME} PRIVATE window.cpp window_events.cpp window_factory.cpp)