#include <stdio.h>

int main(){
	int choose;
	int arr[3][3]={{3,7,2},{7,4,6},{5,7,1}};
	int n=3;
	do{
	   printf("MENU \n");
	   printf("1. nhap vao so phan tu va gia tri cua mang \n");
	   printf("2. in ra gia tri cac phan tu trong mang \n");
	   printf("3. dem so luong cac phan tu chan le trong mang \n");
	   printf("4. tim ra gia tri lon thu hai trong mang \n");
	   printf("5. them mot phan tu vao dau mang \n");
	   printf("6. xoa phan tu tai mot vi tri cu the \n");
	   printf("7. sap xep mang theo thu tu giam dan \n");
	   printf("8. tim kiem phan tu co ton tai trong mang hay khong \n");
	   printf("9. in ra toan bo so nguyen to trong mang da duoc binh phuong \n");
	   printf("10. sap xep mang theo thu tu giam dan \n");
	   printf("11. thoat \n");
	   printf("%d", &choose);
	   switch(choose){
	   	case 1:
	   	printf("nhap vao phan tu va gia tri cua mang");
	   	scanf("%d", &arr);
	   	printf("cac phan tu va gia tri cua mang la:%d"); 
	   		break;
	   	case 2:
	   	printf("gia tri cac phan tu trong mang la");
	   	for(int i=0; i<3 ;i++){
	   		printf("%d", &arr[i]);
		   }
	   		break;
	   	case 3:
	   	
	   	printf("dem so luong phan tu chan le trong mang");
	   	    break;
	   	case 4:
	   	    break;
	   	case 5:
	   	    break;
	   	case 6:
	   	    break;
	   	case 7:
	   	    break;
	   	case 8:
	   	    break;
	   	case 9:
	   	    break;
	   	case 10:
	   	    break;
	   	case 11:
	   	    break; 
	   }
   }while(choose!=11);
    return 0;
}
