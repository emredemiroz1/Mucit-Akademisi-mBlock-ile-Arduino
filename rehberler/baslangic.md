# Kurulum ve ilk yükleme

## Gerekli araçlar

mBlock 5, Arduino Uno ve veri taşıyan USB kablosu. İlk ders kartın kendi LED’iyle yapılır. Diğer derslerin malzemeleri ilgili sayfada listelenir.

1. mBlock’u [resmî sitesinden](https://mblock.cc/) edin. Bu set mBlock 5 akışını esas alır.
2. Cihazlar bölümünde cihaz ekle; Arduino Uno’yu seç. Varsayılan başka bir cihazın bloklarıyla çalışma.
3. Uno’yu USB ile bağla. Bağlan/Connect üzerinden doğru seri portu seç.
4. Upload/Yükle moduna geç. Cihaz başlangıç bloğunu ve sürekli tekrarla bloğunu ekle.
5. İlk LED dersindeki blokları kur ve Yükle’ye bas.
6. Sonucu gözle. Projeni mBlock’un kaydetme işleviyle sakla; oluşturduğun gerçek proje dosyasını ayrıca depoya ekleyebilirsin.

Web sürümünün bilgisayardaki cihaza bağlanması için Makeblock’un belirttiği mLink yardımcı yazılımı gerekebilir; kurulu sürüme ait resmî yönergeleri izle.

## Canlı ve yükleme modu

Canlı/Live modunda bilgisayarla bağlantı programın yürütülmesi için gereklidir. Upload/Yükle modunda derlenen program karta yazılır; bilgisayardan ayrılınca uygun güç kaynağıyla çalışabilir. Bu set Upload modunu kullanır. Sahne/kukla bloklarının hepsi karta yüklenemez.

## Devre kuralları

Bağlantıları güç kapalıyken kur. Uno’nun 5 V mantık seviyesine uygun parçalar kullan. LED’lerde seri direnç kullan; 5V ile GND’yi doğrudan birleştirme. Harici motor veya yüksek akımlı yükü doğrudan pine bağlama. Bu derslerde motor yoktur.

## Sık karşılaşılan sorunlar

| Belirti | Kontrol |
|---|---|
| Port görünmüyor | Veri kablosu, USB portu ve kartın sürücüsü |
| Yükleme başarısız | Doğru cihaz/port; seri portu kullanan diğer programı kapat |
| LED yanmıyor | Pin numarası, LED yönü, direnç ve ortak GND |
| Buton rastgele çalışıyor | 10 kΩ pull-down ve butonun doğru bacakları |
| PWM çalışmıyor | Harici LED’in D9’a bağlı olması ve 0–255 değeri |

Kaynak: [Makeblock cihaz programlama rehberi](https://support.makeblock.com/hc/en-us/articles/4410698060695-Program-a-Device-on-mBlock-5).
