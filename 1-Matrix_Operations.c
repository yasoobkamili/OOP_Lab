//This C program conducts following operations on two matrices:
// -addition , -subtraction , -multiplication , -transpose
// CSE-23-46
#include<stdio.h>
void create(int matrix[10][10], int rows, int columns);
void display(int matrix[10][10], int rows, int columns);
void add(int mat1[10][10], int mat2[10][10], int rows, int columns);
void subtract(int mat1[10][10], int mat2[10][10], int rows, int columns);
void multiply(int mat1[10][10], int mat2[10][10], int rows_1, int columns_1, int columns_2);
void transpose(int matrix[10][10], int rows, int columns );
int main(){
    
    int mat1[10][10],m,n;
    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d%d",&m,&n);
    create(mat1,m,n);

    int mat2[10][10],p,q;
    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d%d",&p,&q);
    create(mat2,p,q);

    printf("First matrix is :\n");
    display(mat1,m,n);
    printf("Second matrix is :\n");
    display(mat2,p,q);

    printf("Entering operations menu .....\n");
    int choice = -10;
    while(choice!=0){
    printf("Enter your choice:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for transpose\nothers to exit\n");
    scanf("%d",&choice);
        switch(choice){
            case 1:
                if(m==p && n==q){
                    add(mat1,mat2,m,n);
                }
                else
                    printf("Given matrices cannot be added due to different orders.\n");
                break;
            case 2:
                if(m==p && n==q){
                    subtract(mat1,mat2,m,n);
                }
                else
                    printf("Given matrices cannot be subtracted due to different orders.\n");
                break;
            case 3:
				if(n==p)
                	multiply(mat1,mat2,m,n,q);
                else
					printf("Given matrices cannot be multiplied");
				break;
            case 4:
                printf("Transpose is first matrix is:\n");
                transpose(mat1,m,n);
                printf("Transpose is second matrix is:\n");
                transpose(mat2,p,q);
                break;
            default:
                printf("Exiting...\n");
                return 0;
        }
    }
    
}

void create(int matrix[10][10] , int rows, int columns){
    int i,j;
    printf("Enter elements row by row:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

void display(int matrix[10][10] , int rows , int columns){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}

void add(int mat1[10][10],int mat2[10][10],int rows,int columns){
    int i,j;
    int mat_sum[10][10];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            mat_sum[i][j] = mat1[i][j] + mat2[i][j];
        }    
    }
    printf("Sum of matrices is:\n");
    display(mat_sum,rows,columns);
}

void subtract(int mat1[10][10],int mat2[10][10],int rows,int columns){
    int i,j;
    int mat_diff[10][10];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            mat_diff[i][j] = mat1[i][j] - mat2[i][j];
        }    
    }
    printf("Difference of matrices is:\n");
    display(mat_diff,rows,columns);
}

void transpose(int matrix[10][10], int rows, int columns ){
    int i,j;
    int transpose[10][10];
    for(i=0;i<columns;i++){
        for(j=0;j<rows;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    display(transpose, columns, rows);
}

void multiply(int mat1[10][10], int mat2[10][10], int rows_1, int columns_1, int columns_2){
    int i, j, k, sum = 0;
	int mat_mul[10][10] = {0};
	for(i=0;i<rows_1;i++){
		for(j=0;j<columns_2;j++){
			for(k=0;k<columns_1;k++){
				mat_mul[i][j]  += mat1[i][k]*mat2[k][j];
			}
		}	
	}
    printf("Product of matrices is:\n");
	display(mat_mul, rows_1, columns_2);
}



