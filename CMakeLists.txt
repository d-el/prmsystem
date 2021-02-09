cmake_minimum_required(VERSION 3.14)

PROJECT(prmsystem CXX C ASM)
set(CMAKE_CXX_STANDARD 17)

set(COMMONFLAGS "\
	-g3 -O2 \
	-fmessage-length=0 \
	-ffunction-sections \
	-fdata-sections \
	-fsigned-char \
	-fsingle-precision-constant \
	-Wfloat-equal \
	-Wuninitialized \
	")

set(CMAKE_CXX_FLAGS "${CPUFLAGS} ${COMMONFLAGS} -std=c++17 -fno-rtti -fno-exceptions")
set(CMAKE_C_FLAGS "${CPUFLAGS} ${COMMONFLAGS} -std=gnu11")
	
set(CMAKE_EXE_LINKER_FLAGS "\
	${CPUFLAGS} \
	${FUSED} \
	-Xlinker --gc-sections \
	-Wl,--print-memory-usage \
	-Wl,--undefined=uxTopUsedPriority \
	-Wl,-Map=${PROJECT_SOURCE_DIR}/build/${PROJECT_NAME}.map \
	 ")

add_subdirectory(prmsystem)
add_subdirectory(utils)

add_executable(${PROJECT_NAME}.elf main.cpp)
target_link_options(${PROJECT_NAME}.elf
	PRIVATE
	)

target_link_libraries(${PROJECT_NAME}.elf
	prmsystem
	utils
	)
