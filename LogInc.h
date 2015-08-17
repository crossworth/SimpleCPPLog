#ifndef LOGINC_H
#define LOGINC_H
#include "Log.h"

const bool _LOG_WRITE_TO_FILE    = false;
const std::string _LOG_FILE_NAME = "output.log";
const bool _LOG_LOG_TIME         = false;

#ifndef LOG
#define LOG *ME::Log::getInstance(_LOG_WRITE_TO_FILE, _LOG_FILE_NAME, _LOG_LOG_TIME) << __FILE__ << ":" << __LINE__ << " "
#endif

#endif // LOGINC_H

