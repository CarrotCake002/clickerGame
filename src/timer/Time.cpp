/*
** EPITECH PROJECT, 2022
** B-CCP-400-BAR-4-1-theplazza-pol.siles-polo
** File description:
** Time
*/

#include "../../include/timer/Time.hpp"

Time::Time()
{
    counting = false;
    this->chronoStart = std::chrono::system_clock::now();
}

int Time::getElapsedTime() const // returned in ms
{
    auto end = std::chrono::system_clock::now();
    auto timeElapsed = end - this->chronoStart;
    return timeElapsed.count() / 1000000;
}

void Time::resetTimer()
{
    this->chronoStart = std::chrono::system_clock::now();
}

void Time::setCounting(bool count)
{
    this->counting = count;
}

bool Time::isCounting(void) const
{
    return counting;
}

Time::~Time()
{
}