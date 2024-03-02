# Install script for directory: /home/dylan/canonical/apper/Apper/Animations

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debian")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-cleaning-up.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-cleaning-up.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-downloading.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-downloading.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-installing.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-installing.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-refresh-cache.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-refresh-cache.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-searching.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-searching.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-testing.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-testing.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/animations" TYPE FILE RENAME "pk-waiting.png" FILES "/home/dylan/canonical/apper/Apper/Animations/48-animations-pk-waiting.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/apper/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/apper/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

