# Mucit Akademisi — mBlock ile Arduino

Türkçe başlangıç eğitim seti: blokları kur, Arduino Uno’ya yükle, sonucu gözlemle.

Bu depo bir eğitim içeriğidir. Yeni bir IDE ya da değiştirilmiş mBlock uygulaması değildir. Arduino IDE’de metinle yaptığın temel işleri mBlock 5’te bloklarla öğrenmeni amaçlar. Makeblock ile resmî bağlantısı yoktur.

## Başla

1. [Kurulum ve ilk yükleme](rehberler/baslangic.md)
2. [Bloklardan Arduino koduna](rehberler/bloktan-koda.md)
3. Aşağıdaki dersleri sırayla tamamla.

| Ders | Konu | Görsel |
|---|---|---|
| [1. LED yakıp söndürme](ornekler/01-led-yanip-sonme/README.md) | Dijital çıkışı ve zamanlamayı öğren. | [Blok kartı](gorseller/01-led-yanip-sonme.svg) |
| [2. Trafik lambası](ornekler/02-trafik-lambasi/README.md) | Birden fazla çıkışı sırayla kontrol et. | [Blok kartı](gorseller/02-trafik-lambasi.svg) |
| [3. Butonla LED kontrolü](ornekler/03-buton-led/README.md) | Dijital giriş, koşul ve pull-down direncini öğren. | [Blok kartı](gorseller/03-buton-led.svg) |
| [4. Potansiyometre ile parlaklık](ornekler/04-potansiyometre-pwm/README.md) | Analog okuma ile PWM çıkışının aralıklarını eşleştir. | [Blok kartı](gorseller/04-potansiyometre-pwm.svg) |

## Dosyalar nasıl kullanılır?

- Derslerde malzeme listesi, bağlantı tablosu, blok akışı ve alıştırma vardır.
- SVG görselleri tarayıcıda açabilir, büyütebilir ve yazdırabilirsin. Bunlar özgün, temsili öğretim şemalarıdır; gerçek mBlock ekran görüntüleri değildir.
- .ino dosyaları Arduino IDE için karşılaştırma kodlarıdır.
- Bu sürümde açılabilir .mblock proje dosyası yoktur; blokları yönergelerle mBlock’ta kurup kendi projen olarak kaydet.

## Doğrulama durumu

İçerik ve dosya bağlantıları kontrol edilmiştir. Projeler fiziksel Arduino üzerinde ve mBlock uygulamasında çalıştırılarak doğrulanmamıştır. Blok adları kurulu cihaz uzantısına göre değişebilir.

## Kaynaklar

- [Makeblock: mBlock 5 ile cihaz programlama](https://support.makeblock.com/hc/en-us/articles/4410698060695-Program-a-Device-on-mBlock-5)
- [Makeblock: Arduino cihaz uzantısı örneği](https://support.makeblock.com/hc/en-us/articles/15237477323543-Example-Arduino-Device-Add-an-Arduino-Device)
- [Arduino: dijital pinler](https://docs.arduino.cc/learn/microcontrollers/digital-pins/)
- [Arduino: analog giriş](https://docs.arduino.cc/learn/microcontrollers/analog-input/)
- [Arduino: PWM](https://docs.arduino.cc/learn/microcontrollers/analog-output/)

İçerik hazırlanma tarihi: 24 Ekim 2026.
