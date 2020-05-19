// Проект по математике
// дешифратор (2 часть)

int l1, l2, l3, l4, l5, l6;
int k1, k2, k3, k4, k5, k6;
int p1, p2, p3, p4, p5, p6;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  pinMode(1,INPUT); // шифротекст
  pinMode(2,INPUT); 
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);

  pinMode(7,INPUT); // ключ
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  
  pinMode(A2,OUTPUT); // расшифрованное сообщение
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A6,OUTPUT);
  pinMode(A7,OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:

  // считывание закодированного сообщения
  l1 = digitalRead(6);
  l2 = digitalRead(5);
  l3 = digitalRead(4);
  l4 = digitalRead(3);
  l5 = digitalRead(2);
  l6 = digitalRead(1);

  // считывание ключа
  k1 = digitalRead(12);
  k2 = digitalRead(11);
  k3 = digitalRead(10);
  k4 = digitalRead(9);
  k5 = digitalRead(8);
  k6 = digitalRead(7);

  // расшифровка
  p1 = l1+k1;
  p2 = l2+k2;
  p3 = l3+k3;
  p4 = l4+k4;
  p5 = l5+k5;
  p6 = l6+k6;

  p1 = p1%2;
  p2 = p2%2;
  p3 = p3%2;
  p4 = p4%2;
  p5 = p5%2;
  p6 = p6%2;
  
  // запись расшифрованного письма: Записать(номер_выхода;значение)
  digitalWrite(A2,p1);
  digitalWrite(A3,p2);
  digitalWrite(A4,p3);
  digitalWrite(A5,p4);
  digitalWrite(A6,p5);
  digitalWrite(A7,p6);
  
}
