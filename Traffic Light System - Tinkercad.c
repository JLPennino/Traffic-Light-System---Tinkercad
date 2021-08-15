C
int ledred =3;
int ledyellow =4;
int ledgreen =5;

void setup() {
 pinMode(3, OUTPUT); // set the red LED pin to be an output
 pinMode(4, OUTPUT); // set the yellow LED pin to be an output
 pinMode(5, OUTPUT); // set the green LED pin to be an output
}

void loop() {
 digitalWrite(3, HIGH); // turn on the red LED
 digitalWrite(4, LOW); // turn off the yellow LED
 digitalWrite(5, LOW); // turn off the green LED
 delay(5000); // delay for 5 seconds
 
 
 digitalWrite(3, LOW); // turn off the red LED
 digitalWrite(4, HIGH); // turn on the yellow LED
 digitalWrite(5, LOW); // turn off the green LED
 delay(5000); // delay for 5 seconds
 
 digitalWrite(3, LOW); // turn off the red LED
 digitalWrite(4, LOW); // turn off the yellow LED
 digitalWrite(5, HIGH); // turn on the green LED
 delay(5000); // delay for 5 seconds
 }