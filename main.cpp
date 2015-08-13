#include "LogInc.h"

int main(int argc, char *argv[]) {


    LOG << ME::Log::LUA_WARNING << "Test log" << std::endl;
    LOG << ME::Log::VERBOSE << 123 << std::endl;
    LOG << ME::Log::CRITICAL << true << std::endl;
    LOG << ME::Log::LUA_VERBOSE << false << std::endl;
    LOG << 100.5f << std::endl;

    return 0;
}
