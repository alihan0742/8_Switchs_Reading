int s1 = 2; //30
int s2 = 31;
int s3 = 32;
int s4 = 33;
int s5 = 34;
int s6 = 35;
int s7 = 36;
int s8 = 37;

int s1State;
int s2State;
int s3State;
int s4State;
int s5State;
int s6State;
int s7State;
int s8State;

void setup() 
{

pinMode(s1, INPUT);
pinMode(s2, INPUT);
pinMode(s3, INPUT);
pinMode(s4, INPUT);
pinMode(s5, INPUT);
pinMode(s6, INPUT);
pinMode(s7, INPUT);
pinMode(s8, INPUT);

Serial.begin(115200);

}

void loop()
{
    if(digitalRead(s1)== HIGH)
    {
      s1State = "1";
    }
    else
    {
      s1State = "0";
    }
    if(digitalRead(s2)== HIGH)
    {
      s2State = "1";
    }
    else
    {
      s2State = "0";
    }
    if(digitalRead(s3)== HIGH)
    {
      s3State = "1";
    }
    else
    {
      s3State = "0";
    }
    if(digitalRead(s4)== HIGH)
    {
      s4State = "1";
    }
    else
    {
      s4State = "0";
    }
    if(digitalRead(s5)== HIGH)
    {
      s5State = "1";
    }
    else
    {
      s5State = "0";
    }
    if(digitalRead(s6)== HIGH)
    {
      s6State = "1";
    }
    else
    {
      s6State = "0";
    }
    if(digitalRead(s7)== HIGH)
    {
      s7State = "1";
    }
    else
    {
      s7State = "0";
    }
    if(digitalRead(s8)== HIGH)
    {
      s8State = "1";
    }
    else
    {
      s8State = "0";
    }
    delay(1000);
    char data[512]={s1State,s2State,s3State,s4State,s5State,s6State,s7State,s8State};
    sprintf(data,"%s%s%s%s%s%s%s%s",s1State,s2State,s3State,s4State,s5State,s6State,s7State,s8State);
    Serial.println(data);
             
}
