
#define IN1  8
#define IN2  9
#define IN3  10
#define IN4  11

#define IN5  A0
#define IN6  A1
#define IN7  A2
#define IN8  A3

#define IN9  A4
#define IN10  A5
#define IN11  A6
#define IN12  A7

int paso [4][4] =
{
  {1, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 1},
  {1, 0, 0, 1}
};
int go = 1; 

void setup()
{
  pinMode(13,INPUT);
  pinMode(5,INPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);
  pinMode(IN9, OUTPUT);
  pinMode(IN10, OUTPUT);
  pinMode(IN11, OUTPUT);
  pinMode(IN12, OUTPUT);
}
 
 
 
void loop()
{ 
  while (go == 1){
    
fun();
    if(digitalRead(5)){
        go = 0;
      }
    }
    if(digitalRead(13)){
        go = 1;
      }
}

void fun(){  
  
  for(int j=0; j<1500 ; j++) {
      for (int i = 0; i <4; i++)
      {
          digitalWrite(IN1, paso[i][0]);
          digitalWrite(IN2, paso[i][1]);
          digitalWrite(IN3, paso[i][2]);
          digitalWrite(IN4, paso[i][3]);
          delayMicroseconds(2000);
        }
        }
     for(int j=0; j<170 ; j++) {

     for(int k=0;k<4;k++)   {  
          digitalWrite(IN5, paso[k][3]);
          digitalWrite(IN6, paso[k][2]);
          digitalWrite(IN7, paso[k][1]);
          digitalWrite(IN8, paso[k][0]);
          
          digitalWrite(IN9, paso[k][0]);
          digitalWrite(IN10, paso[k][1]);
          digitalWrite(IN11, paso[k][2]);
          digitalWrite(IN12, paso[k][3]);
          delay(5);
          }}
   for(int j=0; j<1500 ; j++) {
       
      for (int i = 0; i <4; i++)
      {
          digitalWrite(IN1, paso[i][3]);
          digitalWrite(IN2, paso[i][2]);
          digitalWrite(IN3, paso[i][1]);
          digitalWrite(IN4, paso[i][0]);
          delayMicroseconds(2000);
        }}
        
        }
        
        
