#include <iostream>
#include<climits>
using namespace std;

void displayArray(int Array[],int size){
        for (int i = 0; i < size; i++)
        {
                cout<<Array[i]<<endl;
        }
        
}

int maxNumber(int Array[],int size){
        int max = INT_MIN;
        for (int i = 0; i < size; i++)
        {
                if (max < Array[i])
                {
                        max = Array[i];
                }
                
        }
        return max;
}
int minNumber(int Array[],int size){
        int min = INT_MAX;
        for (int i = 0; i < size; i++)
        {
                if (min > Array[i])
                {
                        min = Array[i];
                }
                
        }
        return min;
}

void extreme (int Array[],int size){
        int start = 0;
        int end = size - 1;
        while (start <= end)
        {
                
                if (start == end)
                {
                     cout<<Array[start]<<endl;
                     break;
                }
                cout<<Array[start]<<endl;
                start++;
                cout<<Array[end]<<endl;
                end--;
        }
        
}
void swap (int &x,int &y){
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;

}
void reverse (int Array[],int size){
        int start = 0;
        int end = size - 1;
        while (start < end)
        {
                swap(Array[start],Array[end]);
                start++;
                end--;
        }
        
}

void intersection(int array1[],int size ,int array2[],int size2,int answer[]){
                // int answer[10];
                int y=0;
                for (int i = 0; i < size; i++)
                {
                        for (int j = 0; j < size2; j++)
                        {
                                if (array1[i] == array2[j])
                                {
                                 answer[y]=array1[i];
                                 y++;    
                                }
                                
                        }
                        
                }
        // return answer;        
}

int main(){
        int newArray[5] = {10,20,40,60,70};
        // displayArray(newArray,4);
        // cout<<minNumber(newArray,4)<<endl;
        // for (auto i : newArray)
        // {
        //         cout<<i<<endl;
        // }
        // // extreme(newArray,5);
        // reverse(newArray,5);
        // cout<<"-------------"<<endl;
        //  for (auto i : newArray)
        // {
        //         cout<<i<<endl;
        // }
        // return 0;
        int array1 [5] = {3,4,5,6,8};
        int array2 [5] = {1,2,3,4,5};
        int answer[3];

        intersection(array1,5,array2,5,answer);
        for(auto i : answer){
                cout<<i<<endl;
        }
}