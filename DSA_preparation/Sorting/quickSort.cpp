void quickSort(int arr[], int low, int high)
    {
        if(low>=high)
        return ;
        // For partition of a array according to pivot
        int mid=partition(arr,low,high);
  
        quickSort(arr,low,mid-1);
        quickSort(arr,mid+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[high];
       int right_ind=low;
       for(int i=low;i<high;i++)
       {
           if(arr[i]<pivot)
           {
            swap(arr[i],arr[right_ind]);
            right_ind++;
           }
       }
       
//  swapped right_ind is pointing to the greates value in array...
//       dry run once.....
       swap(arr[high],arr[right_ind]);
       return right_ind;
       
       
    // //   left and right management
    //   int i=low,j=high;
    //   while(i<right_ind && j>right_ind)
    //   {
    //       while(arr[i]<pivot)
    //       {
    //           i++;
    //       }
          
    //       while(arr[j]>pivot)
    //       {
    //           j--;
    //       }
          
    //       if(i<right_ind && j>right_ind)
    //       swap(arr[i++],arr[j--]);
    //   }
    //   return right_ind;
    }
};
