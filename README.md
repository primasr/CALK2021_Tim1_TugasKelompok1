# CALK2021_Tim1_TugasKelompok1

Kelompok 1 yang beranggotakan:

- Prima Secondary Ramadhan  (05311940000001)
- Achsan Noorsalam (05311840000021)

## Soal 1 smartcity

Abang Zhong sedang bekerja part time di WFP, dia disuru boss nya untuk membuat untuk
membuat rangkaian lampu yang memiliki 3 pola yang di atur dengan 3 tombol yang berbeda.
Komponen yang disediakan boss nya adalah sebagai berikut;

· 3 tombol pushbutton,
· 3 lampu led,
· 2 breadboard,
· 1 Arduino UNO,
· Kabel jumper dan resistor secukupnya.

Rancangan dan pola yang disuruh adalah sebagai berikut:
a. Terdapat 3 Lampu; kiri, tengah, dan kanan.
b. Terdapat 3 tombol.
c. Apabila Tombol 1 ditekan maka lampu kiri kanan dan tengah akan menyala
dan mati secara bersamaan.
d. Apabila tombol 2 ditekan, maka lampu kiri dan kanan akan menyala, lalu mati
dan berganti hanya lampu tengah menyala.
e. Apabila Tombol 3 ditekan maka lampu dari kanan ke kanan ke kiri akan
menyala secara berurutan dan mati dari kiri ke kanan secara berurutan.

Bantulah babang Zhong mengerjakan tugas dari boss nya dengan mebuat rangakaian dan juga
kodingan agar dia tidak di pecat dari WFP! :]


### Cara mengerjaan :

pada kesempatan kali ini kami menggunakan platform tinkercad untuk membuat prototype yang diminta. komponen yang kami gunakan adalah sebagai berikut :

· 3 tombol pushbutton,
· 3 lampu led,
· 1 breadboard,
· 1 Arduino UNO,
· Kabel jumper dan resistor secukupnya.



rangkaian : 

((photo rangkaian))

source code : 
```sh
int button1Value = 0;
int button2Value = 0;
int button3Value = 0;

int button1 = 3;
int button2 = 4;
int button3 = 5;
int red = 2;
int green = 6;
int blue = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop()
{
	button1Value = digitalRead(button1);
  button2Value = digitalRead(button2);
  button3Value = digitalRead(button3);
  
  	if(button1Value != 0)
    {
       digitalWrite(red, HIGH);
      digitalWrite(blue, HIGH);
      digitalWrite(green, HIGH);
      delay(2000);
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
      digitalWrite(green, LOW);
      	delay(2000);
      
      
      
     
     
    }
  	
  if(button2Value != 0)
    {
    digitalWrite(red, HIGH);
      digitalWrite(blue, HIGH);
      delay(2000);
      	digitalWrite(green, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
      	delay(2000);
      	
      	
      
      
    }
  	else
    {
     	 digitalWrite(green, LOW);
     
      
    }
  if(button3Value != 0)
    {
    digitalWrite(red, HIGH);
     delay(1000);
    digitalWrite(green, HIGH);
     delay(1000);
      digitalWrite(blue, HIGH);
      delay(1000);
      
    digitalWrite(blue, LOW);
    delay(1000);
    digitalWrite(green, LOW);
     delay(1000);
      
      	
      	
      
      
    }
  	else
    {
     	digitalWrite(red, LOW);
      	delay(1000);
     
      
    }
  ```
