byte byteRead;
char direccion1 [10] ="0ShAn1";

void setup(){
    Serial.begin(9600);
}

void loop(){
   
        
        Serial.write("comando obtenido:\n");
        delay(1000);
        Serial.write(direccion1);
       // Serial.write("0ShaAn1");
    
}