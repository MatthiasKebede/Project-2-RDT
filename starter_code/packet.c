#include <stdlib.h>
#include"packet.h"

static tcp_packet zero_packet = {.hdr={0}};

// create TCP packet with header and space for data of size len
tcp_packet* make_packet(int len)
{
    tcp_packet *pkt;
    pkt = malloc(TCP_HDR_SIZE + len);

    *pkt = zero_packet;
    pkt->hdr.data_size = len;
    return pkt;
}

// returns data size of packet
int get_data_size(tcp_packet *pkt)
{
    return pkt->hdr.data_size;
}

