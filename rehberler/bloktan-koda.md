# Bloklardan Arduino koduna

Blok programı da sırayla çalıştırılan talimatlardan oluşur. Aşağıdaki adlar öğretim amaçlıdır; kurulu uzantıdaki etiket farklı olabilir.

| Blok fikri | Arduino karşılığı | Anlamı |
|---|---|---|
| Cihaz başladığında | setup() | Bir kere yapılan hazırlık |
| Sürekli tekrarla | loop() | Tekrarlanan işler |
| Dijital çıkış YÜKSEK/DÜŞÜK | digitalWrite(pin, HIGH/LOW) | Aç/kapat |
| Dijital giriş oku | digitalRead(pin) | 0 veya 1 oku |
| Analog giriş oku | analogRead(A0) | Uno’da 0–1023 oku |
| PWM çıkışını ayarla | analogWrite(9, deger) | Uno’da 0–255 görev oranı |
| 1 saniye bekle | delay(1000) | 1000 milisaniye bekle |
| Eğer/değilse | if/else | Koşula göre karar ver |

Arduino kodunda pinMode giriş/çıkış yönünü ayarlar. mBlock uzantısı kullanılan pin bloklarından gerekli hazırlık kodunu üretebilir; cihazın desteklediği blokları ve varsa kod görünümünü kontrol et. Buradaki .ino dosyaları elle yazılmış eşdeğer örneklerdir, mBlock’tan dışa aktarılmış dosyalar değildir.

## Küçük düşünme alıştırması

LED’i 2 saniye açık, 1 saniye kapalı tutarsan bir tam döngü 3 saniye sürer. Yaklaşık 10 döngü 30 saniyedir. Bekleme blokları sırasında sıradaki iş bekler; butona sürekli tepki gereken programlarda uzun beklemeler tepkiyi geciktirir.
