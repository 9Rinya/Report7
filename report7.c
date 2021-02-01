#include <stdio.h>


void Sort(int scores[], int SIZE){   //配列並び替え関数
    int i,j,tmp;
    
    for (i=0; i<SIZE; i++){
        for(j=i+1; j<SIZE; j++){
            if(scores[i] < scores[j]){
                tmp = scores[i];　　//避難
                scores[i] = scores[j];
                scores[j] = tmp;
            }
        }
    }
}

void Origin(int scores[], int SIZE){        //並び替え前の出力
    int i;
    printf("scores = ");
    for (i=0; i< SIZE; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
    
}

void Print(int scores[], int SIZE){     //並び替え後の出力
    int i;
    printf("results = ");
    for (i=0;i<SIZE;i++){
        printf("%d ",scores[i]);
        
    }
    printf("\n");
}

int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100,60,70,100,90,80};
    //処理コード
    Origin(scores,SIZE);
    Sort(scores,SIZE);
    Print(scores,SIZE);
    return 0;
}