//type1 (200140047)
//1.jelaskan bagimana algoritma insertion sort membandingkan serta menukar elemen-elemen 
// jawaban 1: dengan cara membandingkan atau menukar elemen semisalnya elemen kedua sudah di tetapkan sebagai patokan kita mencari urutan terbesar
//  atau terkecil kita bisa membandingkan atau menukar sesuai dengan perintah semisalnya besar kita tukar atau urutkan dari kanan ke kiri 
//2. jelaskan bagimana algoritma selection membandingkan serta menukar elemen-elemen.?
// jawaban 2:membandingkan dan menukar seperti mencari elemen terkecil terlebih dahulu lalu di pisahkan atau di jadikan sebagai elemen pertama 
// lalau mencari elemen yang terkecil berikutnya lalu seterusnya begitu sampai elemen terbesar 
//3. dalam algoritma sortir,bagimana cara untuk mengetahui jumlah langkah yang dilakukan?jelaskan 
// jawaban 3: untuk mengetahui jumlah langkah yang digunakan 
//4.konversi algoritma berikut ini c++:



#include <iostream>
using namespace std;
int winarti[5];                //Deklarasi array winarti dengan ukuran 47
int n;                    //Deklarasi variabel winarti untuk menyimpan banyaknya elemen pada array
void input()
{            //Procedure untuk input
    while (true)
    {        //Looping
        cout << "Masukan banyaknya elemen pada array : ";      //Output ke layar
        cin >> n;             //Input dari pengguna
        if (n <= 5)          //Jika n kurang dari atau sama dengan 20
            break;            //Keluar dari loop
        else
        {                //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 47 elemen.\n";    //Output ke layar
        }
    }
    cout << endl;                                                //Output ke barisan kosong
    cout << "=======================" << endl;                   //Output ke layar
    cout << "Masukan Eleman Array" << endl;                      //Output ke layar
    cout << "=======================" << endl;                   //Output ke layar
    for (int i = 0; i < n; i++)
    {                   //Looping dengan j dimulai dari 0 hingga n-1
        cout << "Data ke -" << (i + 1) << ": ";     //Output ke layar
        
    }
}


void selectionSort
    (int arr[5], // membuat variabel data penyimpanan 
    int arti) { // membuat variabel winarti sebagai penanda 
 
    for (int j = 0; j < arti - 1; j++) { // looping untuk mencari elemen terkecil yang ditemukan 
        int min_index = j;
        for (int i = j + 1; i < arti; i++) {
            if (arr[i] < arr[min_index]) { // update oindex terkecil yang di temukan 
                min_index = i;
            }
        }
        swap(arr[j], arr[min_index]); // temukan elemen terkecil yang di temukan 
    }
}

int main() {
    int arr[] = { 22, 11, 25, 64, 12 }; // perhitungan dalam array
    int n = sizeof(arr) / sizeof(arr[5]); 
    selectionSort(arr, n);
    cout << "Sorted array: \n";     // memanggil fungsi sorted 
    for (int i = 0; i < n; i++) //looping nilai dimuali dari 0 hingga n-1
        cout << winarti[i] << " "; // output kelayar 
    return 0;
}
void display() {                          //Prosedur untuk menampilkan hasil
    cout << endl;                         //Output baris kosong
    cout << "=======================" << endl;      //Output ke layar
    cout << "ELEMEN Array yang telah tersusun" << endl;       //Output ke layar
    cout << "=======================" << endl;      //Output ke layar
    for (int j = 0; j < n; j++)
    {                   //Looping dengan j dimulai dari 0 hingga n-1
        cout << "Data ke -" << j + 1 << ": ";
        cout << winarti[j] << endl;                       //Output ke layar
    }
    cout << endl;                                   //Output baris kosong