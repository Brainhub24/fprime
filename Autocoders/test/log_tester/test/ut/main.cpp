#include <GTestBase.hpp>
#include "TesterBase.hpp"
#include <Fw/Cfg/Config.hpp>

// Very minimal to test autocoder. Some day they'll be actual unit test code

class ATester : public Log::LogTesterGTestBase {
    public:
#if FW_OBJECT_NAMES == 1
        ATester(void) : Log::LogTesterGTestBase("comp",10) {
#else
        ATester(void) : Log::LogTesterGTestBase(10)  {
#endif
    }

};

int main(int argc, char* argv[]) {

    ATester testBase;

}