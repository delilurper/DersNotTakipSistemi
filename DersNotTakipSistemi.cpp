#include <iostream>
using namespace std;

int main()
{
    int secim;
    int notSayisi = 0;
    int yeniNotSayisi = 0;
    int girilenNot;
    int toplam = 0;
    int enYuksek = 0;
    int enDusuk = 0;

    do {
        cout << "\n--- DERS NOTU TAKÝP UYGULAMASI ---\n";
        cout << "1- Not gir\n";
        cout << "2- Ortalama hesapla\n";
        cout << "3- En yuksek notu goster\n";
        cout << "4- En dusuk notu goster\n";
        cout << "0- Cikis\n";
        cout << "Seciminiz: ";
        cin >> secim;

        switch (secim)
        {

        case 1:
            //  NOT GIRME ISLEMI
            cout << "Kac adet not gireceksiniz: ";
            cin >> yeniNotSayisi;

            for (int i = 1; i <= yeniNotSayisi; i++)
            {
                cout << i << ". notu giriniz: " << endl;
                cin >> girilenNot;

                if (girilenNot < 0 || girilenNot > 100)
                {
                    cout << "Gecersiz not! Tekrar girin.\n";
                    i--;
                    continue;
                }

                if (notSayisi == 0)
                {
                    enYuksek = girilenNot;
                    enDusuk = girilenNot;
                }
                else
                {
                    if (girilenNot > enYuksek)
                        enYuksek = girilenNot;

                    if (girilenNot < enDusuk)
                        enDusuk = girilenNot;
                }

                toplam += girilenNot;
                notSayisi++;
            }
            break;

        case 2:
            //  ORTALAMA HESAPLAMA
            if (notSayisi == 0)
            {
                cout << "Lutfen not giriniz" << endl;
            }
            else
            {
                cout << "Notlarin ortalamasi: " << (double)toplam / notSayisi << endl;
            }
            break;

        case 3:
            //  EN YUKSEK NOT
            if (notSayisi == 0)
            {
                cout << "Lutfen not giriniz" << endl;
            }
            else
            {
                cout << "En yuksek not: " << enYuksek << endl;
            }
            break;

        case 4:
            //  EN DUSUK NOT
            if (notSayisi == 0)
            {
                cout << "Lutfen not giriniz" << endl;
            }
            else
            {
                cout << "En dusuk not: " << enDusuk << endl;
            }
            break;

        case 0:
            cout << "Programdan cikiliyor...\n";
            break;

        default:
            cout << "Gecersiz secim!\n";
        }

    } while (secim != 0);

    return 0;
}
