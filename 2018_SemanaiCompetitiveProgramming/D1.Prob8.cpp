













//#include <iostream>
//
//using namespace std;
//
//int arr[1000000];
//
//int check(int arr[], int iCant){
//	
//    int i = 0;
//    while (arr[i + 1] > arr[i] && i <= iCant){
//    	++i;
//	}
//
//    while (arr[i + 1] == arr[i] && i <= iCant){
//    	++i;
//	}
//
//    while (arr[i+1] < arr[i] && i <= iCant){
//    	++i;
//	}
//
//    return (i+1 == iCant);
//}
//
//int main (){
//	int iCant;
//	cin >> iCant;
//	
//	for (int i = 0; i < iCant; i++){
//		cin >> arr[i];
//	}
//
//    if (check(arr, iCant)){
//    	cout << "Yes" << endl;
//	}
//	else{
//		cout << "No" << endl;
//	}
//	return 0;
//}





	
//	int arr[iCant];
//	bool bCheck = true;
//	
//	for (int i = 0; i < iCant; i++){
//		cin >> arr[i];
//	}
//	
//	int iMid = iCant/2;
//	
//	if(iCant > 1){
//		
//		if (arr[0] >= arr[1] || arr[iCant] >= arr[iCant - 1]){
//			bCheck = false;
//		}
//		
//			
//		// Par
//		if (iCant % 2 == 0){
//			
//			int iCurr1 = arr[iMid-1], iCurr2 = arr[iMid];
//			
//			for (int i = 1; i < iMid-2; i++){
//				
//				if ((arr[iMid-i] >= iCurr1) && (arr[iMid+i] >= iCurr2)){
//					iCurr1 = arr[iMid-i];
//					iCurr2 = arr[iMid+i];
//				}
//				else{
//					bCheck = false;
//				}	
//			}
//			
//			
//		}
//		//Impar
//		else{
//			int iCurr1 = arr[iMid], iCurr2 = arr[iMid];
//			
//			for (int i = 1; i < iMid-2; i++){
//				
//				if ((arr[iMid-i] >= iCurr1) && (arr[iMid+i] >= iCurr2)){
//					iCurr1 = arr[iMid-i];
//					iCurr2 = arr[iMid+i];
//				}
//				else{
//					bCheck = false;
//				}	
//			}
//		}
//	}
//
//	
//	if (bCheck){
//		cout << "YES" << endl;
//	}
//	else{
//		cout << "NO" << endl;
//	}
//
//	return 0;	
//}




