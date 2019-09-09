int MQ2=A1;
int ledpin=2;
int val=0;
void setup()
{
  pinMode(MQ2,INPUT);
  pinMode(ledpin,OUTPUT);//Defining the LED port for the output port
  Serial.begin(9600);//The baud rate is 9600
}
void loop()
{
  val=analogRead(MQ2);//Read the voltage at port A0 and assign it to val
  Serial.println(val);
  if(val>260)
  digitalWrite(ledpin,HIGH);
  else
  digitalWrite(ledpin,LOW);
}
