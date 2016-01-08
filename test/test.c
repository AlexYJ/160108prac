#include <stdio.h>

int RecusiveBinSearch(int nArr[],int nBegin,int nEnd,int nTarget){
	int nMid = 0;
	if( nBegin > nEnd ){
		return -1;  //결과 없음
	}
	nMid = (nBegin+nEnd) / 2;
	if(nArr[nMid] == nTarget){
		return nMid;            //해당 숫자 리턴
	}
	else if(nTarget < nArr[nMid]) {
		return RecusiveBinSearch(nArr,nBegin,nMid-1,nTarget);
	}
	else {
		return RecusiveBinSearch(nArr,nMid+1,nEnd,nTarget);
	}
}

int main()
{
	int nArr[] = { 5, 77, 10, 13, 12, 7, 19 };
	int nResult;
	int i = 0;

	nResult = RecusiveBinSearch(nArr,0,sizeof(nArr)/sizeof(int)-1,13);

	if(nResult==-1){
		printf("값이 존재하지 않음\n");
	}
	else{
		for(i=0; i<(sizeof(nArr)/sizeof(int)); ++i){
			printf("%d ",nArr[i]);
		}
		printf("\n%d번째에 해당 숫자가 존재\n", nResult+1);
	}

	return 0;
}