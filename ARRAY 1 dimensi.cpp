#include <iostream>

using namespace std;

int main(){
    cout<< "Nama: Ramadhani Maulidia Hilma"<<endl;
    cout<< "NIM : 22343028"<<endl;

        int A[10]={2,5,9,12,20,24,27,31,45,99};
        int temukan;

        for (int i=0;i<10;i++){
            cout << "data ke-"<<i<<" = "<<A[i] <<endl;
        }
        cout <<"masukkan data yang dicari: ";
        cin>> temukan;

        for (int j=0;j<10;j++){
            if (A[j]==temukan){
                cout <<"nilai yang dicari pada indeks ke- "<<j<<endl;
           } else {
               cout<< "data yang dicari tidak ditemukan"<<endl;
           }
        }
        return 0;
}
