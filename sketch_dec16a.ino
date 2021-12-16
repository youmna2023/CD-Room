float Current;
float Voltage;
float Power;
void setup(){    
pinMode (A4, INPUT);
pinMode (A5, INPUT);
Serial.begin(9600);}
void loop(){ 
Voltage= analogRead (A4)/41.2;   
Current= analogRead (A5)/183.3;
Power=Voltage*Current;
// Voltage
Serial.print ("Voltage=  ");  
Serial.print (Voltage);    
Serial.print (" V");          
Serial.print ("\t");          

// Current 
Serial.print ("Current=  ");  
Serial.print (Current);       
Serial.println (" A");        

//Power
Serial.print ("Power=  ");    
Serial.print (Power);        
Serial.println (" w");         
Serial.print ("\t");          
delay(1000);
}
