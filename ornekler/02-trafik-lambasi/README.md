# 2. Trafik lambası

Birden fazla çıkışı sırayla kontrol et.

![mBlock blok yerleşimi](../../gorseller/02-trafik-lambasi.png)

[Ölçeklenebilir SVG görseli](../../gorseller/02-trafik-lambasi.svg)

## Malzemeler

Arduino Uno, breadboard, kırmızı/sarı/yeşil LED, her LED için ayrı 330 Ω direnç, jumper kablolar.

## Bağlantılar

Devreyi USB bağlantısını çıkardıktan sonra kur.

| Uno pini | Bağlantı |
|---|---|
| D8 | 330 Ω → kırmızı LED anot |
| D9 | 330 Ω → sarı LED anot |
| D10 | 330 Ω → yeşil LED anot |
| GND | Üç LED’in katotları (−) |

## mBlock’ta oluştur

Arduino Uno cihazını seç ve Upload/Yükle moduna geç. Görsel, mBlock’un renkleri, bağlantı çentikleri ve iç içe blok yerleşimi esas alınarak yeniden çizilmiştir; uygulama ekran görüntüsü değildir. Türkçe etiketler kurulu sürüme göre küçük farklılıklar gösterebilir.

Her mavi pin bloğu yalnız bir çıkışı ayarlar. Üç pini tek satırda ayarlayan özel bir blok arama: dokuz ayrı pin bloğu ve üç bekleme bloğu kullan. 12 bloğun tamamını aynı sürekli tekrarla bloğunun içine yerleştir.

Aşağıdaki metin, görselin okunabilir dökümüdür. Yuvarlak parantezler sayı/değer yuvalarını, köşeli parantezler açılır seçimleri, açılı parantezler koşul yuvasını temsil eder; bunları mBlock’a metin olarak yapıştırma.

```text
Arduino başladığında
  sürekli tekrarla
    dijital ayarla pin (8) çıkış [yüksek]
    dijital ayarla pin (9) çıkış [düşük]
    dijital ayarla pin (10) çıkış [düşük]
    (3) saniye bekle
    dijital ayarla pin (8) çıkış [düşük]
    dijital ayarla pin (9) çıkış [düşük]
    dijital ayarla pin (10) çıkış [yüksek]
    (3) saniye bekle
    dijital ayarla pin (8) çıkış [düşük]
    dijital ayarla pin (9) çıkış [yüksek]
    dijital ayarla pin (10) çıkış [düşük]
    (1) saniye bekle
```

Yükle düğmesini kullan.

## Beklenen sonuç

Kırmızı 3 saniye, yeşil 3 saniye, sarı 1 saniye yanar; döngü tekrarlanır.

## Dikkat ve hata ayıklama

Bu, sınıf içi sıralama örneğidir; gerçek yol sinyalizasyonu tasarımı değildir. Her LED’in kendi direnci olmalı.

## Kendin dene

Kırmızı ışığı 5 saniye yap. Her aşamada yalnız bir LED’in yandığını kontrol et.

## Arduino karşılığı

[Arduino IDE ile açılabilir .ino kodu](02-trafik-lambasi.ino). Bu dosya mBlock proje dosyası değildir; algoritmayı metin koduyla karşılaştırmak içindir.
