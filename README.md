# CALK2021_Tim1_TugasKelompok1

Kelompok 1 yang beranggotakan:

- Prima Secondary Ramadhan  	(05311940000001)
- Achsan Noorsalam 		(05311840000021)

# Soal 1 smartcity

Abang Zhong sedang bekerja part time di WFP, dia disuru boss nya untuk membuat untuk
membuat rangkaian lampu yang memiliki 3 pola yang di atur dengan 3 tombol yang berbeda.
Komponen yang disediakan boss nya adalah sebagai berikut;

· 3 tombol pushbutton

· 3 lampu led

· 2 breadboard

· 1 Arduino UNO

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


## Cara mengerjakan Soal 1 :

pada kesempatan kali ini kami menggunakan platform tinkercad untuk membuat prototype yang diminta. komponen yang kami gunakan adalah sebagai berikut :

· 3 tombol pushbutton

· 3 lampu led

· 1 breadboard

· 1 Arduino UNO

· Kabel jumper dan resistor secukupnya.




rangkaian : 

<p>
  <img src="https://user-images.githubusercontent.com/73151849/118480818-ef8f5180-b73c-11eb-9306-c8bbef9d8113.png" width="350">  
</p>

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
//mendeklarasikan input/output dengan pin yang digunakan


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

//menjelaskan mana yang input/output
void loop()
{
  button1Value = digitalRead(button1);
  button2Value = digitalRead(button2);
  button3Value = digitalRead(button3);
  //melaukan set pada nilai tombol
  if(button1Value != 0) //men set keadaan saat nilai pada tombol 1 berubah
  {
    digitalWrite(red, HIGH); //menyalakan lampu
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
    delay(2000); //memberi delay hingga perintah berikutnya 
    digitalWrite(red, LOW); //mematikan lampu
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    delay(2000);
  }

  if(button2Value != 0) //men set keadaan saat nilai pada tombol 2 berubah
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
  
  if(button3Value != 0) //men set keadaan saat nilai pada tombol 3 berubah
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
  
  
}
  ```
  
  ## B. Kendala Soal 1
1. saat ada lebih dari 1 tombol dinyalakan, akan terjadi crash perintah 

## C. Kritik dan Saran Soal 1
1. tidak ada 
  

# Soal 2 Cyber Security

> Rado mendapatkan pesan dari oranG yang tidak dikenal. Ketika ditanya namanya oleh Rado, orang tersebut memberikan inisial namanya yaitu QH. orang terseBut memberi pesan aneH dan isinya berupa tulisan yang tidaK jelas. ORang tersebut telah mengirim Pesan Rado sebanyak 10X dengan isi pesan yang sama. karena Rado Curiga dan penAsaran dengan maksud pesan tersebut, Rado meminta bantuan temannya VEVe untuk mengartikan isi pesan dari QH. sayanGnya, Veve tidak mengerti apa maksud dari pesan itu. 

> Vevepun akhirnya menyerah, Rado menjadi Was-Was karena takutnya pesan dari QH itu ternyata penting. Radopun meminta QH untuk menJelaskan apa maksud dari pesaN itu. QH menjawab “Cobalah untuk melihat lebih dekat apa isi pesan itu”. tanpa Rado sadari pesan dari QH dan cerita yang telah ia sampaikan merupakan Bagian pesan tersebut. ternyata pesan tersebut terletaK pada seluruh kalimat-kalimat barusan :V. coBalah untuk menemukan apa arti Pesan yang dimaksud berdasarkan cerita Rado ini.

> nb: pesan tersebut telah dienkripsi dan terdiri atas huruf kapital, namun tidak semua huruf kapital yang ada pada 2 paragraf diatas merupakan bagian dari pesan yang dienkripsi

> Hint : +2, -2, x2, /2(bagi)

## A. Cara Menyelesaikan Soal 2
### 1. Mencari Seluruh Huruf Kapital
Hal yang pertama kita coba adalah mencari seluruh huruf kapital pada kedua pargraf yang diberikan
Untuk pencarian, kami menggunakan algoritma dibawah ini
```sh
    int i = 0;
    while(kata[i] != '\0'){
        if (isupper(kata[i])){
            kapital+=kata[i];
        }
        i++;
    }
```
Dimana dia akan melakukan iterasi dari huruf pertama hingga huruf akhir untuk mencari mana yang huruf kapital. Jika huruf tersebut huruf kapital, maka huruf tersebut akan dipindahkan sebuah variabel string yang bernama `kapital`. 

Setelah program di Run, memunculkan kumpulan huruf kapital sebagai berikut:
```sh
RGKRQHBHKORPRXRCARVEVQHGVVRWWQHRQHJNQHCRQHBKVBPR
```
### 2. Menerapkan Lima Pola pada Semua Huruf
Pada soal terdapat sebuah hint, yaitu:
> Hint : +2, -2, x2, /2(bagi)

dengan menggunakan hint ini, kita akan melakukan lima pola (yang pembagian ada pembulatan keatas dan kebawah) geser/shift sebesar 2

Algoritma inti yang kami gunakan adalah
- Identifikasi huruf inputan itu huruf keberapa 
- Lakukan operasi pada huruf inputan (plus,minus,etc)
- Tambah sebesar 1 pada int hurufnya (karena kita ingin A disini adalah huruf ke 1)
- Append atau tambahkan huruf tadi diselingi dengan +65 agar membentuk huruf kapital

Berikut merupakan Pola 1 ( tambah(+) )
```sh
    case 1:
        {                            
            huruf = int(text[i]-65);                                                            
            huruf = (huruf+s)%26;                                
            result += ' ';
            result += char(huruf+65);
            x++;
            break;
        }
```
Berikut merupakan Pola 2 ( kurang(-) )
Khusus pengurangan, jika dia kurang dari 65, maka kita beri if-case agar dia kembali ke huruf ke paling belakang (z) 
```sh
    case 2:
        {                            
            huruf = int(text[i]-65);                            
            int temp2 = huruf-s;
            if (temp2 > 0){
                huruf = (temp2)%26;
            } else {
                huruf = (26+temp2)%26;
            }
            result += ' ';
            result += char(huruf+65);
            x++;
            break;
        }
```
Berikut merupakan Pola 3 ( kali(*) )
```sh
    case 3:
        {
            huruf = int(text[i]-65);
            huruf++;                                
            huruf = (huruf*s)%26;                                
            huruf--;
            result += ' ';
            result += char(huruf+65);
            x++;
            break;
        }
```
Berikut merupakan Pola 4 ( bagi(/) -> pembulatan ke atas )
```sh
    case 4:
        {
            huruf = int(text[i]-65);
            huruf++;                                
            temp = (float)huruf;
            huruf_float = temp/s;                                
            huruf = (int(ceil(huruf_float))%26);                                
            huruf--;
            result += ' ';
            result += char(huruf+65);
            x++;
            break;
        }
```
Berikut merupakan Pola 5 ( bagi(/) -> pembulatan ke bawah )
```sh
    case 5:
        {
            huruf = int(text[i]-65);
            temp = (float)huruf;
            huruf_float = temp/s;
            huruf = (int(floor(huruf_float))%26);                                
            huruf--;
            result += ' ';
            if (huruf < 0){
                huruf = 26+huruf;
            }
            result += char(huruf+65);
            x = 1;
            break;
        }
```

Dengan program diatas, jika di-run, akan menghasilkan output sebagai berikut
<p>
  <img src="https://user-images.githubusercontent.com/73151849/118488263-c45d3000-b745-11eb-9363-876fafaa4079.png" width="350">  
</p>
<p>
  <img src="https://user-images.githubusercontent.com/73151849/118488257-c32c0300-b745-11eb-9465-838a767378fd.png" width="350">  
</p>

Jika diambil beberapa bagian adalah sebagai berikut
| Huruf Awal | +2 | -2 | *2 | /2 | /2 | 
| ------ | ------ | ------ | ------ | ------ | ------ |
| R | T | P | J | I | H |
| G | I | E | N | D | C |
| K | M | I | V | F | E |
| R | T | P | J | I | H |
| Q | S | O | H | I | H |
| ... | ....| ... | ....| ... | ... |
| ... | ....| ... | ....| ... | ... |
| B | D | Z | D | A | Z |
| P | R | N | F | H | G |
| R | T | P | J | I | H |
### 3. Analisis Hasil
Dengan hasil yang didapatkan diatas, kami masih belum bisa memutuskan apa kalimat yang disembunyikan oleh pembuat soal.
Karena dibaca seperti apapun masih belum terbaca dengan jelas apa yang diinginkan oleh pembuat soal
Karena sangat tidak mungkin untuk membaca manual dari baris ke kolom atau sebagainya, karena masih banyak kemungkinan untuk cara membacanya

Akhir kata, `jawaban masih belum bisa ditemukan`

## B. Kendala Soal 2
1. Clue atau hint soal terlalu bias/ambigu. Sehingga sangat menyulitkan problem solver
2. Sudah mengerjakan sesuai hint tambahan yang diberikan, tapi masih belum bisa menyelesaikan 
3. Problem solver terlalu mem-brute froce soal yang diberikan

## C. Kritik dan Saran Soal 2
1. Pembuatan soal seharusnya bisa memberikan hint yang cukup jelas bagi problem solver
2. Sebelum soal di deploy, mungkin bisa di coba coba lagi. Apakah mungkin dikerjakan dengan hint seadanya itu, apakah sudah siap di deploy, dan berbagai lain halnya
