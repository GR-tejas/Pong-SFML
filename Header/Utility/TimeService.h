#pragma once
#include <chrono>

namespace Utility
{
    class TimeService
    {
    private:
        std::chrono::steady_clock::time_point previous_time;
        float delta_time;
        void UpdateDeltaTime();
        float CalculateDeltaTime();
        void UpdatePreviousTime();

    public:

        void Initialize();
        void Update();
        float GetDeltaTime();
    };
}