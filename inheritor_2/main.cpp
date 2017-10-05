// inheritor.cpp
// sample of single inheritance
// Hal O'Connell, 2017
//

#include <iostream>
#include "animal.h"
#include "cat.h"
#include "fish.h"
#include "human.h"

using namespace std;

int main(int argc, char **argv)
    {
    cout << endl << "First say hello to Kitty..." << endl << endl;

    Cat kitty;
    kitty.kind = "Siamese";
    kitty.heartbeat = 72;
    kitty.aboutMe();
    kitty.aboutMeow();

    cout << endl << "Now let's go fishing..." << endl << endl;

    Fish carp;
    carp.kind = "Koi";
    carp.heartbeat = 120;
    carp.aboutMe();
    carp.aboutSplash();

    cout << endl << "Now let's go People watching..." << endl << endl;

    Human Ted;
    Ted.kind = "Programmer";
    Ted.aboutMe();
    Ted.aboutUs();

    return 0;
    }