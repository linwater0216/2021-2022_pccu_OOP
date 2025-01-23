#include <iostream>
#include "TV.h"
using namespace std;

int main()
{
    TV tv1;
    tv1.turnOn();
    tv1.setChannel(30);
    tv1.setVolume(3);

    TV tv2;
    tv2.turnOn();
    tv2.channelUp();
    tv2.channelUp();
    tv2.volumeUp();

    cout << "tv1's channel is " << tv1.channel
        << " and volume level is " << tv1.volumeLevel << endl;
    cout << "tv2's channel is " << tv2.channel
        << " and volume level is " << tv2.volumeLevel << endl;

    return 0;
}