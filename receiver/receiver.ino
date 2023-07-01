/*************************************************************************************************
 *  Created By: Tauseef Ahmad
 *  Created On: 1 July, 2023
 *  
 *  YouTube Video: https://youtu.be/XNE0Qm0NdLg
 *  My Channel: https://www.youtube.com/@AhmadLogs
 ***********************************************************************************************/

#include <SoftwareSerial.h>

#define RX 5
#define TX 4
SoftwareSerial LoRaSerial(RX, TX); // RX, TX

void setup() {
  Serial.begin(115200); // USB Serial
  delay(1000);
  
  LoRaSerial.begin(115200); // LoRa Software Serial 
}

void loop() {
  // Check if data is available on Software Serial
  while (LoRaSerial.available()) {
    String data = LoRaSerial.readString();
    //String response = LoRaSerial.readStringUntil('\n');
    Serial.println(data); // Send data to USB Serial
  }
}
