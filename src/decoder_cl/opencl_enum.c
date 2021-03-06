
const char * opencl_strenum(cl_uint n)
{
  const char *str = NULL;
  switch(n) {
case -1093 :	str="CL_INVALID_EGL_OBJECT_KHR"; break;
case -1092 :	str="CL_EGL_RESOURCE_NOT_ACQUIRED_KHR"; break;
case -1059 :	str="CL_INVALID_PARTITION_NAME_EXT"; break;
case -1058 :	str="CL_INVALID_PARTITION_COUNT_EXT"; break;
case -1057 :	str="CL_DEVICE_PARTITION_FAILED_EXT"; break;
case -1021 :	str="CL_DBL_MIN_EXP"; break;
case -1013 :	str="CL_DX9_MEDIA_SURFACE_NOT_ACQUIRED_KHR"; break;
case -1012 :	str="CL_DX9_MEDIA_SURFACE_ALREADY_ACQUIRED_KHR"; break;
case -1011 :	str="CL_INVALID_DX9_MEDIA_SURFACE_KHR"; break;
case -1010 :	str="CL_INVALID_DX9_MEDIA_ADAPTER_KHR"; break;
case -1009 :	str="CL_D3D11_RESOURCE_NOT_ACQUIRED_KHR"; break;
case -1008 :	str="CL_D3D11_RESOURCE_ALREADY_ACQUIRED_KHR"; break;
case -1007 :	str="CL_INVALID_D3D11_RESOURCE_KHR"; break;
case -1006 :	str="CL_INVALID_D3D11_DEVICE_KHR"; break;
case -1005 :	str="CL_D3D10_RESOURCE_NOT_ACQUIRED_KHR"; break;
case -1004 :	str="CL_D3D10_RESOURCE_ALREADY_ACQUIRED_KHR"; break;
case -1003 :	str="CL_INVALID_D3D10_RESOURCE_KHR"; break;
case -1002 :	str="CL_INVALID_D3D10_DEVICE_KHR"; break;
case -1001 :	str="CL_PLATFORM_NOT_FOUND_KHR"; break;
case -1000 :	str="CL_INVALID_GL_SHAREGROUP_REFERENCE_KHR"; break;
case -307 :	str="CL_DBL_MIN_10_EXP"; break;
case -125 :	str="CL_FLT_MIN_EXP"; break;
case -70 :	str="CL_INVALID_DEVICE_QUEUE"; break;
case -69 :	str="CL_INVALID_PIPE_SIZE"; break;
case -68 :	str="CL_INVALID_DEVICE_PARTITION_COUNT"; break;
case -67 :	str="CL_INVALID_LINKER_OPTIONS"; break;
case -66 :	str="CL_INVALID_COMPILER_OPTIONS"; break;
case -65 :	str="CL_INVALID_IMAGE_DESCRIPTOR"; break;
case -64 :	str="CL_INVALID_PROPERTY"; break;
case -63 :	str="CL_INVALID_GLOBAL_WORK_SIZE"; break;
case -62 :	str="CL_INVALID_MIP_LEVEL"; break;
case -61 :	str="CL_INVALID_BUFFER_SIZE"; break;
case -60 :	str="CL_INVALID_GL_OBJECT"; break;
case -59 :	str="CL_INVALID_OPERATION"; break;
case -58 :	str="CL_INVALID_EVENT"; break;
case -57 :	str="CL_INVALID_EVENT_WAIT_LIST"; break;
case -56 :	str="CL_INVALID_GLOBAL_OFFSET"; break;
case -55 :	str="CL_INVALID_WORK_ITEM_SIZE"; break;
case -54 :	str="CL_INVALID_WORK_GROUP_SIZE"; break;
case -53 :	str="CL_INVALID_WORK_DIMENSION"; break;
case -52 :	str="CL_INVALID_KERNEL_ARGS"; break;
case -51 :	str="CL_INVALID_ARG_SIZE"; break;
case -50 :	str="CL_INVALID_ARG_VALUE"; break;
case -49 :	str="CL_INVALID_ARG_INDEX"; break;
case -48 :	str="CL_INVALID_KERNEL"; break;
case -47 :	str="CL_INVALID_KERNEL_DEFINITION"; break;
case -46 :	str="CL_INVALID_KERNEL_NAME"; break;
case -45 :	str="CL_INVALID_PROGRAM_EXECUTABLE"; break;
case -44 :	str="CL_INVALID_PROGRAM"; break;
case -43 :	str="CL_INVALID_BUILD_OPTIONS"; break;
case -42 :	str="CL_INVALID_BINARY"; break;
case -41 :	str="CL_INVALID_SAMPLER"; break;
case -40 :	str="CL_INVALID_IMAGE_SIZE"; break;
case -39 :	str="CL_INVALID_IMAGE_FORMAT_DESCRIPTOR"; break;
case -38 :	str="CL_INVALID_MEM_OBJECT"; break;
case -37 :	str="CL_FLT_MIN_10_EXP"; break;
case -36 :	str="CL_INVALID_COMMAND_QUEUE"; break;
case -35 :	str="CL_INVALID_QUEUE_PROPERTIES"; break;
case -34 :	str="CL_INVALID_CONTEXT"; break;
case -33 :	str="CL_INVALID_DEVICE"; break;
case -32 :	str="CL_INVALID_PLATFORM"; break;
case -31 :	str="CL_INVALID_DEVICE_TYPE"; break;
case -30 :	str="CL_INVALID_VALUE"; break;
case -19 :	str="CL_KERNEL_ARG_INFO_NOT_AVAILABLE"; break;
case -18 :	str="CL_DEVICE_PARTITION_FAILED"; break;
case -17 :	str="CL_LINK_PROGRAM_FAILURE"; break;
case -16 :	str="CL_LINKER_NOT_AVAILABLE"; break;
case -15 :	str="CL_COMPILE_PROGRAM_FAILURE"; break;
case -14 :	str="CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST"; break;
case -13 :	str="CL_MISALIGNED_SUB_BUFFER_OFFSET"; break;
case -12 :	str="CL_MAP_FAILURE"; break;
case -11 :	str="CL_BUILD_PROGRAM_FAILURE"; break;
case -10 :	str="CL_IMAGE_FORMAT_NOT_SUPPORTED"; break;
case -9 :	str="CL_IMAGE_FORMAT_MISMATCH"; break;
case -8 :	str="CL_MEM_COPY_OVERLAP"; break;
case -7 :	str="CL_PROFILING_INFO_NOT_AVAILABLE"; break;
case -6 :	str="CL_OUT_OF_HOST_MEMORY"; break;
case -5 :	str="CL_OUT_OF_RESOURCES"; break;
case -4 :	str="CL_MEM_OBJECT_ALLOCATION_FAILURE"; break;
case -3 :	str="CL_BUILD_IN_PROGRESS"; break;
case -2 :	str="CL_BUILD_ERROR"; break;
case -1 :	str="CL_BUILD_NONE"; break;
case 0x0 :	str="CL_COMPLETE"; break;
case 0x1 :	str="CL_AFFINITY_DOMAIN_L1_CACHE_EXT"; break;
case 0x2 :	str="CL_AFFINITY_DOMAIN_L2_CACHE_EXT"; break;
case 0x3 :	str="CL_AFFINITY_DOMAIN_L3_CACHE_EXT"; break;
case 0x4 :	str="CL_AFFINITY_DOMAIN_L4_CACHE_EXT"; break;
case 0x10 :	str="CL_AFFINITY_DOMAIN_NUMA_EXT"; break;
case 0x100 :	str="CL_AFFINITY_DOMAIN_NEXT_FISSIONABLE_EXT"; break;
case 0x0900 :	str="CL_PLATFORM_PROFILE"; break;
case 0x0901 :	str="CL_PLATFORM_VERSION"; break;
case 0x0902 :	str="CL_PLATFORM_NAME"; break;
case 0x0903 :	str="CL_PLATFORM_VENDOR"; break;
case 0x0904 :	str="CL_PLATFORM_EXTENSIONS"; break;
case 0x0920 :	str="CL_PLATFORM_ICD_SUFFIX_KHR"; break;
case 0x1000 :	str="CL_DEVICE_TYPE"; break;
case 0x1001 :	str="CL_DEVICE_VENDOR_ID"; break;
case 0x1002 :	str="CL_DEVICE_MAX_COMPUTE_UNITS"; break;
case 0x1003 :	str="CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS"; break;
case 0x1004 :	str="CL_DEVICE_MAX_WORK_GROUP_SIZE"; break;
case 0x1005 :	str="CL_DEVICE_MAX_WORK_ITEM_SIZES"; break;
case 0x1006 :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR"; break;
case 0x1007 :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT"; break;
case 0x1008 :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT"; break;
case 0x1009 :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG"; break;
case 0x100A :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT"; break;
case 0x100B :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE"; break;
case 0x100C :	str="CL_DEVICE_MAX_CLOCK_FREQUENCY"; break;
case 0x100D :	str="CL_DEVICE_ADDRESS_BITS"; break;
case 0x100E :	str="CL_DEVICE_MAX_READ_IMAGE_ARGS"; break;
case 0x100F :	str="CL_DEVICE_MAX_WRITE_IMAGE_ARGS"; break;
case 0x1010 :	str="CL_DEVICE_MAX_MEM_ALLOC_SIZE"; break;
case 0x1011 :	str="CL_DEVICE_IMAGE2D_MAX_WIDTH"; break;
case 0x1012 :	str="CL_DEVICE_IMAGE2D_MAX_HEIGHT"; break;
case 0x1013 :	str="CL_DEVICE_IMAGE3D_MAX_WIDTH"; break;
case 0x1014 :	str="CL_DEVICE_IMAGE3D_MAX_HEIGHT"; break;
case 0x1015 :	str="CL_DEVICE_IMAGE3D_MAX_DEPTH"; break;
case 0x1016 :	str="CL_DEVICE_IMAGE_SUPPORT"; break;
case 0x1017 :	str="CL_DEVICE_MAX_PARAMETER_SIZE"; break;
case 0x1018 :	str="CL_DEVICE_MAX_SAMPLERS"; break;
case 0x1019 :	str="CL_DEVICE_MEM_BASE_ADDR_ALIGN"; break;
case 0x101A :	str="CL_DEVICE_MIN_DATA_TYPE_ALIGN_SIZE"; break;
case 0x101B :	str="CL_DEVICE_SINGLE_FP_CONFIG"; break;
case 0x101C :	str="CL_DEVICE_GLOBAL_MEM_CACHE_TYPE"; break;
case 0x101D :	str="CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE"; break;
case 0x101E :	str="CL_DEVICE_GLOBAL_MEM_CACHE_SIZE"; break;
case 0x101F :	str="CL_DEVICE_GLOBAL_MEM_SIZE"; break;
case 0x1020 :	str="CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE"; break;
case 0x1021 :	str="CL_DEVICE_MAX_CONSTANT_ARGS"; break;
case 0x1022 :	str="CL_DEVICE_LOCAL_MEM_TYPE"; break;
case 0x1023 :	str="CL_DEVICE_LOCAL_MEM_SIZE"; break;
case 0x1024 :	str="CL_DEVICE_ERROR_CORRECTION_SUPPORT"; break;
case 0x1025 :	str="CL_DEVICE_PROFILING_TIMER_RESOLUTION"; break;
case 0x1026 :	str="CL_DEVICE_ENDIAN_LITTLE"; break;
case 0x1027 :	str="CL_DEVICE_AVAILABLE"; break;
case 0x1028 :	str="CL_DEVICE_COMPILER_AVAILABLE"; break;
case 0x1029 :	str="CL_DEVICE_EXECUTION_CAPABILITIES"; break;
case 0x102A :	str="CL_DEVICE_QUEUE_ON_HOST_PROPERTIES"; break;
case 0x102B :	str="CL_DEVICE_NAME"; break;
case 0x102C :	str="CL_DEVICE_VENDOR"; break;
case 0x102D :	str="CL_DRIVER_VERSION"; break;
case 0x102E :	str="CL_DEVICE_PROFILE"; break;
case 0x102F :	str="CL_DEVICE_VERSION"; break;
case 0x1030 :	str="CL_DEVICE_EXTENSIONS"; break;
case 0x1031 :	str="CL_DEVICE_PLATFORM"; break;
case 0x1032 :	str="CL_DEVICE_DOUBLE_FP_CONFIG"; break;
case 0x1033 :	str="CL_DEVICE_HALF_FP_CONFIG"; break;
case 0x1034 :	str="CL_DEVICE_PREFERRED_VECTOR_WIDTH_HALF"; break;
case 0x1035 :	str="CL_DEVICE_HOST_UNIFIED_MEMORY"; break;
case 0x1036 :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR"; break;
case 0x1037 :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT"; break;
case 0x1038 :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_INT"; break;
case 0x1039 :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_LONG"; break;
case 0x103A :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT"; break;
case 0x103B :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE"; break;
case 0x103C :	str="CL_DEVICE_NATIVE_VECTOR_WIDTH_HALF"; break;
case 0x103D :	str="CL_DEVICE_OPENCL_C_VERSION"; break;
case 0x103E :	str="CL_DEVICE_LINKER_AVAILABLE"; break;
case 0x103F :	str="CL_DEVICE_BUILT_IN_KERNELS"; break;
case 0x1040 :	str="CL_DEVICE_IMAGE_MAX_BUFFER_SIZE"; break;
case 0x1041 :	str="CL_DEVICE_IMAGE_MAX_ARRAY_SIZE"; break;
case 0x1042 :	str="CL_DEVICE_PARENT_DEVICE"; break;
case 0x1043 :	str="CL_DEVICE_PARTITION_MAX_SUB_DEVICES"; break;
case 0x1044 :	str="CL_DEVICE_PARTITION_PROPERTIES"; break;
case 0x1045 :	str="CL_DEVICE_PARTITION_AFFINITY_DOMAIN"; break;
case 0x1046 :	str="CL_DEVICE_PARTITION_TYPE"; break;
case 0x1047 :	str="CL_DEVICE_REFERENCE_COUNT"; break;
case 0x1048 :	str="CL_DEVICE_PREFERRED_INTEROP_USER_SYNC"; break;
case 0x1049 :	str="CL_DEVICE_PRINTF_BUFFER_SIZE"; break;
case 0x104A :	str="CL_DEVICE_IMAGE_PITCH_ALIGNMENT"; break;
case 0x104B :	str="CL_DEVICE_IMAGE_BASE_ADDRESS_ALIGNMENT"; break;
case 0x104C :	str="CL_DEVICE_MAX_READ_WRITE_IMAGE_ARGS"; break;
case 0x104D :	str="CL_DEVICE_MAX_GLOBAL_VARIABLE_SIZE"; break;
case 0x104E :	str="CL_DEVICE_QUEUE_ON_DEVICE_PROPERTIES"; break;
case 0x104F :	str="CL_DEVICE_QUEUE_ON_DEVICE_PREFERRED_SIZE"; break;
case 0x1050 :	str="CL_DEVICE_QUEUE_ON_DEVICE_MAX_SIZE"; break;
case 0x1051 :	str="CL_DEVICE_MAX_ON_DEVICE_QUEUES"; break;
case 0x1052 :	str="CL_DEVICE_MAX_ON_DEVICE_EVENTS"; break;
case 0x1053 :	str="CL_DEVICE_SVM_CAPABILITIES"; break;
case 0x1054 :	str="CL_DEVICE_GLOBAL_VARIABLE_PREFERRED_TOTAL_SIZE"; break;
case 0x1055 :	str="CL_DEVICE_MAX_PIPE_ARGS"; break;
case 0x1056 :	str="CL_DEVICE_PIPE_MAX_ACTIVE_RESERVATIONS"; break;
case 0x1057 :	str="CL_DEVICE_PIPE_MAX_PACKET_SIZE"; break;
case 0x1058 :	str="CL_DEVICE_PREFERRED_PLATFORM_ATOMIC_ALIGNMENT"; break;
case 0x1059 :	str="CL_DEVICE_PREFERRED_GLOBAL_ATOMIC_ALIGNMENT"; break;
case 0x105A :	str="CL_DEVICE_PREFERRED_LOCAL_ATOMIC_ALIGNMENT"; break;
case 0x1080 :	str="CL_CONTEXT_REFERENCE_COUNT"; break;
case 0x1081 :	str="CL_CONTEXT_DEVICES"; break;
case 0x1082 :	str="CL_CONTEXT_PROPERTIES"; break;
case 0x1083 :	str="CL_CONTEXT_NUM_DEVICES"; break;
case 0x1084 :	str="CL_CONTEXT_PLATFORM"; break;
case 0x1085 :	str="CL_CONTEXT_INTEROP_USER_SYNC"; break;
case 0x1086 :	str="CL_DEVICE_PARTITION_EQUALLY"; break;
case 0x1087 :	str="CL_DEVICE_PARTITION_BY_COUNTS"; break;
case 0x1088 :	str="CL_DEVICE_PARTITION_BY_AFFINITY_DOMAIN"; break;
case 0x1090 :	str="CL_QUEUE_CONTEXT"; break;
case 0x1091 :	str="CL_QUEUE_DEVICE"; break;
case 0x1092 :	str="CL_QUEUE_REFERENCE_COUNT"; break;
case 0x1093 :	str="CL_QUEUE_PROPERTIES"; break;
case 0x1094 :	str="CL_QUEUE_SIZE"; break;
case 0x10B0 :	str="CL_R"; break;
case 0x10B1 :	str="CL_A"; break;
case 0x10B2 :	str="CL_RG"; break;
case 0x10B3 :	str="CL_RA"; break;
case 0x10B4 :	str="CL_RGB"; break;
case 0x10B5 :	str="CL_RGBA"; break;
case 0x10B6 :	str="CL_BGRA"; break;
case 0x10B7 :	str="CL_ARGB"; break;
case 0x10B8 :	str="CL_INTENSITY"; break;
case 0x10B9 :	str="CL_LUMINANCE"; break;
case 0x10BA :	str="CL_Rx"; break;
case 0x10BB :	str="CL_RGx"; break;
case 0x10BC :	str="CL_RGBx"; break;
case 0x10BD :	str="CL_DEPTH"; break;
case 0x10BE :	str="CL_DEPTH_STENCIL"; break;
case 0x10BF :	str="CL_sRGB"; break;
case 0x10C0 :	str="CL_sRGBx"; break;
case 0x10C1 :	str="CL_sRGBA"; break;
case 0x10C2 :	str="CL_sBGRA"; break;
case 0x10C3 :	str="CL_ABGR"; break;
case 0x10D0 :	str="CL_SNORM_INT8"; break;
case 0x10D1 :	str="CL_SNORM_INT16"; break;
case 0x10D2 :	str="CL_UNORM_INT8"; break;
case 0x10D3 :	str="CL_UNORM_INT16"; break;
case 0x10D4 :	str="CL_UNORM_SHORT_565"; break;
case 0x10D5 :	str="CL_UNORM_SHORT_555"; break;
case 0x10D6 :	str="CL_UNORM_INT_101010"; break;
case 0x10D7 :	str="CL_SIGNED_INT8"; break;
case 0x10D8 :	str="CL_SIGNED_INT16"; break;
case 0x10D9 :	str="CL_SIGNED_INT32"; break;
case 0x10DA :	str="CL_UNSIGNED_INT8"; break;
case 0x10DB :	str="CL_UNSIGNED_INT16"; break;
case 0x10DC :	str="CL_UNSIGNED_INT32"; break;
case 0x10DD :	str="CL_HALF_FLOAT"; break;
case 0x10DE :	str="CL_FLOAT"; break;
case 0x10DF :	str="CL_UNORM_INT24"; break;
case 0x10F0 :	str="CL_MEM_OBJECT_BUFFER"; break;
case 0x10F1 :	str="CL_MEM_OBJECT_IMAGE2D"; break;
case 0x10F2 :	str="CL_MEM_OBJECT_IMAGE3D"; break;
case 0x10F3 :	str="CL_MEM_OBJECT_IMAGE2D_ARRAY"; break;
case 0x10F4 :	str="CL_MEM_OBJECT_IMAGE1D"; break;
case 0x10F5 :	str="CL_MEM_OBJECT_IMAGE1D_ARRAY"; break;
case 0x10F6 :	str="CL_MEM_OBJECT_IMAGE1D_BUFFER"; break;
case 0x10F7 :	str="CL_MEM_OBJECT_PIPE"; break;
case 0x1100 :	str="CL_MEM_TYPE"; break;
case 0x1101 :	str="CL_MEM_FLAGS"; break;
case 0x1102 :	str="CL_MEM_SIZE"; break;
case 0x1103 :	str="CL_MEM_HOST_PTR"; break;
case 0x1104 :	str="CL_MEM_MAP_COUNT"; break;
case 0x1105 :	str="CL_MEM_REFERENCE_COUNT"; break;
case 0x1106 :	str="CL_MEM_CONTEXT"; break;
case 0x1107 :	str="CL_MEM_ASSOCIATED_MEMOBJECT"; break;
case 0x1108 :	str="CL_MEM_OFFSET"; break;
case 0x1109 :	str="CL_MEM_USES_SVM_POINTER"; break;
case 0x1110 :	str="CL_IMAGE_FORMAT"; break;
case 0x1111 :	str="CL_IMAGE_ELEMENT_SIZE"; break;
case 0x1112 :	str="CL_IMAGE_ROW_PITCH"; break;
case 0x1113 :	str="CL_IMAGE_SLICE_PITCH"; break;
case 0x1114 :	str="CL_IMAGE_WIDTH"; break;
case 0x1115 :	str="CL_IMAGE_HEIGHT"; break;
case 0x1116 :	str="CL_IMAGE_DEPTH"; break;
case 0x1117 :	str="CL_IMAGE_ARRAY_SIZE"; break;
case 0x1118 :	str="CL_IMAGE_BUFFER"; break;
case 0x1119 :	str="CL_IMAGE_NUM_MIP_LEVELS"; break;
case 0x111A :	str="CL_IMAGE_NUM_SAMPLES"; break;
case 0x1120 :	str="CL_PIPE_PACKET_SIZE"; break;
case 0x1121 :	str="CL_PIPE_MAX_PACKETS"; break;
case 0x1130 :	str="CL_ADDRESS_NONE"; break;
case 0x1131 :	str="CL_ADDRESS_CLAMP_TO_EDGE"; break;
case 0x1132 :	str="CL_ADDRESS_CLAMP"; break;
case 0x1133 :	str="CL_ADDRESS_REPEAT"; break;
case 0x1134 :	str="CL_ADDRESS_MIRRORED_REPEAT"; break;
case 0x1140 :	str="CL_FILTER_NEAREST"; break;
case 0x1141 :	str="CL_FILTER_LINEAR"; break;
case 0x1150 :	str="CL_SAMPLER_REFERENCE_COUNT"; break;
case 0x1151 :	str="CL_SAMPLER_CONTEXT"; break;
case 0x1152 :	str="CL_SAMPLER_NORMALIZED_COORDS"; break;
case 0x1153 :	str="CL_SAMPLER_ADDRESSING_MODE"; break;
case 0x1154 :	str="CL_SAMPLER_FILTER_MODE"; break;
case 0x1155 :	str="CL_SAMPLER_MIP_FILTER_MODE"; break;
case 0x1156 :	str="CL_SAMPLER_LOD_MIN"; break;
case 0x1157 :	str="CL_SAMPLER_LOD_MAX"; break;
case 0x1160 :	str="CL_PROGRAM_REFERENCE_COUNT"; break;
case 0x1161 :	str="CL_PROGRAM_CONTEXT"; break;
case 0x1162 :	str="CL_PROGRAM_NUM_DEVICES"; break;
case 0x1163 :	str="CL_PROGRAM_DEVICES"; break;
case 0x1164 :	str="CL_PROGRAM_SOURCE"; break;
case 0x1165 :	str="CL_PROGRAM_BINARY_SIZES"; break;
case 0x1166 :	str="CL_PROGRAM_BINARIES"; break;
case 0x1167 :	str="CL_PROGRAM_NUM_KERNELS"; break;
case 0x1168 :	str="CL_PROGRAM_KERNEL_NAMES"; break;
case 0x1181 :	str="CL_PROGRAM_BUILD_STATUS"; break;
case 0x1182 :	str="CL_PROGRAM_BUILD_OPTIONS"; break;
case 0x1183 :	str="CL_PROGRAM_BUILD_LOG"; break;
case 0x1184 :	str="CL_PROGRAM_BINARY_TYPE"; break;
case 0x1185 :	str="CL_PROGRAM_BUILD_GLOBAL_VARIABLE_TOTAL_SIZE"; break;
case 0x1190 :	str="CL_KERNEL_FUNCTION_NAME"; break;
case 0x1191 :	str="CL_KERNEL_NUM_ARGS"; break;
case 0x1192 :	str="CL_KERNEL_REFERENCE_COUNT"; break;
case 0x1193 :	str="CL_KERNEL_CONTEXT"; break;
case 0x1194 :	str="CL_KERNEL_PROGRAM"; break;
case 0x1195 :	str="CL_KERNEL_ATTRIBUTES"; break;
case 0x1196 :	str="CL_KERNEL_ARG_ADDRESS_QUALIFIER"; break;
case 0x1197 :	str="CL_KERNEL_ARG_ACCESS_QUALIFIER"; break;
case 0x1198 :	str="CL_KERNEL_ARG_TYPE_NAME"; break;
case 0x1199 :	str="CL_KERNEL_ARG_TYPE_QUALIFIER"; break;
case 0x119A :	str="CL_KERNEL_ARG_NAME"; break;
case 0x119B :	str="CL_KERNEL_ARG_ADDRESS_GLOBAL"; break;
case 0x119C :	str="CL_KERNEL_ARG_ADDRESS_LOCAL"; break;
case 0x119D :	str="CL_KERNEL_ARG_ADDRESS_CONSTANT"; break;
case 0x119E :	str="CL_KERNEL_ARG_ADDRESS_PRIVATE"; break;
case 0x11A0 :	str="CL_KERNEL_ARG_ACCESS_READ_ONLY"; break;
case 0x11A1 :	str="CL_KERNEL_ARG_ACCESS_WRITE_ONLY"; break;
case 0x11A2 :	str="CL_KERNEL_ARG_ACCESS_READ_WRITE"; break;
case 0x11A3 :	str="CL_KERNEL_ARG_ACCESS_NONE"; break;
case 0x11B0 :	str="CL_KERNEL_WORK_GROUP_SIZE"; break;
case 0x11B1 :	str="CL_KERNEL_COMPILE_WORK_GROUP_SIZE"; break;
case 0x11B2 :	str="CL_KERNEL_LOCAL_MEM_SIZE"; break;
case 0x11B3 :	str="CL_KERNEL_PREFERRED_WORK_GROUP_SIZE_MULTIPLE"; break;
case 0x11B4 :	str="CL_KERNEL_PRIVATE_MEM_SIZE"; break;
case 0x11B5 :	str="CL_KERNEL_GLOBAL_WORK_SIZE"; break;
case 0x11B6 :	str="CL_KERNEL_EXEC_INFO_SVM_PTRS"; break;
case 0x11B7 :	str="CL_KERNEL_EXEC_INFO_SVM_FINE_GRAIN_SYSTEM"; break;
case 0x11D0 :	str="CL_EVENT_COMMAND_QUEUE"; break;
case 0x11D1 :	str="CL_EVENT_COMMAND_TYPE"; break;
case 0x11D2 :	str="CL_EVENT_REFERENCE_COUNT"; break;
case 0x11D3 :	str="CL_EVENT_COMMAND_EXECUTION_STATUS"; break;
case 0x11D4 :	str="CL_EVENT_CONTEXT"; break;
case 0x11F0 :	str="CL_COMMAND_NDRANGE_KERNEL"; break;
case 0x11F1 :	str="CL_COMMAND_TASK"; break;
case 0x11F2 :	str="CL_COMMAND_NATIVE_KERNEL"; break;
case 0x11F3 :	str="CL_COMMAND_READ_BUFFER"; break;
case 0x11F4 :	str="CL_COMMAND_WRITE_BUFFER"; break;
case 0x11F5 :	str="CL_COMMAND_COPY_BUFFER"; break;
case 0x11F6 :	str="CL_COMMAND_READ_IMAGE"; break;
case 0x11F7 :	str="CL_COMMAND_WRITE_IMAGE"; break;
case 0x11F8 :	str="CL_COMMAND_COPY_IMAGE"; break;
case 0x11F9 :	str="CL_COMMAND_COPY_IMAGE_TO_BUFFER"; break;
case 0x11FA :	str="CL_COMMAND_COPY_BUFFER_TO_IMAGE"; break;
case 0x11FB :	str="CL_COMMAND_MAP_BUFFER"; break;
case 0x11FC :	str="CL_COMMAND_MAP_IMAGE"; break;
case 0x11FD :	str="CL_COMMAND_UNMAP_MEM_OBJECT"; break;
case 0x11FE :	str="CL_COMMAND_MARKER"; break;
case 0x11FF :	str="CL_COMMAND_ACQUIRE_GL_OBJECTS"; break;
case 0x1200 :	str="CL_COMMAND_RELEASE_GL_OBJECTS"; break;
case 0x1201 :	str="CL_COMMAND_READ_BUFFER_RECT"; break;
case 0x1202 :	str="CL_COMMAND_WRITE_BUFFER_RECT"; break;
case 0x1203 :	str="CL_COMMAND_COPY_BUFFER_RECT"; break;
case 0x1204 :	str="CL_COMMAND_USER"; break;
case 0x1205 :	str="CL_COMMAND_BARRIER"; break;
case 0x1206 :	str="CL_COMMAND_MIGRATE_MEM_OBJECTS"; break;
case 0x1207 :	str="CL_COMMAND_FILL_BUFFER"; break;
case 0x1208 :	str="CL_COMMAND_FILL_IMAGE"; break;
case 0x1209 :	str="CL_COMMAND_SVM_FREE"; break;
case 0x120A :	str="CL_COMMAND_SVM_MEMCPY"; break;
case 0x120B :	str="CL_COMMAND_SVM_MEMFILL"; break;
case 0x120C :	str="CL_COMMAND_SVM_MAP"; break;
case 0x120D :	str="CL_COMMAND_SVM_UNMAP"; break;
case 0x1220 :	str="CL_BUFFER_CREATE_TYPE_REGION"; break;
case 0x1280 :	str="CL_PROFILING_COMMAND_QUEUED"; break;
case 0x1281 :	str="CL_PROFILING_COMMAND_SUBMIT"; break;
case 0x1282 :	str="CL_PROFILING_COMMAND_START"; break;
case 0x1283 :	str="CL_PROFILING_COMMAND_END"; break;
case 0x1284 :	str="CL_PROFILING_COMMAND_COMPLETE"; break;
case 0x2000 :	str="CL_GL_OBJECT_BUFFER"; break;
case 0x2001 :	str="CL_GL_OBJECT_TEXTURE2D"; break;
case 0x2002 :	str="CL_GL_OBJECT_TEXTURE3D"; break;
case 0x2003 :	str="CL_GL_OBJECT_RENDERBUFFER"; break;
case 0x2004 :	str="CL_GL_TEXTURE_TARGET"; break;
case 0x2005 :	str="CL_GL_MIPMAP_LEVEL"; break;
case 0x2006 :	str="CL_CURRENT_DEVICE_FOR_GL_CONTEXT_KHR"; break;
case 0x2007 :	str="CL_DEVICES_FOR_GL_CONTEXT_KHR"; break;
case 0x2008 :	str="CL_GL_CONTEXT_KHR"; break;
case 0x2009 :	str="CL_EGL_DISPLAY_KHR"; break;
case 0x200A :	str="CL_GLX_DISPLAY_KHR"; break;
case 0x200B :	str="CL_WGL_HDC_KHR"; break;
case 0x200C :	str="CL_CGL_SHAREGROUP_KHR"; break;
case 0x200D :	str="CL_COMMAND_GL_FENCE_SYNC_OBJECT_KHR"; break;
case 0x200E :	str="CL_GL_OBJECT_TEXTURE2D_ARRAY"; break;
case 0x200F :	str="CL_GL_OBJECT_TEXTURE1D"; break;
case 0x2010 :	str="CL_GL_OBJECT_TEXTURE1D_ARRAY"; break;
case 0x2011 :	str="CL_GL_OBJECT_TEXTURE_BUFFER"; break;
case 0x2012 :	str="CL_GL_NUM_SAMPLES"; break;
case 0x2020 :	str="CL_ADAPTER_D3D9_KHR"; break;
case 0x2021 :	str="CL_ADAPTER_D3D9EX_KHR"; break;
case 0x2022 :	str="CL_ADAPTER_DXVA_KHR"; break;
case 0x2023 :	str="CL_PREFERRED_DEVICES_FOR_DX9_MEDIA_ADAPTER_KHR"; break;
case 0x2024 :	str="CL_ALL_DEVICES_FOR_DX9_MEDIA_ADAPTER_KHR"; break;
case 0x2025 :	str="CL_CONTEXT_ADAPTER_D3D9_KHR"; break;
case 0x2026 :	str="CL_CONTEXT_ADAPTER_D3D9EX_KHR"; break;
case 0x2027 :	str="CL_CONTEXT_ADAPTER_DXVA_KHR"; break;
case 0x2028 :	str="CL_MEM_DX9_MEDIA_ADAPTER_TYPE_KHR"; break;
case 0x2029 :	str="CL_MEM_DX9_MEDIA_SURFACE_INFO_KHR"; break;
case 0x202A :	str="CL_IMAGE_DX9_MEDIA_PLANE_KHR"; break;
case 0x202B :	str="CL_COMMAND_ACQUIRE_DX9_MEDIA_SURFACES_KHR"; break;
case 0x202C :	str="CL_COMMAND_RELEASE_DX9_MEDIA_SURFACES_KHR"; break;
case 0x202D :	str="CL_COMMAND_ACQUIRE_EGL_OBJECTS_KHR"; break;
case 0x202E :	str="CL_COMMAND_RELEASE_EGL_OBJECTS_KHR"; break;
case 0x202F :	str="CL_COMMAND_EGL_FENCE_SYNC_OBJECT_KHR"; break;
case 0x2030 :	str="CL_CONTEXT_MEMORY_INITIALIZE_KHR"; break;
case 0x2031 :	str="CL_DEVICE_TERMINATE_CAPABILITY_KHR"; break;
case 0x2032 :	str="CL_CONTEXT_TERMINATE_KHR"; break;
case 0x2033 :	str="CL_KERNEL_MAX_SUB_GROUP_SIZE_FOR_NDRANGE_KHR"; break;
case 0x2034 :	str="CL_KERNEL_SUB_GROUP_COUNT_FOR_NDRANGE_KHR"; break;
case 0x4000 :	str="CL_DEVICE_COMPUTE_CAPABILITY_MAJOR_NV"; break;
case 0x4001 :	str="CL_DEVICE_COMPUTE_CAPABILITY_MINOR_NV"; break;
case 0x4002 :	str="CL_DEVICE_REGISTERS_PER_BLOCK_NV"; break;
case 0x4003 :	str="CL_DEVICE_WARP_SIZE_NV"; break;
case 0x4004 :	str="CL_DEVICE_GPU_OVERLAP_NV"; break;
case 0x4005 :	str="CL_DEVICE_KERNEL_EXEC_TIMEOUT_NV"; break;
case 0x4006 :	str="CL_DEVICE_INTEGRATED_MEMORY_NV"; break;
case 0x4010 :	str="CL_D3D10_DEVICE_KHR"; break;
case 0x4011 :	str="CL_D3D10_DXGI_ADAPTER_KHR"; break;
case 0x4012 :	str="CL_PREFERRED_DEVICES_FOR_D3D10_KHR"; break;
case 0x4013 :	str="CL_ALL_DEVICES_FOR_D3D10_KHR"; break;
case 0x4014 :	str="CL_CONTEXT_D3D10_DEVICE_KHR"; break;
case 0x4015 :	str="CL_MEM_D3D10_RESOURCE_KHR"; break;
case 0x4016 :	str="CL_IMAGE_D3D10_SUBRESOURCE_KHR"; break;
case 0x4017 :	str="CL_COMMAND_ACQUIRE_D3D10_OBJECTS_KHR"; break;
case 0x4018 :	str="CL_COMMAND_RELEASE_D3D10_OBJECTS_KHR"; break;
case 0x4019 :	str="CL_D3D11_DEVICE_KHR"; break;
case 0x401A :	str="CL_D3D11_DXGI_ADAPTER_KHR"; break;
case 0x401B :	str="CL_PREFERRED_DEVICES_FOR_D3D11_KHR"; break;
case 0x401C :	str="CL_ALL_DEVICES_FOR_D3D11_KHR"; break;
case 0x401D :	str="CL_CONTEXT_D3D11_DEVICE_KHR"; break;
case 0x401E :	str="CL_MEM_D3D11_RESOURCE_KHR"; break;
case 0x401F :	str="CL_IMAGE_D3D11_SUBRESOURCE_KHR"; break;
case 0x4020 :	str="CL_COMMAND_ACQUIRE_D3D11_OBJECTS_KHR"; break;
case 0x4021 :	str="CL_COMMAND_RELEASE_D3D11_OBJECTS_KHR"; break;
case 0x402C :	str="CL_CONTEXT_D3D10_PREFER_SHARED_RESOURCES_KHR"; break;
case 0x402D :	str="CL_CONTEXT_D3D11_PREFER_SHARED_RESOURCES_KHR"; break;
case 0x4032 :	str="CL_DEVICE_MAX_ATOMIC_COUNTERS_EXT"; break;
case 0x4036 :	str="CL_DEVICE_PROFILING_TIMER_OFFSET_AMD"; break;
case 0x4037 :	str="CL_DEVICE_TOPOLOGY_AMD"; break;
case 0x4038 :	str="CL_DEVICE_BOARD_NAME_AMD"; break;
case 0x4039 :	str="CL_DEVICE_GLOBAL_FREE_MEMORY_AMD"; break;
case 0x403F :	str="CL_CONTEXT_OFFLINE_DEVICES_AMD"; break;
case 0x4040 :	str="CL_DEVICE_SIMD_PER_COMPUTE_UNIT_AMD"; break;
case 0x4041 :	str="CL_DEVICE_SIMD_WIDTH_AMD"; break;
case 0x4042 :	str="CL_DEVICE_SIMD_INSTRUCTION_WIDTH_AMD"; break;
case 0x4043 :	str="CL_DEVICE_WAVEFRONT_WIDTH_AMD"; break;
case 0x4044 :	str="CL_DEVICE_GLOBAL_MEM_CHANNELS_AMD"; break;
case 0x4045 :	str="CL_DEVICE_GLOBAL_MEM_CHANNEL_BANKS_AMD"; break;
case 0x4046 :	str="CL_DEVICE_GLOBAL_MEM_CHANNEL_BANK_WIDTH_AMD"; break;
case 0x4047 :	str="CL_DEVICE_LOCAL_MEM_SIZE_PER_COMPUTE_UNIT_AMD"; break;
case 0x4048 :	str="CL_DEVICE_LOCAL_MEM_BANKS_AMD"; break;
case 0x4050 :	str="CL_DEVICE_PARTITION_EQUALLY_EXT"; break;
case 0x4051 :	str="CL_DEVICE_PARTITION_BY_COUNTS_EXT"; break;
case 0x4052 :	str="CL_DEVICE_PARTITION_BY_NAMES_EXT"; break;
case 0x4053 :	str="CL_DEVICE_PARTITION_BY_AFFINITY_DOMAIN_EXT"; break;
case 0x4054 :	str="CL_DEVICE_PARENT_DEVICE_EXT"; break;
case 0x4055 :	str="CL_DEVICE_PARTITION_TYPES_EXT"; break;
case 0x4056 :	str="CL_DEVICE_AFFINITY_DOMAINS_EXT"; break;
case 0x4057 :	str="CL_DEVICE_REFERENCE_COUNT_EXT"; break;
case 0x4058 :	str="CL_DEVICE_PARTITION_STYLE_EXT"; break;
case 0x40A0 :	str="CL_DEVICE_EXT_MEM_PADDING_IN_BYTES_QCOM"; break;
case 0x40A1 :	str="CL_DEVICE_PAGE_SIZE_QCOM"; break;
case 0x40A2 :	str="CL_IMAGE_ROW_ALIGNMENT_QCOM"; break;
case 0x40A3 :	str="CL_IMAGE_SLICE_ALIGNMENT_QCOM"; break;
case 0x40A4 :	str="CL_MEM_HOST_UNCACHED_QCOM"; break;
case 0x40A5 :	str="CL_MEM_HOST_WRITEBACK_QCOM"; break;
case 0x40A6 :	str="CL_MEM_HOST_WRITETHROUGH_QCOM"; break;
case 0x40A7 :	str="CL_MEM_HOST_WRITE_COMBINING_QCOM"; break;
case 0x40A8 :	str="CL_MEM_ION_HOST_PTR_QCOM"; break;
case 0x40B0 :	str="CL_PRINTF_CALLBACK_ARM"; break;
case 0x40B1 :	str="CL_PRINTF_BUFFERSIZE_ARM"; break;
case 0x40E0 :	str="CL_DEVICE_SPIR_VERSIONS"; break;
case 0x40E1 :	str="CL_PROGRAM_BINARY_TYPE_INTERMEDIATE"; break;
  }
  return str;
}
