#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Ile liczb pierwszych?" << endl;
    cin >> ile;

    int tab[1000];
    int j=0;

    for (int i=0; i<=ile; i++){
        if((i%1 == 0 )&&(ile%ile==0)){
            tab[j]=i;
            cout << tab[j] << "\t";
            j++;

        }
    }



    return 0;
}
