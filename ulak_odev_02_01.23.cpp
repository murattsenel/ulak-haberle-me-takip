
#include <stdio.h>

main() {
	
enum isciler {W_1,W_2,W_3,W_4,W_5,W_6,W_7,W_8,W_9,W_10,W_11,W_12,W_13,W_14,W_15,W_16,W_17,W_18,W_19,W_20,W_21,W_22,W_23,W_24,W_25,W_26,W_27,W_28,
W_29,W_30,W_31,W_32,W_33,W_34,W_35,W_36,W_37,W_38,W_39,W_40,W_41,W_42,W_43,W_44,W_45,W_46,W_47};

enum isciler isci;



char *isciad[] = {"W_1","W_2","W_3","W_4","W_5","W_6","W_7","W_8","W_9","W_10","W_11","W_12","W_13","W_14","W_15","W_16","W_17","W_18","W_19","W_20","W_21","W_22","W_23",
"W_24","W_25","W_26","W_27","W_28","W_29","W_30","W_31","W_32","W_33","W_34","W_35","W_36","W_37","W_38","W_39","W_40","W_41","W_42","W_43","W_44","W_45","W_46","W_47"};

for (isci = W_1; isci <= W_47; isci++)
   printf("%s\n", isciad[isci]);



enum kidemli_isci {LW_1,LW_2,LW_3,LW_4,LW_5,LW_6,LW_7,LW_8,LW_9,LW_10};

enum kidemli_isci kidemli;

char *kidemliad[] = {"LW_1","LW_2","LW_3","LW_4","LW_5","LW_6","LW_7","LW_8","LW_9","LW_10"};

for (kidemli = LW_1; kidemli <= LW_10; kidemli++)
   printf("%s\n", kidemliad[kidemli]);
hhh
	
}

