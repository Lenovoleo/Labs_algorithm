#include <iostream>

using namespace std;

//Задание 1

/*int main()
{
    setlocale(LC_ALL, "rus");
    int M, N, countNum = 0;
    cout << "Введите размер массива A[M] " << endl;
    cin >> M;
    cout << "Введите размер массива B[N] " << endl;
    cin >> N;
    int A[M], B[N];

    cout << "Введите элементы массива A[M] " << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B[N] " << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    cout << "Массив A[M]: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Массив B[N]: ";
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    int *allElem = new int[M];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                allElem[countNum] = A[i];
                countNum++;
                break;
            }
        }
    }
    for(int i = 0 ; i < countNum; i++){
        for(int j = i+1 ; j < countNum; j++){
            if(allElem[i] == allElem[j]) {
                    for(int k = i; k < countNum-1; k++){
                        allElem[k] = allElem[k + 1];
                    }
             countNum--;

        }
    }
    }
    cout << "Общие элементы массивов A и B: ";
    for (int i = 0; i < countNum; i++) {
        cout << allElem[i] << " ";
    }
    cout << endl;


    return 0;
}*/



// Задание 2
/*
int main()
{
    setlocale(LC_ALL, "rus");
    int M, N, countNum = 0;
    cout << "Введите размер массива A[M] " << endl;
    cin >> M;
    cout << "Введите размер массива B[N] " << endl;
    cin >> N;
    int A[M], B[N];

    cout << "Введите элементы массива A[M] " << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B[N] " << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    cout << "Массив A[M]: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Массив B[N]: ";
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    int *allElem = new int[M];

    for (int i = 0; i < M; i++) {
    bool foundSxoj = false;
    for (int j = 0; j < N; j++) {
        if (A[i] == B[j]) {
            foundSxoj = true;
            break;
        }
    }
    if (!foundSxoj) {
        allElem[countNum] = A[i];
        countNum++;
    }
}
    for(int i = 0 ; i < countNum; i++){
        for(int j = i+1 ; j < countNum; j++){
            if(allElem[i] == allElem[j]) {
                    for(int k = i; k < countNum-1; k++){
                        allElem[k] = allElem[k + 1];
                    }
             countNum--;

        }
    }
    }
    cout << "Элементы массива A, которые не включаются в массив B, без повторений: ";
    for (int i = 0; i < countNum; i++) {
        cout << allElem[i] << " ";
    }
    cout << endl;


    return 0;
}
*/
// Задание 3
/*
int main()
{
    setlocale(LC_ALL, "rus");
    int M, N, countNum = 0;
    cout << "Введите размер массива A[M] " << endl;
    cin >> M;
    cout << "Введите размер массива B[N] " << endl;
    cin >> N;
    int A[M], B[N];

    cout << "Введите элементы массива A[M] " << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B[N] " << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    cout << "Массив A[M]: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Массив B[N]: ";
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    const int dlinaMassiva = 100;
    int *allElem = new int[dlinaMassiva];

      for (int i = 0; i < M; i++) {
        bool foundSxoj = true;
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                foundSxoj = false;
                break;
            }
        }
        if (foundSxoj) {
            allElem[countNum] = A[i];

            countNum++;
        }

    }

    for (int i = 0; i < N; i++) {
        bool foundSxoj = true;
        for (int j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                foundSxoj = false;
                break;
            }
        }
        if (foundSxoj) {
            allElem[countNum] = B[i];
            countNum++;
        }

    }

    for(int i = 0 ; i < countNum; i++){
        for(int j = i+1 ; j < countNum; j++){
            if(allElem[i] == allElem[j]) {
                    for(int k = i; k < countNum-1; k++){
                        allElem[k] = allElem[k + 1];
                    }
             countNum--;

        }
    }
    }
    cout << "Элементы массивов A и B, которые не являются общими для них, без повторений: ";
    for (int i = 0; i < countNum; i++) {
        cout << allElem[i] << " ";
    }
    cout << endl;


    return 0;
}*/
// Задание 4
/*
void dobavFunc(int* allElem,int& sizeOfAllElem, int* dobavElem, int& sizeOfDobavElem){
 for (int i = 0; i < sizeOfDobavElem; i++) {
        allElem[sizeOfAllElem + i] = dobavElem[i];
    }
    sizeOfAllElem += sizeOfDobavElem;
}
int main()
{

setlocale(LC_ALL, "rus");
int dlinaMassiva=0 , dlinaMassivaDobav=0 ;
int* allElem = new int[dlinaMassiva];
int* dobavElem = new int[dlinaMassivaDobav];

cout<<"Введите размерность массива : "<<endl;
cin>>dlinaMassiva;


cout<<"Введите элемент массива : "<<endl;
 for(int i = 0; i<dlinaMassiva; i++){
    cin>>allElem[i];
}
cout<<"Исходный массив : "<<endl;
 for(int i = 0; i<dlinaMassiva; i++){
    cout<<allElem[i]<<" ";
}
cout<<endl;

cout<<"Введите размерность массива чтобы добавить: "<<endl;
cin>>dlinaMassivaDobav;

cout<<"Введите элемент массива : "<<endl;
 for(int i = 0; i<dlinaMassivaDobav; i++){
    cin>>dobavElem[i];
}

cout<<"Добавочный массив : "<<endl;
for(int i = 0; i<dlinaMassivaDobav; i++){
    cout<<dobavElem[i]<<" ";
}
cout<<endl;

    dobavFunc(allElem, dlinaMassiva, dobavElem, dlinaMassivaDobav);

    cout << "Исходный массив после добавления: " << endl;
    for (int i = 0; i < dlinaMassiva; i++) {
        cout << allElem[i] << " ";
    }
    cout << endl;
    delete[] allElem;
    delete[] dobavElem;


}
*/

// Задание 5

void dobavFunc(int* allElem,int& sizeOfAllElem, int* dobavElem, int& sizeOfDobavElem, int indeks){
for (int i = sizeOfAllElem - 1; i >= indeks; i--) {
        allElem[i + sizeOfDobavElem] = allElem[i];
    }
    for (int i = 0; i < sizeOfDobavElem; i++) {
        allElem[indeks + i] = dobavElem[i];
    }
    sizeOfAllElem += sizeOfDobavElem;
}
int main()
{

setlocale(LC_ALL, "rus");
int dlinaMassiva=0 , dlinaMassivaDobav=0, indeks =0 ;
int* allElem = new int[dlinaMassiva];
int* dobavElem = new int[dlinaMassivaDobav];

cout<<"Введите размерность массива : "<<endl;
cin>>dlinaMassiva;


cout<<"Введите элемент массива : "<<endl;
 for(int i = 0; i<dlinaMassiva; i++){
    cin>>allElem[i];
}
cout<<"Исходный массив : "<<endl;
 for(int i = 0; i<dlinaMassiva; i++){
    cout<<allElem[i]<<" ";
}
cout<<endl;

cout<<"Введите размерность массива чтобы добавить: "<<endl;
cin>>dlinaMassivaDobav;

cout<<"Введите элемент массива : "<<endl;
 for(int i = 0; i<dlinaMassivaDobav; i++){
    cin>>dobavElem[i];
}

cout<<"Добавочный массив : "<<endl;
for(int i = 0; i<dlinaMassivaDobav; i++){
    cout<<dobavElem[i]<<" ";
}
cout<<endl;

cout<<"Введите индекс : "<<endl;
cin>>indeks;
 if (indeks > dlinaMassiva || indeks<0) {
        cout << "Ошибка" << endl;
        return 0;
    }
    dobavFunc(allElem, dlinaMassiva, dobavElem, dlinaMassivaDobav, indeks);

    cout << "Исходный массив после добавления: " << endl;
    for (int i = 0; i < dlinaMassiva; i++) {
        cout << allElem[i] << " ";
    }
    cout << endl;
    delete[] allElem;
    delete[] dobavElem;


}








