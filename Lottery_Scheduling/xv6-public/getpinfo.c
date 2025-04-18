#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int
main(int argc, char *argv[]){
	struct pstat st;
	
	if(getpinfo(&st) != 0){
		printf(2, "getpinfo err\n");
		exit();
	}

	/*for(int i =0; i < NPROC; i++){
		if(st.inuse[i])
			printf(1,"pid : %d, tickets : %d, ticks : %d", st.pid[i], st.tickets[i], st.ticks[i]);
	}
	*/
	exit();
}
