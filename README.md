# 🚀 RFC 9213 Uyumlu API Gateway Priority Request Scheduler

## 📌 Proje Tanımı
Bu proje, bir API Gateway sistemine gelen isteklerin önceliklerine göre sıralanmasını sağlayan bir Priority Request Scheduler uygulamasıdır.

---

## 🎯 Projenin Amacı
- Priority Queue veri yapısını uygulamak  
- Min-Heap algoritmasını kullanmak  
- Gerçek sistem mantığını simüle etmek  

---

## 🧠 Kullanılan Yapılar
- C Programlama Dili  
- Min-Heap  
- Priority Queue  
- Modüler yapı (.c / .h)  

---

## 📁 Proje Yapısı
main.c  
heap.c / heap.h  
parser.c / parser.h  
scheduler.c / scheduler.h  

---

## ⚙️ Çalışma Mantığı
1. İstekler sisteme eklenir  
2. Priority değeri parse edilir  
3. Heap’e yerleştirilir  
4. En önemli istek önce işlenir  

---

## ▶️ Çalıştırma

```bash
gcc main.c heap.c scheduler.c parser.c -o app
./app
