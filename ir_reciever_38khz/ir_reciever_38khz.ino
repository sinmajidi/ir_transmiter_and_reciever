#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  
  if (irrecv.decode(&results)){
//    if(results.value==3772811383)
//     Serial.println("0");
//    if(results.value==3772784863)
//     Serial.println("1");
//    if(results.value==3772817503)
//     Serial.println("2");
//    if(results.value==3772801183)
//     Serial.println("3");
//    if(results.value==3772780783)
//     Serial.println("4");
//    if(results.value==3772813423)
//     Serial.println("5");
//    if(results.value==3772797103)
//     Serial.println("6");
//    if(results.value==3772788943)
//     Serial.println("7");
//    if(results.value==3772821583)
//     Serial.println("8");
//    if(results.value==3772805263)
//     Serial.println("9");
    
     
     Serial.println(results.value);
     
        irrecv.resume();
  }
}
