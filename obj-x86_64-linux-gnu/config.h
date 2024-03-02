#ifndef CONFIG_H
#define CONFIG_H

// Define if you have DebconfKDE libraries and header files.
/* #undef HAVE_DEBCONFKDE */

// Define if your backend have autoremove feature.
#define HAVE_AUTOREMOVE

// Define if AppStream is available.
#define HAVE_APPSTREAM

// Define if Limba is available.
/* #undef HAVE_LIMBA */

// Define if screenshot provider
/* #undef SCREENSHOT_PROVIDER */

// Define the AppStream categories path.
/* #undef AS_CATEGORIES_PATH */

// Define the edit origins command.
#define EDIT_ORIGNS_DESKTOP_NAME "software-properties-qt"

// Define the Apper version.
#define APPER_VERSION "1.0.0"

#endif //CONFIG_H
