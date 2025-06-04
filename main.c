#include <stdio.h>
#include <windows.h>
#include "tsn_sim.h"

int main() {
    printf("TSN Simulation Start!\n");
    for (int i = 0; i < 5; ++i) {
        send_tsn_packet(i + 1);
        Sleep(1000);
    }
    printf("TSN Simulation End!\n");
    return 0;
}