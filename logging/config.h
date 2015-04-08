#include "log.h"

/* 
	Filename for the log file.
*/
#define LOG_FILE_NAME "log_file_name.log"

/* 
	Maximum log level.

	options are:
		1. DEBUG_LOG_LEVEL 
		2. INFO_LOG_LEVEL
		3. WARN_LOG_LEVEL
		4. ERROR_LOG_LEVEL
		5. WTF_LOG_LEVEL
*/
#define LOG_LEVEL WARN_LOG_LEVEL			


/*Change this values to change output names for chosen log level*/
#define DEBUG_LOG_LEVEL_NAME "Debug"
#define INFO_LOG_LEVEL_NAME "Info"
#define WARN_LOG_LEVEL_NAME "Warn"
#define ERROR_LOG_LEVEL_NAME "Error"
#define WTF_LOG_LEVEL_NAME "Wtf"
#define WTF_LOG_LEVEL_UNKNOWN "?"

