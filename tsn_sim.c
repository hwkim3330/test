#include <stdio.h>
#include <time.h>
#include "tsn_sim.h"

void send_tsn_packet(int packet_id) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    printf("[TSN] Packet %d sent at %02d:%02d:%02d\n",
           packet_id, t->tm_hour, t->tm_min, t->tm_sec);
}