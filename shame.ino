
int buttonCurrent = 0;
int pwrCurrent = 1;

int button = D1;
int pwr = A0;


char buttonString[40];
char pwrString[40];

void setup() {

pinMode(button, INPUT_PULLDOWN);
pinMode(pwr, OUTPUT);
digitalWrite(pwr, HIGH);


}


void loop() {
 

 //get the state of the button

 buttonCurrent = digitalRead(button);
 
 //turn it into a string (used for debugging)
 sprintf(buttonString, "%d", buttonCurrent);
 
 pwrCurrent = digitalRead(pwr);
 
 //turn it into a string (used for debugging)
 sprintf(pwrString, "%d", pwrCurrent);
 
 
 
 //if the button is not pressed

 
 if(buttonCurrent == HIGH){
     
     //SHAME! *DING DING DING* 
     Spark.publish("shamedingdingding","such_shame");
     delay(200);
    
     
     
 }
 else{
     
     
     //do nothing
     
 }
 
}