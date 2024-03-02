# Install script for directory: /home/dylan/canonical/apper/Apper/Icons

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/22x22/actions" TYPE FILE RENAME "package-wait.png" FILES "/home/dylan/canonical/apper/Apper/Icons/22-actions-package-wait.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "distro-upgrade.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-distro-upgrade.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "kpk-important.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-kpk-important.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "kpk-package-add.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-kpk-package-add.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-clean-up.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-clean-up.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-download.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-download.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-info.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-info.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-installed.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-installed.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-orign.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-orign.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-removed.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-removed.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-rollback.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-rollback.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-update.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-update.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-wait.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-wait.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package-working.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package-working.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "package.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-package.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "refresh-cache.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-refresh-cache.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/actions" TYPE FILE RENAME "search-package.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-actions-search-package.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/categories" TYPE FILE RENAME "kpk-desktop-gnome.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-categories-kpk-desktop-gnome.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Apper" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/apper/icons/hicolor/48x48/categories" TYPE FILE RENAME "kpk-desktop-xfce.png" FILES "/home/dylan/canonical/apper/Apper/Icons/48-categories-kpk-desktop-xfce.png")
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

