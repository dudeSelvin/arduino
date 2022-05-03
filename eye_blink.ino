int flag=0;
int t1=0;
int t2=0;
int buzzer=2;
void setup() 
{
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);

}
void loop() 
{
  int x=analogRead(A0);
  //Serial.println(x);
//x is the sensor output
    if(x<400 && flag==0)
  {
    flag=1;
    t1=millis();
  }
  else if(x>400 && flag==1)
  {
    flag=0;
    t2=millis();
    Serial.println(t2-t1);
    if((t2-t1)>1000)
    {
      digitalWrite(buzzer,HIGH);
      Serial.println("Alert2!!!!!!!!!!!!!!!!!");
      delay(2000);
      digitalWrite(buzzer,LOW);
    }
    else; 
  } 
}
