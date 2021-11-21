#include <IRremote.h>
const int send_pin = 8;
IRsend irsend(send_pin);

void setup()
{
  Serial.begin(9600);
}

void loop() {
      irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E0F00F, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E048B7, 32);
       delay(2000);
       irsend.sendSAMSUNG(0xE0E040BF, 32);
       delay(2000);
    
     

}
