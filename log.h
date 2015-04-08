#define DEBUG_LOG_LEVEL 1
#define INFO_LOG_LEVEL 2
#define WARN_LOG_LEVEL 3
#define ERROR_LOG_LEVEL 4
#define WTF_LOG_LEVEL 5

void Log (char* pComponent, char *pMessage, int pLogLevel);

char* GetLogLevelName(int pLogLevel);
