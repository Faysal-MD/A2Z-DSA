int secondLargest(int a[], int n) {
	    int largest = a[0];
	    int slargest = -1;
	    
	    for (int i=0; i<n; i++) {
	        if (a[i] > largest) {
	            slargest = largest;
	            largest = a[i];
	        } else if (a[i] != largest && a[i] > slargest) {
	            slargest = a[i];
	        }
	    }
}
int secondSmallest(int a[], int n) {
	    int smallest = a[0];
	    int ssmallest = INT_MAX;
	    
	    for (int i=0; i<n; i++) {
	        if (a[i] < smallest) {
	            ssmallest = smallest;
	            largest = a[i];
	        } else if (a[i] != smallest && a[i] < ssmallest) {
	            ssmallest = a[i];
	        }
	    }
}