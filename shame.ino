
int buttonCurrent = 0;

int button = D1;
int pwr = D0;
char buttonString[40];


void setup() {

pinMode(button, OUTPUT);
pinMode(pwr, INPUT);

digitalWrite(pwr, HIGH);
 
}


void loop() {
 
 //get the state of the button

 buttonCurrent = digitalRead(button);
 sprintf(buttonString, "%d", buttonCurrent);
 
 //if the button is pressed

 
 if(buttonCurrent == HIGH){
     
     
     //SHAME! *DING DING DING* 
     Spark.publish("shamedingdingding","such_shame");
     delay(1000);
     
     
 }
 else{
     
     //do nothing
    
     
 }
 
}