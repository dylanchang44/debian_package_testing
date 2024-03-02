# Install script for directory: /home/dylan/canonical/apper

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/locale")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/ca/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/ca/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/de/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/de/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/es/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/es/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/et/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/et/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/hu/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/hu/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/it/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/it/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/nl/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/nl/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/pt/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/pt_BR/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/pt_BR/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/sv/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/sv/docs/apper/apper.1")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/uk/man1" TYPE FILE FILES "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/po/uk/docs/apper/apper.1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/dylan/canonical/apper/obj-x86_64-linux-gnu/libapper/cmake_install.cmake")
  include("/home/dylan/canonical/apper/obj-x86_64-linux-gnu/Apper/cmake_install.cmake")
  include("/home/dylan/canonical/apper/obj-x86_64-linux-gnu/PkSession/cmake_install.cmake")
  include("/home/dylan/canonical/apper/obj-x86_64-linux-gnu/apperd/cmake_install.cmake")
  include("/home/dylan/canonical/apper/obj-x86_64-linux-gnu/doc/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/dylan/canonical/apper/obj-x86_64-linux-gnu/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
