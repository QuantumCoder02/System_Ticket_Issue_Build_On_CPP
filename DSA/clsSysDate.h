
#pragma once

#include <iostream>
#include <sstream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <string>


class clsSysDate
{

public:

	static std::string GetSystemDate() {
        // Get current system time
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);

        // Safe conversion to local time (Windows/MSVC)
        std::tm local_tm;
        localtime_s(&local_tm, &now_time); // For MSVC

        // Format date-time as string
        std::ostringstream oss;
        oss << std::put_time(&local_tm, "%Y-%m-%d %H:%M:%S");

        return oss.str();
    }



};


