#pragma once
#include "TV.h"

    TV::TV()
    {
        channel = 1; // Default channel is 1
        volumeLevel = 1; // Default volume level is 1
        on = false; // By default TV is off
    }

    void TV::turnOn()
    {
        on = true;
    }

    void TV::turnOff()
    {
        on = false;
    }

    void TV::setChannel(int newChannel)
    {
        if (on && newChannel >= 1 && newChannel <= 120)
            channel = newChannel;
    }

    void TV::setVolume(int newVolumeLevel)
    {
        if (on && newVolumeLevel >= 1 && newVolumeLevel <= 7)
            volumeLevel = newVolumeLevel;
    }

    void TV::channelUp()
    {
        if (on && channel < 120)
            channel++;
    }

    void TV::channelDown()
    {
        if (on && channel > 1)
            channel--;
    }

    void TV::volumeUp()
    {
        if (on && volumeLevel < 7)
            volumeLevel++;
    }

    void TV::volumeDown()
    {
        if (on && volumeLevel > 1)
            volumeLevel--;
    }