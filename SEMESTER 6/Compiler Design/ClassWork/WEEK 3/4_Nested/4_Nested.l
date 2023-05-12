%{
#include "yy.tab.h"
%}


%%
if return IF;
[{] return START;
[}] return STOP;
%%

