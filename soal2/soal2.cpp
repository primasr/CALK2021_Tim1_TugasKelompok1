#include <bits/stdc++.h>

using namespace std;

void encrypt(string text, int s)
{
    string result;
    int x;
    int huruf;
    float huruf_float;
    float temp;

    for (int i=0;i<text.length();i++)
    {
        result = "";
        x = 1;
        for(int j=0; j < 4; j++){
            if (isupper(text[i])){
                switch(x){
                    case 1:
                        {
                            //result += char(int(text[i]+s-65)%26 +65);
                            huruf = int(text[i]-65);
                            //huruf++;
                                //printf("huruf %d,", huruf);
                            huruf = (huruf+s)%26;
                                //printf("%d\n", huruf);
                            result += ' ';
                            result += char(huruf+65);
                            x++;
                            break;
                        }
                    case 2:
                        {
                            //result += char(int(text[i]-s-65)%26 +65);
                            huruf = int(text[i]-65);
                            //huruf++;
                                //printf("huruf %d,", huruf);
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

                    case 3:
                        {
                            huruf = int(text[i]-65);
                            huruf++;
                                //printf("huruf %d,", huruf);
                            huruf = (huruf*s)%26;
                                //printf("%d\n", huruf);
                            huruf--;
                            result += ' ';
                            result += char(huruf+65);
                            x++;
                            break;
                        }
                    case 4:
                        {
                            huruf = int(text[i]-65);
                            huruf++;
                                //printf("huruf %d,", huruf);
                            temp = (float)huruf;
                            huruf_float = temp/s;
                                //printf("%f,", huruf_float);
                            huruf = (int(ceil(huruf_float))%26);
                                //printf("%d\n", huruf);
                            huruf--;
                            result += ' ';
                            result += char(huruf+65);
                            x = 1;
                            break;
                        }
                }
            }
        }
        //cout << text[i] << "," << i+1 << ": " << result << endl;
        cout << text[i] << ": " << result << endl;
    }
}

int main () {

    string kata = "Rado mendapatkan pesan dari oranG yang tidak dikenal. Ketika ditanya namanya oleh Rado, orang tersebut memberikan inisial namanya yaitu QH. orang terseBut memberi pesan aneH dan isinya berupa tulisan yang tidaK jelas. ORang tersebut telah mengirim Pesan Rado sebanyak 10X dengan isi pesan yang sama. karena Rado Curiga dan penAsaran dengan maksud pesan tersebut, Rado meminta bantuan temannya VEVe untuk mengartikan isi pesan dari QH. sayanGnya, Veve tidak mengerti apa maksud dari pesan itu. Vevepun akhirnya menyerah, Rado menjadi Was-Was karena takutnya pesan dari QH itu ternyata penting. Radopun meminta QH untuk menJelaskan apa maksud dari pesaN itu. QH menjawab “Cobalah untuk melihat lebih dekat apa isi pesan itu”. tanpa Rado sadari pesan dari QH dan cerita yang telah ia sampaikan merupakan Bagian pesan tersebut. ternyata pesan tersebut terletaK pada seluruh kalimat-kalimat barusan :V. coBalah untuk menemukan apa arti Pesan yang dimaksud berdasarkan cerita Rado ini";
    string kapital = "";

    int i = 0;
    while(kata[i] != '\0'){
        if (isupper(kata[i])){
            kapital+=kata[i];
        }
        i++;
    }

    cout << "Ini Kapital nya: " << kapital << endl << endl;

    encrypt(kapital,2);
  
    return 0;
}
