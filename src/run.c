#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "allvars.h"
#include "proto.h"

void run()
{
  read_param();
  init();
//  test();//
  mcmc_con_run();
//  mcmc_conline_run();
}