float Current=A4;
float Voltage=A5;
void setup(){    
pinMode (Current, INPUT);
pinMode (Voltage, INPUT);
Serial.begin(9600);}
void loop(){ 
Voltage= analogRead (Voltage)/41.2;   
Current= analogRead (Current)/183.3;
Serial.print ("Voltage=  ");  Serial.print (Voltage);     Serial.print ("\n");           
Serial.print ("Current=  ");  Serial.print (Current);    Serial.print ("\n");            
delay(1000);
}
