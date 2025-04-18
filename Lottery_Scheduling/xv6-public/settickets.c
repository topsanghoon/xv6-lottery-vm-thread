#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
                {
                if(argc !=2){
                  printf(2, "settickets err\n");
                  exit();
                }

                int tickets = atoi(argv[1]);
                settickets(tickets);

                exit();
		}
