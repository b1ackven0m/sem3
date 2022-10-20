#include <iostream>
#include <math.h>
using namespace std;


int var(int array[],int size){
	int sumx = 0;
	int sumsqrtx = 0;
	
	for(int i = 0 ; i  < size ;i++){
		
		sumx += array[i];
		sumsqrtx += array[i] * array[i] ;
		
			}	
		return sumsqrtx - ((sumx*sumx)/size);
	}

	
void arrayMultiplication(int m , int n , int l , int k){

	int mat1[m][n];
	int mat2[l][k];

	if(n != l){
	throw invalid_argument( "Multiplication is undifined between those matreices ." );
	}

	for(int i = 0 ; i < m ;i++){
		for(int j=0 ;j<n ;j++){
			cout << "enter the element " << i+1 << " , " << j+1 << "  for the matrix 1:\n";
			cin >>mat1[i][j];
			cout << "enter the element " << i+1 << " , " << j+1 << "  for the matrix 2:\n";
			cin >>mat2[i][j];

		}
	}

	// transpose 
	int transposemat1[n][m] ;// or j and i if the matrix is i and j 
		for(int i = 0 ; i < n ;i++){
		for(int j=0 ;j< m;j++){
			transposemat1[i][j] = mat2[j][i];
		}
	}


}


int main(){
	int arr[6] ={1,1,4,4,2,3};
	cout << var(arr,6)<< endl;

	int m ,n, l , k;

	cout << "enter the first matrix rows number : \n";
	cin >> m; 
	cout << "enter the first matrix collumns number : \n";
	cin >> n; 

	cout << "enter the second matrix rows number : \n";
	cin >> l; 
	cout << "enter the second matrix collumns number : \n";
	cin >> k; 


	arrayMultiplication(m,n,l,k);

	return 0 ;
}
