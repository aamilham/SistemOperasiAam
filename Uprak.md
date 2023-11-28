# BAB 8

---

```bash
# echo
Menampilkan satu baris teks.
echo [OPTION] [STRING]
-n : newline
contoh : echo "Hello World"


# hostname
Menampilkan nama host sistem.
hostname [OPTION]
-I: tampilkan alamat IP


# uname
Menampilkan informasi kernel sistem.
uname [OPTION]
-a: all; semua info


# date
Mencetak tanggal dan waktu sistem.
date [+FORMAT]
contoh : date


# cal
Menampilkan kalender.
cal [[MONTH] YEAR]
contoh : cal 6 2012

#who
Menampilkan siapa yang sedang login.
who [OPTION]
-q: quantity; jumlah user yang sedang login
-w: write status untuk pesan (+, -, ?)

```

# BAB 9

---

```bash
# cd
Mengganti direktori (default ke direktori home).
cd [DIR]


# pwd
Mencetak nama direktori saat ini.
pwd

# ls
Menampilkan daftar isi direktori.
ls [OPTION] [FILE]
-a: all; tampilkan semua
-l: long; format panjang
-h: human-readable; format ukuran
-i: inode; cetak nomor inode file


# touch
Meng-update waktu akses dan modifikasi suatu FILE.
touch FILE
Jika FILE belum ada, maka touch akan membuat FILE kosong.


# cp
Menyalin file dan direktori.
cp [OPTION] SOURCE DEST
cp [OPTION] SOURCES... DIR
-r: recursive; salin direktori seisinya
-f: force; tanpa konfirmasi jika overwrite
-i: interactive; konfirmasi sebelum overwrite

#mv
Memindahkan (mengganti nama) file.
mv [OPTION] SOURCE DEST
mv [OPTION] SOURCES... DIR
-f: force; tanpa konfirmasi jika overwrite
-i: interactive; konfirmasi sebelum overwrite


#rm
Menghapus file atau direktori.
rm [OPTION] FILE...
-r: recursive; hapus direktori seisinya
-f: force; tanpa konfirmasi jika error
-i: interactive; konfirmasi sebelum menghapus


#mkdir
Membuat direktori.
mkdir [OPTION] DIR
-p: parent; buat direktori parent jika diperlukan


#rmdir
Menghapus direktori kosong.
rmdir [OPTION] DIR...
-p: parent; hapus beserta direktori parent-nya

#chmod
Mengubah mode permission suatu file.
chmod [OPTION] MODE FILE...
-R: recursive; ubah direktori seisinya


#ln
Membuat link antar-file.
ln [OPTION] TARGET LINK-NAME
-s: symbolic; buat symlink

```

# BAB 10

---

```bash
# locate
Mencari file berdasarkan namanya.
locate [OPTION] 'PATTERN'
-c: count; tampilkan jumlah file yang ditemukan
-i: ignore-case


# find
Mencari file pada sebuah hierarki direktori.
find [PATH] [TEST]...
-name 'PATTERN'
-iname 'PATTERN'
-size [+-]N[kMG]
-atime [+-]N
-mtime [+-]N
-empty
-type [dfl] file 


# wc
Mencetak jumlah baris, kata, dan karakter dari suatu file.
wc [OPTION] [FILE...]
-c: char; cetak jumlah karakter
-l: line; cetak jumlah baris
-w: word; cetak jumlah kata

# cat
Menggabungkan file dan menampilkan isinya ke layar.
cat [FILE]...

# head
Menampilkan bagian awal file (default: 10 baris).
head [OPTION] [FILE]
-c: chars; tampilkan sekian karakter pertama
-n: lines; tampilkan sekian baris pertama

# tail
Menampilkan bagian akhir file (default: 10 baris).
tail [OPTION] [FILE]
-c: chars; tampilkan sekian karakter terakhir
-n: lines; tampilkan sekian baris terakhir


# sort
Mengurutkan baris teks pada file.
sort [OPTION] [FILE]
-n: numeric; urutkan secara numerik
-r: reverse; urutkan terbalik
-k: key; urutkan berdasarkan kolom ke-sekian
-t: karakter pemisah antarkolom

# uniq
Menghilangkan baris teks yang berulang.
uniq [OPTION] [FILE]
-c: count; tampilkan jumlah kemunculan
-i: ignore-case

# cut
Mengambil karakter/kolom tertentu dari tiap baris teks.
cut OPTION [FILE]
-c: char; cetak karakter ke-sekian
-f: field; cetak kolom ke-sekian
-d: delimiter; pemisah antarkolom

# tr
Translasi karakter dari set pertama ke set kedua.
tr [OPTION] SET1 [SET2]
-d: delete; hapus karakter pada SET1
-s: squeeze; hapus karakter yang berulang pada SET1

# grep
Mencetak baris teks yang cocok dengan suatu pola.
grep [OPTION] 'PATTERN' FILE
-c: count; tampilkan jumlah baris
-i: ignore-case
-r: rekursif
-v: invert; kebalikan dari pola yang diberikan
-E: extended regex

# sed
Stream editor, manipulasi baris teks dengan regular expression.
sed [OPTION] 's/SEARCH/REPLACE/' [FILE]
-e: execute; tambahkan perintah untuk dieksekusi
-i: in-place; edit file langsung
-E: extended regex

```

# BAB 11

---

```bash
# ps
Menampilkan cuplikan informasi proses yang sedang berjalan.
ps [OPTION]
-A: all; tampilkan semua proses
-F: full; tampilkan format lengkap
-L: light-weight process; tampilkan info thread


# nice
Menjalankan program dengan prioritas nice[^12-nice] tertentu (default: 10).
nice [-n NICE] COMMAND
[^12-nice]: nilai nice antara -20 (prioritas tinggi) sampai 19 (prioritas rendah)

# renice
Mengubah prioritas proses yang sudah berjalan.
renice [-n] NICE PID

# pidof
Mendapatkan PID dari nama program yang sedang berjalan.
pidof PROGRAM


# kill
Mengirim sinyal ke suatu proses (default: SIGTERM).
kill [-SIG] PID...
-INT
-KILL
-STOP
-CONT

# & 
Untuk menjalankan proses di background, tambahkan tanda & pada akhir perintah.
COMMAND... &


# jobs
Menampilkan daftar job yang sedang aktif.
jobs


# fg
Memindahkan job ke foreground.
fg %JOB


# bg
Memindahkan job ke background.
bg %JOB

```

# Latihan UASP

---

```bash
# pindah ke direktori home anda
cd

# buat satu folder kosong 'test'
mkdir test

# masuk ke direktori 'test'
cd test

# tampilkan path direktori saat ini
pwd

# buat file kosong bernama 'empty.txt'
touch empty.txt
```

---

```bash
# copy file '/etc/timezone' ke direktori ini
cp /etc/timezone

# ubah nama file 'timezone' menjadi 'tz.txt'
mv timezone tz.txt

# list isi direktori ini
ls

# pindah ke direktori parent
mv * ../

# hapus direktori 'test' seisinya
rm -r test
```

---

```bash
# temukan file dengan nama 'fdisk' memakai `locate`
locate 'fdisk'

# temukan file dengan nama 'fdisk' memakai `find`
find /home -name fdisk

# temukan file pada home anda yang ukurannya > 200 MB
find ./ -type f -size +200M

# temukan file pada home anda yang diubah < 3 hari
find ./ -type f -mtime -3

# temukan file pada home anda yang diakses > 30 hari
find ./ -type f -atime +30
```

---

```bash
# tampilkan 5 baris pertama keluaran perintah `last`
last | head -n 5

# tampilkan dua baris terakhir file '/etc/passwd'
tail -2 /etc/passwd

# cari file di '/usr/include' yang memuat kata 'sem_post'
grep -r "sem_post" /usr/include

# tampilkan kolom 1 dan 5 dari file '/etc/passwd'
cut -f 1,5 -d ':' /etc/passwd

# tampilkan isi file '/etc/motd' dalam huruf kapital
cat /etc/motd | tr "[a-z]" "[A-Z]"
```

---

```bash
# jalankan `cat /dev/random > rand.txt` di background
cat /dev/random > rand.txt &

# tampilkan daftar job
jobs

# kirim sinyal STOP ke job tersebut
kill -n 19 $(eval 'jobs -p')

# lanjutkan job tersebut di background
bg 1

# kirim sinyal TERM ke job tersebut
kill -n 15 $(eval 'jobs -p')
```

## Kisi-kisi

```
echo hostname uname date cal who
cd pwd ls touch
cp mv rm mkdir rmdir
chmod ln
locate find wc
cat head tail sort uniq cut tr grep sed
ps nice renice pidof kill
& jobs fg bg
```

# latihan uas 2

```
# pindah ke direktori home anda
cd ~

# buat satu folder kosong 'test'
mkdir test

# masuk ke direktori 'test'
cd test

# tampilkan path direktori saat ini
pwd

# buat file kosong bernama 'empty.txt'
touch empty.txt

# copy file '/etc/timezone' ke direktori ini
cp /etc/timezone .

# ubah nama file 'timezone' menjadi 'tz.txt'
mv timezone tz.txt

# list isi direktori ini
ls -l

# pindah ke direktori parent
cd ..

# hapus direktori 'test' seisinya
rm -r test

# temukan file dengan nama 'fdisk' memakai locate
locate fdisk

# temukan file dengan nama 'fdisk' memakai find
find / -name fdisk 2>/dev/null

# temukan file pada home anda yang ukurannya > 200 MB
find ~ -size +200M

# temukan file pada home anda yang diubah < 3 hari
find ~ -mtime -3

# temukan file pada home anda yang diakses > 30 hari
find ~ -atime +30

# tampilkan 5 baris pertama keluaran perintah last
last | head -n 5

# tampilkan dua baris terakhir file '/etc/passwd'
tail -n 2 /etc/passwd

# cari file di '/usr/include' yang memuat kata 'sem_post'
grep -rl 'sem_post' /usr/include

# tampilkan kolom 1 dan 5 dari file '/etc/passwd'
awk -F: '{ print $1, $5 }' /etc/passwd

# tampilkan isi file '/etc/motd' dalam huruf kapital
cat /etc/motd | tr '[:lower:]' '[:upper:]'

# jalankan cat /dev/random > rand.txt di background
cat /dev/random > rand.txt &

# tampilkan daftar job
jobs

# kirim sinyal STOP ke job tersebut
kill -STOP %1

# lanjutkan job tersebut di background
bg %1

# kirim sinyal TERM ke job tersebut
kill -TERM %1
```
