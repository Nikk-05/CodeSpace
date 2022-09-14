void merge(int arr[], int l, int m, int r)
    {
//   storing right and left array seperatly---------
        int x=m-l+1;
        int y=r-m;
        
         int a[x];
         int b[y];
         int ind=l;
         for(int i=0;i<x;i++)
         {
             a[i]=arr[ind++];
         }
         ind=m+1;
         for(int i=0;i<y;i++)
         {
             b[i]=arr[ind++];
         }
  
  
//   Merge two sorted array----------
           ind=l;
        int i=0,j=0;
        
        while(i<x && j<y)
        {
            if(a[i]<=b[j])
            {
                arr[ind]=a[i];
                ind++;
                i++;
            }
            else 
            {
                arr[ind]=b[j];
                ind++;
                j++;
            }
        }
        
        while(i<x)
        {
          arr[ind]=a[i];
            ind++;
            i++;  
        }
        while(j<y)
        {
           arr[ind]=b[j];
            ind++;
            j++; 
        }
    }

// Dividing using recursion------------
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
        return ;
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
        return;
    }
