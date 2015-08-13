#ifndef LOGINC_H
#define LOGINC_H
#include "Log.h"

const bool _LOG_WRITE_TO_FILE    = false;
const std::string _LOG_FILE_NAME = "output.log";
const bool _LOG_LOG_TIME         = false;

ME::Log LOG(_LOG_WRITE_TO_FILE, _LOG_FILE_NAME, _LOG_LOG_TIME);


#endif // LOGINC_H

