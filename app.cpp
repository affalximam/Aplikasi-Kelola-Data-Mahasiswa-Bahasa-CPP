#include <iostream>

using namespace std;

struct DataMahasiswa{
    int ID;
    string nama;
    string jenisKelamin;
    string nim;
    string prodi;
    string semester;
};

int main() {

    // TOP PROGRAM
        top:

    // DEKLARASI VARIABEL
        int jumlahMahasiswa, jumlahData, menu, pilih, id, edit;
        char reset, quit;

    // SECTION DATA MAHASISWA
        jumlahMahasiswa = 6;
        jumlahData = jumlahMahasiswa + 1;

        DataMahasiswa mahasiswaDetail[jumlahData];

        // Mahasiswa 1
        mahasiswaDetail[1].ID = 1;
        mahasiswaDetail[1].nama = "Beni";
        mahasiswaDetail[1].jenisKelamin = "Laki-Laki";
        mahasiswaDetail[1].nim = "191202204001";
        mahasiswaDetail[1].prodi = "Informatika";
        mahasiswaDetail[1].semester = "2";

        // Mahasiswa 2
        mahasiswaDetail[2].ID = 2;
        mahasiswaDetail[2].nama = "Dayu";
        mahasiswaDetail[2].jenisKelamin = "Perempuan";
        mahasiswaDetail[2].nim = "191202204002";
        mahasiswaDetail[2].prodi = "Informatika";
        mahasiswaDetail[2].semester = "2";

        // Mahasiswa 3
        mahasiswaDetail[3].ID = 3;
        mahasiswaDetail[3].nama = "Edo";
        mahasiswaDetail[3].jenisKelamin = "Laki-Laki";
        mahasiswaDetail[3].nim = "191202204003";
        mahasiswaDetail[3].prodi = "Informatika";
        mahasiswaDetail[3].semester = "2";

        // Mahasiswa 4
        mahasiswaDetail[4].ID = 4;
        mahasiswaDetail[4].nama = "Lani";
        mahasiswaDetail[4].jenisKelamin = "Perempuan";
        mahasiswaDetail[4].nim = "191202204004";
        mahasiswaDetail[4].prodi = "Informatika";
        mahasiswaDetail[4].semester = "2";

        // Mahasiswa 5
        mahasiswaDetail[5].ID = 5;
        mahasiswaDetail[5].nama = "Siti";
        mahasiswaDetail[5].jenisKelamin = "Perempuan";
        mahasiswaDetail[5].nim = "191202204005";
        mahasiswaDetail[5].prodi = "Informatika";
        mahasiswaDetail[5].semester = "2";

        // Mahasiswa 6
        mahasiswaDetail[6].ID = 6;
        mahasiswaDetail[6].nama = "Udin";
        mahasiswaDetail[6].jenisKelamin = "Laki-Laki";
        mahasiswaDetail[6].nim = "191202204006";
        mahasiswaDetail[6].prodi = "Informatika";
        mahasiswaDetail[6].semester = "2";

    // SECTION DATA MENU
        string dataMenu[5];
        dataMenu[1] = "Lihat Data";
        dataMenu[2] = "Edit Data";
        dataMenu[3] = "Reset Data";
        dataMenu[4] = "Exit Program";

    // SECTION DATA EDIT
        string dataEdit[10];
        dataEdit[1] = "Nama";
        dataEdit[2] = "Jenis Kelamin";
        dataEdit[3] = "NIM";
        dataEdit[4] = "Prodi";
        dataEdit[5] = "Semester";

    // SECTION MENU UTAMA
        output:
        system("cls");
        cout << "\n---------------------------------------------------------------------------" << endl;
        cout << "APLIKASI KELOLA DATA MAHASISWA" << endl << endl;
        cout << "source code : " << endl;
        cout << "https://github.com/affalximam/Aplikasi-Kelola-Data-Mahasiswa-Bahasa-C-.git" << endl;
        cout << "---------------------------------------------------------------------------" << endl << endl;

        cout << "MENU UTAMA" << endl;
        for (int i = 1; i <= 4; i++){
            cout << i << ". " << dataMenu[i] << endl;
        }
        
        pilihMenu:
        cout << "Pilih menu (1-4) : ";
        cin >> menu;
        cin.clear();
        cin.ignore();

    // SECTION OUTPUT
        if (menu == 1) {
            tampilData:
            
            cout << "\n     LIHAT DATA MAHASISWA " << endl;
            cout << "     Kembali Ke Menu = 0 " << endl;
            cout << "     Masukan ID Mahasiswa : ";
            cin >> id;

            if (id == 0) {
                goto output;
            }
            else if (id <= jumlahMahasiswa) {
                cout << "\n       -------------------------------------" << endl;
                cout << "       DATA MAHASISWA" << endl;
                cout << "       ID             : " << mahasiswaDetail[id].ID << endl;
                cout << "       Nama           : " << mahasiswaDetail[id].nama << endl;
                cout << "       Jenis Kelamin  : " << mahasiswaDetail[id].jenisKelamin << endl;
                cout << "       NIM            : " << mahasiswaDetail[id].nim << endl;
                cout << "       Prodi          : " << mahasiswaDetail[id].prodi << endl;
                cout << "       Semester       : " << mahasiswaDetail[id].semester << endl;
                cout << "       -------------------------------------" << endl;
                goto tampilData;
            }
            else {
                cout << "\n     Data Tidak Ditemukan !" << endl;
                goto tampilData;
            }
        }

    // SECTION EDIT
        else if (menu == 2) {
            edit:
            cout << "\nKembali Ke Menu = 0 " << endl;
            cout << "Masukan ID untuk diedit : ";
            cin >> id;

            if (id == 0) {
                goto output;
            }
            else if (id <= jumlahMahasiswa) {
                for (int i = 1; i <= 5; i++) {
                    cout << i << ". " << dataEdit[i] << endl;
                }

                dataEdit:
                cout << "\nKembali = 0 " << endl;
                cout << "Pilih data yang ingin diedit (1-5) : ";
                cin >> edit;
                
                    if (edit == 0) {
                        goto output;
                    }
                    else if (edit == 1) {
                        cout << dataEdit[edit] << " : ";
                        std::cin.ignore();
                        getline(cin, mahasiswaDetail[id].nama);
                        goto dataEdit;
                    }
                    else if (edit == 2) {
                        cout << dataEdit[edit] << " : ";
                        std::cin.ignore();
                        getline(cin, mahasiswaDetail[id].jenisKelamin);
                        goto dataEdit;
                    }
                    else if (edit == 3) {
                        cout << dataEdit[edit] << " : ";
                        std::cin.ignore();
                        getline(cin, mahasiswaDetail[id].nim);
                        goto dataEdit;
                    }
                    else if (edit == 4) {
                        cout << dataEdit[edit] << " : ";
                        std::cin.ignore();
                        getline(cin, mahasiswaDetail[id].prodi);
                        goto dataEdit;
                    }
                    else if (edit == 5) {
                        cout << dataEdit[edit] << " : ";
                        std::cin.ignore();
                        getline(cin, mahasiswaDetail[id].semester);
                        goto dataEdit;
                    }
                    else{
                        cout << "Input salah" << endl;
                        goto edit;
                    }
            }
            else{
                cout << "Data Tidak Ditemukan !" << endl;
                goto edit;
            }
        }

    // SECTION RESET DATA
        else if (menu == 3) {
            reset:
            cout << "\nIngin reset data ? (y/t) : ";
            cin >> reset;
            if (reset == 'y') {
                goto top;
            }
            else if (reset == 't') {
                goto output;
            }
            else{
                goto reset;
            }
        }

    // SECTION QUIT
        else if (menu == 4) {
            quit:
            cout << "\nIngin keluar Program ? (y/t) : ";
            cin >> quit;
            if (quit == 'y') {
                cout << "Program Selesai" << endl << endl;
                goto end;
            }
            else if (quit == 't') {
                goto output;
            }
            else{
                goto quit;
            }
        }

    // SECTION MENU ELSE
        else{
            cout << "\nMenu tidak ada !" << endl;
            goto pilihMenu;
        }

    // END PROGRAM
    end:

    system("pause");
    return 0;
}
