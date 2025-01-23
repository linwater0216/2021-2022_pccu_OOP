#pragma once
class TV
{
public:
    int channel;
    int volumeLevel; // Default volume level is 1
    bool on; // By default TV is off

    TV();

    void turnOn();
    

    void turnOff();
    

    void setChannel(int newChannel);
    

    void setVolume(int newVolumeLevel);
    

    void channelUp();
    

    void channelDown();
    

    void volumeUp();

    void volumeDown();
};