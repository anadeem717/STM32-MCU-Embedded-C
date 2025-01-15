/*
 * main.c
 *
 *  Created on: Jan 10, 2025
 *      Author: arees
 */

#include <stdio.h>
#include <stdint.h>


union Packet {
	uint32_t packetValue;

	struct {
		uint32_t crc : 			2;
		uint32_t status : 		1;
		uint32_t payload : 		12;
		uint32_t bat : 			3;
		uint32_t sensor : 		3;
		uint32_t longAddr : 	8;
		uint32_t shortAddr : 	2;
		uint32_t addrMode : 	1;
	} packetFields;
};

int main() {

	union Packet packet;
	printf("Enter the 32bit packet value:");
	scanf("%X", &packet.packetValue);


    // Print each member of the packet
    printf("\nPacket Information:\n");
    printf("CRC: 0x%X\n", packet.packetFields.crc);
    printf("Status: 0x%X\n", packet.packetFields.status);
    printf("Payload: 0x%X\n", packet.packetFields.payload);
    printf("Battery: 0x%X\n", packet.packetFields.bat);
    printf("Sensor: 0x%X\n", packet.packetFields.sensor);
    printf("Long Address: 0x%X\n", packet.packetFields.longAddr);
    printf("Short Address: 0x%X\n", packet.packetFields.shortAddr);
    printf("Address Mode: 0x%X\n", packet.packetFields.addrMode);



	getchar();
	getchar();

	return 0;
}


