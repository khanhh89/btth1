#include<stdio.h>

int main(){
	int choice;
	do{
		printf("\n\t---Menu---\n");
		printf("1.Nhap so luong va gia tri cho cac phan tu\n");
		printf("2.In mang (arr[0]=...,arr[1]=...)\n");
		printf("3.Dem so luong so hoan hao\n");
		printf("4.Dem so luong so nguyen to\n");
		printf("5.Tim gia tri lon thu 2\n");
		printf("6.Tim gia tri nho thu 2\n");
		printf("7.Them phan tu tai vi tri\n");
		printf("8.Xoa phan tu tai vi tri\n");
		printf("9.Sap xep mang tang dan(sap xep chen)\n");
		printf("10.Sap xep mang giam dan(sap xep chen)\n");
		printf("11.Tim kiem phan tu(Tim kiem nhi phan)\n");
		printf("12.Xoa phan tu trung lap va in phan tu doc nhat\n");
		printf("13.Sap xep va hien thi so chan truoc,so le dung sau\n");
		printf("14.Dao nguoc mang\n");
		printf("15.Thoat\n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				int arr[100];
				int n;
				printf("Nhap so phan tu cho mang: ");
				scanf("%d",&n);
				if(n<0||n>100){
					printf("So nhap khong hop le");
					continue;
				}
				printf("Nhap cac phan tu cho mang: \n");
				for(int i=0;i<n;i++){
					scanf("%d",&arr[i]);
				}
				break;
			case 2: 
				if(n>0&&n<100){
					printf("Cac gia tri cua mang la: \n");
					for(int i=0;i<n;i++){
						printf("arr[%d]= %d\n",i,arr[i]);
					}
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 3:
				if(n>0&&n<100){
					int u=0;
					int count=0;
					for(int i=0;i<n;i++){
						for(int j=1;j<arr[i];j++){
							if (arr[i] % j == 0) {
                				u += j;
            				}
        				}
        					if (u == arr[i] && arr[i] > 1) {  
            				count++;
						}
					}
					printf("So luong so hoan hao trong mang la: %d\n", count);
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 4:
				if(n>0&&n<100){
					int checknumber=0;
					for(int i=0;i<n;i++){
							checknumber++;
						if(arr[i]==2){
							checknumber++;
							break;
						}
						for(int j=2;j*j<arr[i];j++){
							if(arr[i]%j==0){
							checknumber--;
							break;
							}
						}	
					}
					printf("\nSo luong cac so nguyen to co trong mang la: ",checknumber);
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 5:
				if(n>0&&n<100){
					int max,max_2;
					max=arr[0];
					for(int i=0;i<n;i++){
						if(arr[i]>max){
							max_2=max;
							max=arr[i];
						}
					}
					printf("Gia tri lon thu 2 trong mang la: %d",max_2);
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 6:
				if(n>0&&n<100){
					int min,min_2;
					min=arr[0];
					for(int i=0;i<n;i++){
						if(arr[i]<min){
							min_2=min;
							min=arr[i];	
						}
					}
					printf("Gia tri nho thu 2 trong mang la: %d",min_2);
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 7:
				if(n>0&&n<100){
					int addlndex,newvalue;
					printf("Nhap vi tri muon them phan tu(1 den %d): ",n);
					scanf("%d",&addlndex);
					if(addlndex<0||addlndex>n){
						printf("Vi tri khong hop le");
						continue;
					}
					printf("Nhap phan tu muon them: ");
					scanf("%d",&newvalue);
					if(addlndex==n){
						arr[addlndex]=newvalue;
					}else{
						for(int i=n;i>addlndex+1;i--){
							arr[i]=arr[i-1];
						}
						arr[addlndex]=newvalue;
						n++;
					}
					printf("Mang sau khi them la: ");
					for(int i=0;i<n;i++){
						printf("%d \t",arr[i]);
					}
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 8:
				if(n>0&&n<100){
					int addlndex;
					printf("Nhap vi tri muon xoa phan tu(1 den %d): ",n);
					scanf("%d",&addlndex);
					if(addlndex<0||addlndex>n){
						printf("Vi tri khong hop le");
						continue;
					}
						for(int i=addlndex;i>n-1;i++){
							arr[i]=arr[i+1];
						}
						n--;
					printf("Mang sau khi xoa la: ");
					for(int i=0;i<n;i++){
						printf("%d \t",arr[i]);
					}
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 9:
				if(n>0&&n<100){
					for (int i = 1; i < n; i++) {
			            int key = arr[i];
			            int j;
			            for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			                arr[j + 1] = arr[j];
			            }
			            arr[j + 1] = key;
			        }
			
			        printf("Mang sau khi sap xep la (tang dan): ");
			        for (int i = 0; i < n; i++) {
			            printf("%d ", arr[i]);
			        }
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 10:
				if(n>0&&n<100){
					for (int i = 1; i < n; i++) {
			            int key = arr[i];
			            int j;
			            for (j = i - 1; j >= 0 && arr[j] < key; j--) {
			                arr[j + 1] = arr[j];
			            }
			            arr[j + 1] = key;
			        }
			
			        printf("Mang sau khi sap xep la (tang dan): ");
			        for (int i = 0; i < n; i++) {
			            printf("%d ", arr[i]);
			        }
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 11:
				if(n>0&&n<100){
					int searValue;
					int start = 0;
					int end =n - 1;
					int mid;
					if(arr[0]>arr[1]){
						printf("Mang chua duoc sap xep theo chieu tang dan.Hay di sap xep di");
						continue;
					}else{
						printf("Nhap so can tim: ");
						scanf("%d",&searValue);
						while(start<=end){
						mid =(start + end)/2;
						if(arr[mid]==searValue){
							printf("So can tim nam o vi tri thu %d trong mang ",mid);
							return 0;
						}else if(arr[mid]>searValue){
							end=mid-1;
						}else{
							start=mid+1;
						}
					}
					printf("So can tim khong co trong mang");
					}
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 12:
				if(n>0&&n<100){
					 int result[n];
				    int resultSize = 0;
				    for (int i = 0; i < n; i++) {
				        int count = 0;
				        for (int j = 0; j < n; j++) {
				            if (arr[i] == arr[j]) {
				                count++;
				            }
				        }
				        if (count == 1) {
				            result[resultSize++] = arr[i];
				        }
				    }
				    printf("Mang sau khi xoa so trung lap la: ");
				    for (int i = 0; i < resultSize; i++) {
				        printf("%d ", result[i]);
				    }
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 13:
				if(n>0&&n<100){
					printf("So chan va so le: ");
					    for (int i = 0; i < n; i++) {
					        if (arr[i] % 2 == 0) {
					            printf("%d ", arr[i]);
					        }
					    }
					    for (int i = 0; i < n; i++) {
					        if (arr[i] % 2 != 0) {
					            printf("%d ", arr[i]);
					        }
					    }
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 14:
				if(n>0&&n<100){
					int start=0,end=n-1;
					while(start<end){
						int temp=arr[start];
						arr[start]=arr[end];
						arr[end]=temp;
						end--;
						start++;
					}
					printf("Mang sau khi dao nguoc la: \n");
					for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					}
				}else{
					printf("Phan tu cua mang chua duoc nhap hay nhap phan tu di");
				}
				printf("\n");
				break;
			case 15:
				printf("Hen gap lai!");
				break;
			default:
				printf("Nhap lai di");
				break;
		}
	}while(choice!=15);
	return 0;
}
