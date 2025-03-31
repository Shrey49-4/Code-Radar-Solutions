void bubbleSort(arr[n], n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

void printArray(arr, n)
{
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
}