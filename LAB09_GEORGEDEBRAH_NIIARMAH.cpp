#include "LAB09_GEORGEDEBRAH_NIIARMAH.h"

//Nii Armah Nyam Odassey Tettey
//George Debrah


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void populateArray(int array[101][101],int N){

int i, j;

int count;
for(int num =0; num<=N; num++){
    i = rand()%101;
   j = rand()%101;
    if(array[i][j]==0){
        array[i][j]=1;

    }
    else{
        array[i][j]=array[i][j]+1;
    }
}
};

void displayArray(int array[101][101]){
    for(int i = 0;i<101;i++){
        for(int j=0;j<101;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;

    }


}

void searchValidEntries(int XL, int YL, int XH, int YH, int array[101][101]){
    for (int i=XL; i<XH;i++){
        for(int j=YL; j<YH;j++){
            if(array[i][j]!=0){
                cout<<"["<<i<<"-"<<j<<"]"<<"\t"<<array[i][j]<<" " ;
            }
        }
    }
}

int main()
{
    int A[101][101]={0};
    populateArray(A,2000);

    searchValidEntries(80,1,100,10,A);
    searchValidEntries(10,20,40,79,A);
    searchValidEntries(1,90,100,100,A);
    searchValidEntries(40,30,70,60,A);
    searchValidEntries(50,50,70,70,A);
    return 0;
}
