
/*---------------POSIX VARIABLES -----------------------*/
/* http://linux.die.net/man/3/sysconf                   */
/* The following _POSIX define statements are included in 
LINUX builds from the posix1_lim.h file.  To make the code
useable on non-standard builds, we have created define statements.

LINUX defines _POSIX_HOST_NAME_MAX as 255.  
The following code allows us to use the const on non-standard machines  */
#ifndef HOST_NAME_MAX
  #ifdef _POSIX_HOST_NAME_MAX
    #define HOST_NAME_MAX _POSIX_HOST_NAME_MAX
  #else 
    #define HOST_NAME_MAX 255
  #endif
#endif

/* LINUX defines _POSIX_LOGIN_NAME_MAX as 9.  The 
following code allows us to use the const on non-standard machines  */
#ifndef LOGIN_NAME_MAX
  #ifdef _POSIX_LOGIN_NAME_MAX
    #define LOGIN_NAME_MAX _POSIX_LOGIN_NAME_MAX
  #else
    #define LOGIN_NAME_MAX 9
  #endif
#endif

/* LINUX defines _POSIX_LOGIN_NAME_MAX as 255.  The 
following code allows us to use the const on non-standard machines  */
#ifndef PATH_MAX
  #ifdef _POSIX_PATH_MAX
    #define PATH_MAX _POSIX_PATH_MAX
  #else
    #define PATH_MAX 255
  #endif
#endif
