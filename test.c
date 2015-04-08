#include <stdlib.h>
#include <stdio.h>
#include "config.h"

int main() {

	printf("START log test \n");
	printf("Log level: %s\n", GetLogLevelName(LOG_LEVEL));

	Log("Test main", "log msg 1", DEBUG_LOG_LEVEL);

	Log("Test main", "log msg 2", INFO_LOG_LEVEL);

	Log("Test main", "log msg 3", WARN_LOG_LEVEL);

	Log("Test main", "log msg 4", ERROR_LOG_LEVEL);

	Log("Test main", "log msg 5", WTF_LOG_LEVEL);

	printf("END log test \n");
}

