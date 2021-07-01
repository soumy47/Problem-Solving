class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int Ls[n];
	    Ls[0] = arr[0];
	    
	    for(int i=1; i<n ;i++)
	    {
	        Ls[i] = arr[i];
	        for(int j =0; j<i ; j ++)
	        {
	            if( arr[i] > arr[j] && Ls[j] + arr[i] > Ls[i])
	            { 
	                Ls[i] =arr[i] + Ls[j];
	            }
	        }
	    }
	    return *max_element(Ls, Ls+n);
	}  
};
