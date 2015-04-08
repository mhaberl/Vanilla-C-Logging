#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "config.h"

const int LOG_TIME_PART_LENGTH = 20;
const int YES = 1;
const int NO = 0;
 
void getCurrentTime(char* pCurrentTime);
int shouldShowMessage(int pLogLevel);

char* GetLogLevelName(int pLogLevel) {

	if (DEBUG_LOG_LEVEL == pLogLevel) {
		return DEBUG_LOG_LEVEL_NAME;
	} else if (INFO_LOG_LEVEL == pLogLevel) {
		return INFO_LOG_LEVEL_NAME;
	} else if (WARN_LOG_LEVEL == pLogLevel) {
		return WARN_LOG_LEVEL_NAME;
	} else if (ERROR_LOG_LEVEL == pLogLevel) {
		return ERROR_LOG_LEVEL_NAME;
	} else if (WTF_LOG_LEVEL == pLogLevel) {
		return WTF_LOG_LEVEL_NAME;
	} else {
		return WTF_LOG_LEVEL_UNKNOWN;
	}
}

void Log(char* pComponent, char *pMessage, int pLogLevel) {

	if (shouldShowMessage(pLogLevel)) {
		FILE *file = fopen(LOG_FILE_NAME, "a");

		if (file != NULL) {

			char currentTime [LOG_TIME_PART_LENGTH];
			getCurrentTime(currentTime);

			fprintf(file,
					"\n| %s\t| %s\t| %s\t| %s\t", 
					GetLogLevelName(pLogLevel), 
					currentTime, 
					pComponent, 
					pMessage);

			fclose(file);
		}
	}
}

int shouldShowMessage(int pLogLevel) {
	if (pLogLevel >= LOG_LEVEL)
		return YES;
	else 
		return NO;
}

void getCurrentTime(char* pCurrentTime) {

	time_t rawTime;
  	time(&rawTime);
  	struct tm* localTime = localtime(&rawTime);

	strftime(pCurrentTime, LOG_TIME_PART_LENGTH, "%F %T", localTime);
}

