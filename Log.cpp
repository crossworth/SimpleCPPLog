#include "Log.h"

using namespace ME;

Log::Log(const bool &logToFile, const std::string &fileName, const bool &logTime) : mCoutStream(std::cout) {

    if (logToFile) {
        mOfStream.open(fileName, std::ios_base::app);
        outStream = &mOfStream;
    } else {
        outStream = &mCoutStream;
    }

    *outStream << std::endl;
    *outStream << "------------------------------------------";
    *outStream << std::endl;

    if (logTime) {
        *outStream << getTime();
    }
}

std::string Log::getTime() {
    time_t time            = std::time(0);
    std::string timeString = std::ctime(&time);

    return timeString;
}

