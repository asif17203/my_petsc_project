
include ${PETSC_DIR}/lib/petsc/conf/variables
include ${PETSC_DIR}/lib/petsc/conf/rules

expo_petsc: expo_petsc.o chkopts
	-${CLINKER} -o expo_petsc expo_petsc.o ${PETSC_LIB} ${MPI_LIB}
	${RM} expo_petsc.o

# Rule for 'vec' target
vec: vec.o chkopts
	-${CLINKER} -o vec vec.o ${PETSC_LIB}
	${RM} vec.o

# Simple chkopts rule
chkopts:
	@echo "Checking options"

# Rule to compile vec.o
vec.o: vec.c
	${PETSC_CC} -c vec.c -o vec.o ${PETSC_CC_INCLUDES}
