# CMake generated Testfile for 
# Source directory: /home/dylan/canonical/apper
# Build directory: /home/dylan/canonical/apper/obj-x86_64-linux-gnu
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/dylan/canonical/apper/obj-x86_64-linux-gnu/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;165;add_test;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;183;appstreamtest;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/home/dylan/canonical/apper/CMakeLists.txt;15;include;/home/dylan/canonical/apper/CMakeLists.txt;0;")
subdirs("libapper")
subdirs("Apper")
subdirs("PkSession")
subdirs("apperd")
subdirs("doc")
