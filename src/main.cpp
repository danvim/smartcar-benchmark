#include <cstring>
#include <libbase/k60/mcg.h>
#include <cstdlib>
#include <libsc/system.h>
namespace libbase
{
    namespace k60
    {

        Mcg::Config Mcg::GetMcgConfig()
        {
            Mcg::Config config;
            config.external_oscillator_khz = 50000;
            config.core_clock_khz = 150000;
            return config;
        }

    }
}

using namespace libsc;
using namespace libbase::k60;

#include "benchmark/benchmark.h"

int main()
{
    System::Init();

    Benchmark benchmark1([](){

    });

    benchmark1.test(10000);

    return 0;
}
