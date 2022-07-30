/*
** EPITECH PROJECT, 2022
** B-CCP-400-BAR-4-1-theplazza-pol.siles-polo
** File description:
** Time
*/

#ifndef TIME_HPP_
#define TIME_HPP_

#include "../common/includes.hpp"
#include <chrono>

class Time {
    public:
        Time();
        ~Time();

        int getElapsedTime() const;
        void resetTimer();

        bool isCounting(void) const;
        void setCounting(bool count);

    protected:
    private:
        bool counting;
        std::chrono::system_clock::time_point chronoStart;
};

#endif /* !TIME_HPP_ */