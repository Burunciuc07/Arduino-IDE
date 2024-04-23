

#include <SPI.h>
#include <Ethernet.h>


byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };



void setup() {
  Serial.begin(9600);

  // initialize the Ethernet shield using DHCP:
  Serial.println("Obtaining an IP address using DHCP");
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to obtaining an IP address");

    // check for Ethernet hardware present
    if (Ethernet.hardwareStatus() == EthernetNoHardware)
      Serial.println("Ethernet shield was not found");

    // check for Ethernet cable
    if (Ethernet.linkStatus() == LinkOFF)
      Serial.println("Ethernet cable is not connected.");

    while (true);
  }

  // print out Arduino's IP address, subnet mask, gateway's IP address, and DNS server's IP address
  Serial.print("- Arduino's IP address   : ");
  Serial.println(Ethernet.localIP());

  Serial.print("- Gateway's IP address   : ");
  Serial.println(Ethernet.gatewayIP());

  Serial.print("- Network's subnet mask  : ");
  Serial.println(Ethernet.subnetMask());

  Serial.print("- DNS server's IP address: ");
  Serial.println(Ethernet.dnsServerIP());

 

void loop() {

}


