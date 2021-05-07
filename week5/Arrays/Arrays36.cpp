// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C


//Function to rotate matrix anticlockwise by 90 degrees.
void rotateby90(int n, int matrix[][n]) 
{
    int temp[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        temp[i][j]=matrix[i][j];
    }
} 

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        matrix[i][j]=temp[j][n-1-i];
    }
}
}

// { Driver Code Starts.

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int n;
		scanf("%d", &n);
		int matrix[n][n];
	 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &matrix[i][j]);
			}
		}
		
		rotateby90(n, matrix);
		for(int i = 0; i < n; i++)
		    for(int j=0; j<n; j++)
			    printf("%d ", matrix[i][j]);
		printf("\n");
	}
	return 0;
}  // } Driver Code Ends
