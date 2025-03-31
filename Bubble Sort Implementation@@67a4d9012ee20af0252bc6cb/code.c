void bubblesort(int arr[n], int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(lis[i]>lis[j]){
                temp=lis[j];
                lis[j]=lis[i];
                lis[i]=temp;
            }
        }
    }
}