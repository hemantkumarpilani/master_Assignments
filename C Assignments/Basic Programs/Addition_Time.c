// Addition Of two time variables
#include<stdio.h>
typedef struct time{
	int hour;
	int minute;
	int second;
}time;
typedef struct time_addition{
	int hour;
	int minute;
	int second;
}ta;
void main (){
	time t[2];
	int i;
	for (i=0;i<2;i++){
		printf("Enter hour, minute and second \n");
		scanf("%d %d %d",&t[i].hour,&t[i].minute,&t[i].second);	
	}
	for (i=0;i<2;i++){
		printf("Time is = %d:%d:%d \n",t[i].hour,t[i].minute,t[i].second);	
	}
	ta s;
	s.hour= (t[0].hour)+(t[1].hour);
	if ((t[0].minute+t[1].minute)>60){
		int q,r;
		q= (t[0].minute+t[1].minute)/60;
		s.hour= s.hour+q;
		r= (t[0].minute+t[1].minute)%60;
		s.minute= 0;
		s.minute= s.minute+r;
	}
	else {
		s.minute= t[0].minute+t[1].minute;
	}
	if ((t[0].second+t[1].second)>60){
		int q,r;
		q= (t[0].second+t[1].second)/60;
		s.minute= s.minute+q;
		r= (t[0].second+t[1].second)%60;
		s.second=0;
		s.second= s.second+r;
	}
	else {
		s.second= t[0].second+t[0].second;
	}
	printf("Result after addition of two time variables is = %d:%d:%d \n",s.hour,s.minute,s.second);
}
