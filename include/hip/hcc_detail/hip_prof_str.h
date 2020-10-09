// automatically generated sources
#ifndef _HIP_PROF_STR_H
#define _HIP_PROF_STR_H
#define HIP_PROF_VER 1

// Dummy API primitives
#define INIT_NONE_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetAddress_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetBorderColor_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyDtoA_CB_ARGS_DATA(cb_data) {};
#define INIT_hipArrayGetDescriptor_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexObjectGetResourceViewDesc_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyAtoHAsync_CB_ARGS_DATA(cb_data) {};
#define INIT_hipDestroyTextureObject_CB_ARGS_DATA(cb_data) {};
#define INIT_hipArray3DGetDescriptor_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetAddress_CB_ARGS_DATA(cb_data) {};
#define INIT_hipArrayDestroy_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetMaxAnisotropy_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetMipmapFilterMode_CB_ARGS_DATA(cb_data) {};
#define INIT_hipDeviceGetCount_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyArrayToArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipBindTexture2D_CB_ARGS_DATA(cb_data) {};
#define INIT_hipCreateTextureObject_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyHtoAAsync_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyAtoA_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyAtoD_CB_ARGS_DATA(cb_data) {};
#define INIT_hipBindTextureToMipmappedArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetMipmapLevelClamp_CB_ARGS_DATA(cb_data) {};
#define INIT_hipBindTextureToArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetFormat_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexObjectGetTextureDesc_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetMaxAnisotropy_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexObjectDestroy_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpy2DArrayToArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMipmappedArrayDestroy_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetFilterMode_CB_ARGS_DATA(cb_data) {};
#define INIT_hipGetChannelDesc_CB_ARGS_DATA(cb_data) {};
#define INIT_hipHccGetAcceleratorView_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetFormat_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyToArrayAsync_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetAddress2D_CB_ARGS_DATA(cb_data) {};
#define INIT_hipGetTextureObjectResourceViewDesc_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetFlags_CB_ARGS_DATA(cb_data) {};
#define INIT_hipUnbindTexture_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetMipmapLevelBias_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetFilterMode_CB_ARGS_DATA(cb_data) {};
#define INIT_hipGetTextureAlignmentOffset_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMipmappedArrayGetLevel_CB_ARGS_DATA(cb_data) {};
#define INIT_hipCreateSurfaceObject_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMipmappedArrayCreate_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexObjectGetResourceDesc_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetAddressMode_CB_ARGS_DATA(cb_data) {};
#define INIT_hipGetTextureObjectResourceDesc_CB_ARGS_DATA(cb_data) {};
#define INIT_hipModuleLaunchKernelExt_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpy2DToArrayAsync_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetBorderColor_CB_ARGS_DATA(cb_data) {};
#define INIT_hipDestroySurfaceObject_CB_ARGS_DATA(cb_data) {};
#define INIT_hipGetTextureReference_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetMipmapFilterMode_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexObjectCreate_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetAddressMode_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetMipmapLevelBias_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetFlags_CB_ARGS_DATA(cb_data) {};
#define INIT_hipMemcpyFromArrayAsync_CB_ARGS_DATA(cb_data) {};
#define INIT_hipBindTexture_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetMipmappedArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefGetMipmappedArray_CB_ARGS_DATA(cb_data) {};
#define INIT_hipSetValidDevices_CB_ARGS_DATA(cb_data) {};
#define INIT_hipHccGetAccelerator_CB_ARGS_DATA(cb_data) {};
#define INIT_ihipModuleLaunchKernel_CB_ARGS_DATA(cb_data) {};
#define INIT_hipTexRefSetMipmapLevelClamp_CB_ARGS_DATA(cb_data) {};
#define INIT_hipGetTextureObjectTextureDesc_CB_ARGS_DATA(cb_data) {};

// HIP API callbacks ID enumaration
enum hip_api_id_t {
  HIP_API_ID_hipDrvMemcpy3DAsync = 0,
  HIP_API_ID_hipDeviceEnablePeerAccess = 1,
  HIP_API_ID_hipStreamCreateWithPriority = 2,
  HIP_API_ID_hipMemcpyToSymbolAsync = 3,
  HIP_API_ID_hipMallocPitch = 4,
  HIP_API_ID_hipMalloc = 5,
  HIP_API_ID_hipMemsetD16 = 6,
  HIP_API_ID_hipDeviceGetName = 7,
  HIP_API_ID_hipEventRecord = 8,
  HIP_API_ID_hipCtxSynchronize = 9,
  HIP_API_ID_hipSetDevice = 10,
  HIP_API_ID_hipCtxGetApiVersion = 11,
  HIP_API_ID_hipMemcpyFromSymbolAsync = 12,
  HIP_API_ID_hipExtGetLinkTypeAndHopCount = 13,
  HIP_API_ID_hipModuleOccupancyMaxActiveBlocksPerMultiprocessor = 14,
  HIP_API_ID_hipMemset3D = 15,
  HIP_API_ID_hipHostFree = 16,
  HIP_API_ID_hipMemcpy2DToArray = 17,
  HIP_API_ID_hipMemsetD8Async = 18,
  HIP_API_ID_hipCtxGetCacheConfig = 19,
  HIP_API_ID_hipStreamWaitEvent = 20,
  HIP_API_ID_hipDeviceGetStreamPriorityRange = 21,
  HIP_API_ID_hipModuleLoad = 22,
  HIP_API_ID_hipDevicePrimaryCtxSetFlags = 23,
  HIP_API_ID_hipLaunchCooperativeKernel = 24,
  HIP_API_ID_hipLaunchCooperativeKernelMultiDevice = 25,
  HIP_API_ID_hipMemcpyAsync = 26,
  HIP_API_ID_hipMalloc3DArray = 27,
  HIP_API_ID_hipMallocHost = 28,
  HIP_API_ID_hipCtxGetCurrent = 29,
  HIP_API_ID_hipDevicePrimaryCtxGetState = 30,
  HIP_API_ID_hipEventQuery = 31,
  HIP_API_ID_hipEventCreate = 32,
  HIP_API_ID_hipMemGetAddressRange = 33,
  HIP_API_ID_hipMemcpyFromSymbol = 34,
  HIP_API_ID_hipArrayCreate = 35,
  HIP_API_ID_hipStreamGetFlags = 36,
  HIP_API_ID_hipMallocArray = 37,
  HIP_API_ID_hipCtxGetSharedMemConfig = 38,
  HIP_API_ID_hipModuleOccupancyMaxPotentialBlockSize = 39,
  HIP_API_ID_hipMemPtrGetInfo = 40,
  HIP_API_ID_hipFuncGetAttribute = 41,
  HIP_API_ID_hipCtxGetFlags = 42,
  HIP_API_ID_hipStreamDestroy = 43,
  HIP_API_ID___hipPushCallConfiguration = 44,
  HIP_API_ID_hipMemset3DAsync = 45,
  HIP_API_ID_hipMemcpy3D = 46,
  HIP_API_ID_hipInit = 47,
  HIP_API_ID_hipMemcpyAtoH = 48,
  HIP_API_ID_hipStreamGetPriority = 49,
  HIP_API_ID_hipMemset2D = 50,
  HIP_API_ID_hipMemset2DAsync = 51,
  HIP_API_ID_hipDeviceCanAccessPeer = 52,
  HIP_API_ID_hipLaunchByPtr = 53,
  HIP_API_ID_hipLaunchKernel = 54,
  HIP_API_ID_hipMemsetD16Async = 55,
  HIP_API_ID_hipModuleUnload = 56,
  HIP_API_ID_hipHostUnregister = 57,
  HIP_API_ID_hipProfilerStop = 58,
  HIP_API_ID_hipStreamSynchronize = 59,
  HIP_API_ID_hipFreeHost = 60,
  HIP_API_ID_hipDeviceSetCacheConfig = 61,
  HIP_API_ID_hipGetErrorName = 62,
  HIP_API_ID_hipMemcpyHtoD = 63,
  HIP_API_ID_hipModuleGetGlobal = 64,
  HIP_API_ID_hipMemcpyHtoA = 65,
  HIP_API_ID_hipCtxCreate = 66,
  HIP_API_ID_hipMemcpy2D = 67,
  HIP_API_ID_hipIpcCloseMemHandle = 68,
  HIP_API_ID_hipChooseDevice = 69,
  HIP_API_ID_hipDeviceSetSharedMemConfig = 70,
  HIP_API_ID_hipDeviceComputeCapability = 71,
  HIP_API_ID_hipMallocMipmappedArray = 72,
  HIP_API_ID_hipSetupArgument = 73,
  HIP_API_ID_hipProfilerStart = 74,
  HIP_API_ID_hipCtxSetCacheConfig = 75,
  HIP_API_ID_hipFuncSetCacheConfig = 76,
  HIP_API_ID_hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags = 77,
  HIP_API_ID_hipModuleGetTexRef = 78,
  HIP_API_ID_hipMemcpyPeerAsync = 79,
  HIP_API_ID_hipMemcpyWithStream = 80,
  HIP_API_ID_hipConfigureCall = 81,
  HIP_API_ID_hipGetMipmappedArrayLevel = 82,
  HIP_API_ID_hipMemcpy3DAsync = 83,
  HIP_API_ID_hipEventDestroy = 84,
  HIP_API_ID_hipCtxPopCurrent = 85,
  HIP_API_ID_hipGetSymbolAddress = 86,
  HIP_API_ID_hipHostGetFlags = 87,
  HIP_API_ID_hipHostMalloc = 88,
  HIP_API_ID_hipDriverGetVersion = 89,
  HIP_API_ID_hipFreeMipmappedArray = 90,
  HIP_API_ID_hipMemGetInfo = 91,
  HIP_API_ID_hipDeviceReset = 92,
  HIP_API_ID_hipMemset = 93,
  HIP_API_ID_hipMemsetD8 = 94,
  HIP_API_ID_hipMemcpyParam2DAsync = 95,
  HIP_API_ID_hipHostRegister = 96,
  HIP_API_ID_hipCtxSetSharedMemConfig = 97,
  HIP_API_ID_hipArray3DCreate = 98,
  HIP_API_ID_hipIpcOpenMemHandle = 99,
  HIP_API_ID_hipGetLastError = 100,
  HIP_API_ID_hipCtxDestroy = 101,
  HIP_API_ID_hipDeviceGetSharedMemConfig = 102,
  HIP_API_ID_hipDrvMemcpy3D = 103,
  HIP_API_ID_hipMemcpy2DFromArray = 104,
  HIP_API_ID_hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags = 105,
  HIP_API_ID_hipSetDeviceFlags = 106,
  HIP_API_ID_hipHccModuleLaunchKernel = 107,
  HIP_API_ID_hipFree = 108,
  HIP_API_ID_hipOccupancyMaxPotentialBlockSize = 109,
  HIP_API_ID_hipDeviceGetAttribute = 110,
  HIP_API_ID_hipMemcpyDtoH = 111,
  HIP_API_ID_hipCtxDisablePeerAccess = 112,
  HIP_API_ID_hipMallocManaged = 113,
  HIP_API_ID_hipDeviceGetByPCIBusId = 114,
  HIP_API_ID_hipIpcGetMemHandle = 115,
  HIP_API_ID_hipMemcpyHtoDAsync = 116,
  HIP_API_ID_hipCtxGetDevice = 117,
  HIP_API_ID_hipMemcpyDtoD = 118,
  HIP_API_ID_hipModuleLoadData = 119,
  HIP_API_ID_hipDeviceTotalMem = 120,
  HIP_API_ID_hipOccupancyMaxActiveBlocksPerMultiprocessor = 121,
  HIP_API_ID_hipCtxSetCurrent = 122,
  HIP_API_ID_hipGetErrorString = 123,
  HIP_API_ID_hipStreamCreate = 124,
  HIP_API_ID_hipDevicePrimaryCtxRetain = 125,
  HIP_API_ID_hipDeviceDisablePeerAccess = 126,
  HIP_API_ID_hipStreamCreateWithFlags = 127,
  HIP_API_ID_hipMemcpyFromArray = 128,
  HIP_API_ID_hipMemcpy2DAsync = 129,
  HIP_API_ID_hipFuncGetAttributes = 130,
  HIP_API_ID_hipGetSymbolSize = 131,
  HIP_API_ID_hipIpcGetEventHandle = 132,
  HIP_API_ID_hipEventCreateWithFlags = 133,
  HIP_API_ID_hipStreamQuery = 134,
  HIP_API_ID_hipDeviceGetPCIBusId = 135,
  HIP_API_ID_hipMemcpy = 136,
  HIP_API_ID_hipPeekAtLastError = 137,
  HIP_API_ID_hipExtLaunchMultiKernelMultiDevice = 138,
  HIP_API_ID_hipStreamAddCallback = 139,
  HIP_API_ID_hipMemcpyToArray = 140,
  HIP_API_ID_hipMemsetD32 = 141,
  HIP_API_ID_hipExtModuleLaunchKernel = 142,
  HIP_API_ID_hipDeviceSynchronize = 143,
  HIP_API_ID_hipDeviceGetCacheConfig = 144,
  HIP_API_ID_hipMalloc3D = 145,
  HIP_API_ID_hipPointerGetAttributes = 146,
  HIP_API_ID_hipMemsetAsync = 147,
  HIP_API_ID_hipMemcpyToSymbol = 148,
  HIP_API_ID_hipModuleOccupancyMaxPotentialBlockSizeWithFlags = 149,
  HIP_API_ID_hipCtxPushCurrent = 150,
  HIP_API_ID_hipMemcpyPeer = 151,
  HIP_API_ID_hipEventSynchronize = 152,
  HIP_API_ID_hipMemcpyDtoDAsync = 153,
  HIP_API_ID_hipExtMallocWithFlags = 154,
  HIP_API_ID_hipCtxEnablePeerAccess = 155,
  HIP_API_ID_hipMemAllocHost = 156,
  HIP_API_ID_hipMemcpyDtoHAsync = 157,
  HIP_API_ID_hipModuleLaunchKernel = 158,
  HIP_API_ID_hipMemAllocPitch = 159,
  HIP_API_ID_hipMemcpy2DFromArrayAsync = 160,
  HIP_API_ID_hipDeviceGetLimit = 161,
  HIP_API_ID_hipModuleLoadDataEx = 162,
  HIP_API_ID_hipRuntimeGetVersion = 163,
  HIP_API_ID___hipPopCallConfiguration = 164,
  HIP_API_ID_hipGetDeviceProperties = 165,
  HIP_API_ID_hipDeviceGet = 166,
  HIP_API_ID_hipFreeArray = 167,
  HIP_API_ID_hipEventElapsedTime = 168,
  HIP_API_ID_hipDevicePrimaryCtxRelease = 169,
  HIP_API_ID_hipHostGetDevicePointer = 170,
  HIP_API_ID_hipMemcpyParam2D = 171,
  HIP_API_ID_hipDevicePrimaryCtxReset = 172,
  HIP_API_ID_hipModuleGetFunction = 173,
  HIP_API_ID_hipMemsetD32Async = 174,
  HIP_API_ID_hipGetDevice = 175,
  HIP_API_ID_hipGetDeviceCount = 176,
  HIP_API_ID_hipIpcOpenEventHandle = 177,
  HIP_API_ID_NUMBER = 178,

  HIP_API_ID_NONE = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetAddress = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetBorderColor = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyDtoA = HIP_API_ID_NUMBER,
  HIP_API_ID_hipArrayGetDescriptor = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexObjectGetResourceViewDesc = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyAtoHAsync = HIP_API_ID_NUMBER,
  HIP_API_ID_hipDestroyTextureObject = HIP_API_ID_NUMBER,
  HIP_API_ID_hipArray3DGetDescriptor = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetAddress = HIP_API_ID_NUMBER,
  HIP_API_ID_hipArrayDestroy = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetMaxAnisotropy = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetMipmapFilterMode = HIP_API_ID_NUMBER,
  HIP_API_ID_hipDeviceGetCount = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyArrayToArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipBindTexture2D = HIP_API_ID_NUMBER,
  HIP_API_ID_hipCreateTextureObject = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyHtoAAsync = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyAtoA = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyAtoD = HIP_API_ID_NUMBER,
  HIP_API_ID_hipBindTextureToMipmappedArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetMipmapLevelClamp = HIP_API_ID_NUMBER,
  HIP_API_ID_hipBindTextureToArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetFormat = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexObjectGetTextureDesc = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetMaxAnisotropy = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexObjectDestroy = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpy2DArrayToArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMipmappedArrayDestroy = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetFilterMode = HIP_API_ID_NUMBER,
  HIP_API_ID_hipGetChannelDesc = HIP_API_ID_NUMBER,
  HIP_API_ID_hipHccGetAcceleratorView = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetFormat = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyToArrayAsync = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetAddress2D = HIP_API_ID_NUMBER,
  HIP_API_ID_hipGetTextureObjectResourceViewDesc = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetFlags = HIP_API_ID_NUMBER,
  HIP_API_ID_hipUnbindTexture = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetMipmapLevelBias = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetFilterMode = HIP_API_ID_NUMBER,
  HIP_API_ID_hipGetTextureAlignmentOffset = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMipmappedArrayGetLevel = HIP_API_ID_NUMBER,
  HIP_API_ID_hipCreateSurfaceObject = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMipmappedArrayCreate = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexObjectGetResourceDesc = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetAddressMode = HIP_API_ID_NUMBER,
  HIP_API_ID_hipGetTextureObjectResourceDesc = HIP_API_ID_NUMBER,
  HIP_API_ID_hipModuleLaunchKernelExt = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpy2DToArrayAsync = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetBorderColor = HIP_API_ID_NUMBER,
  HIP_API_ID_hipDestroySurfaceObject = HIP_API_ID_NUMBER,
  HIP_API_ID_hipGetTextureReference = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetMipmapFilterMode = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexObjectCreate = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetAddressMode = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetMipmapLevelBias = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetFlags = HIP_API_ID_NUMBER,
  HIP_API_ID_hipMemcpyFromArrayAsync = HIP_API_ID_NUMBER,
  HIP_API_ID_hipBindTexture = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetMipmappedArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefGetMipmappedArray = HIP_API_ID_NUMBER,
  HIP_API_ID_hipSetValidDevices = HIP_API_ID_NUMBER,
  HIP_API_ID_hipHccGetAccelerator = HIP_API_ID_NUMBER,
  HIP_API_ID_ihipModuleLaunchKernel = HIP_API_ID_NUMBER,
  HIP_API_ID_hipTexRefSetMipmapLevelClamp = HIP_API_ID_NUMBER,
  HIP_API_ID_hipGetTextureObjectTextureDesc = HIP_API_ID_NUMBER,
};

// Return HIP API string
inline const char* hip_api_name(const uint32_t id) {
  switch(id) {
    case HIP_API_ID_hipDrvMemcpy3DAsync: return "hipDrvMemcpy3DAsync";
    case HIP_API_ID_hipDeviceEnablePeerAccess: return "hipDeviceEnablePeerAccess";
    case HIP_API_ID_hipStreamCreateWithPriority: return "hipStreamCreateWithPriority";
    case HIP_API_ID_hipMemcpyToSymbolAsync: return "hipMemcpyToSymbolAsync";
    case HIP_API_ID_hipMallocPitch: return "hipMallocPitch";
    case HIP_API_ID_hipMalloc: return "hipMalloc";
    case HIP_API_ID_hipMemsetD16: return "hipMemsetD16";
    case HIP_API_ID_hipDeviceGetName: return "hipDeviceGetName";
    case HIP_API_ID_hipEventRecord: return "hipEventRecord";
    case HIP_API_ID_hipCtxSynchronize: return "hipCtxSynchronize";
    case HIP_API_ID_hipSetDevice: return "hipSetDevice";
    case HIP_API_ID_hipCtxGetApiVersion: return "hipCtxGetApiVersion";
    case HIP_API_ID_hipMemcpyFromSymbolAsync: return "hipMemcpyFromSymbolAsync";
    case HIP_API_ID_hipExtGetLinkTypeAndHopCount: return "hipExtGetLinkTypeAndHopCount";
    case HIP_API_ID_hipModuleOccupancyMaxActiveBlocksPerMultiprocessor: return "hipModuleOccupancyMaxActiveBlocksPerMultiprocessor";
    case HIP_API_ID_hipMemset3D: return "hipMemset3D";
    case HIP_API_ID_hipHostFree: return "hipHostFree";
    case HIP_API_ID_hipMemcpy2DToArray: return "hipMemcpy2DToArray";
    case HIP_API_ID_hipMemsetD8Async: return "hipMemsetD8Async";
    case HIP_API_ID_hipCtxGetCacheConfig: return "hipCtxGetCacheConfig";
    case HIP_API_ID_hipStreamWaitEvent: return "hipStreamWaitEvent";
    case HIP_API_ID_hipDeviceGetStreamPriorityRange: return "hipDeviceGetStreamPriorityRange";
    case HIP_API_ID_hipModuleLoad: return "hipModuleLoad";
    case HIP_API_ID_hipDevicePrimaryCtxSetFlags: return "hipDevicePrimaryCtxSetFlags";
    case HIP_API_ID_hipLaunchCooperativeKernel: return "hipLaunchCooperativeKernel";
    case HIP_API_ID_hipLaunchCooperativeKernelMultiDevice: return "hipLaunchCooperativeKernelMultiDevice";
    case HIP_API_ID_hipMemcpyAsync: return "hipMemcpyAsync";
    case HIP_API_ID_hipMalloc3DArray: return "hipMalloc3DArray";
    case HIP_API_ID_hipMallocHost: return "hipMallocHost";
    case HIP_API_ID_hipCtxGetCurrent: return "hipCtxGetCurrent";
    case HIP_API_ID_hipDevicePrimaryCtxGetState: return "hipDevicePrimaryCtxGetState";
    case HIP_API_ID_hipEventQuery: return "hipEventQuery";
    case HIP_API_ID_hipEventCreate: return "hipEventCreate";
    case HIP_API_ID_hipMemGetAddressRange: return "hipMemGetAddressRange";
    case HIP_API_ID_hipMemcpyFromSymbol: return "hipMemcpyFromSymbol";
    case HIP_API_ID_hipArrayCreate: return "hipArrayCreate";
    case HIP_API_ID_hipStreamGetFlags: return "hipStreamGetFlags";
    case HIP_API_ID_hipMallocArray: return "hipMallocArray";
    case HIP_API_ID_hipCtxGetSharedMemConfig: return "hipCtxGetSharedMemConfig";
    case HIP_API_ID_hipModuleOccupancyMaxPotentialBlockSize: return "hipModuleOccupancyMaxPotentialBlockSize";
    case HIP_API_ID_hipMemPtrGetInfo: return "hipMemPtrGetInfo";
    case HIP_API_ID_hipFuncGetAttribute: return "hipFuncGetAttribute";
    case HIP_API_ID_hipCtxGetFlags: return "hipCtxGetFlags";
    case HIP_API_ID_hipStreamDestroy: return "hipStreamDestroy";
    case HIP_API_ID___hipPushCallConfiguration: return "__hipPushCallConfiguration";
    case HIP_API_ID_hipMemset3DAsync: return "hipMemset3DAsync";
    case HIP_API_ID_hipMemcpy3D: return "hipMemcpy3D";
    case HIP_API_ID_hipInit: return "hipInit";
    case HIP_API_ID_hipMemcpyAtoH: return "hipMemcpyAtoH";
    case HIP_API_ID_hipStreamGetPriority: return "hipStreamGetPriority";
    case HIP_API_ID_hipMemset2D: return "hipMemset2D";
    case HIP_API_ID_hipMemset2DAsync: return "hipMemset2DAsync";
    case HIP_API_ID_hipDeviceCanAccessPeer: return "hipDeviceCanAccessPeer";
    case HIP_API_ID_hipLaunchByPtr: return "hipLaunchByPtr";
    case HIP_API_ID_hipLaunchKernel: return "hipLaunchKernel";
    case HIP_API_ID_hipMemsetD16Async: return "hipMemsetD16Async";
    case HIP_API_ID_hipModuleUnload: return "hipModuleUnload";
    case HIP_API_ID_hipHostUnregister: return "hipHostUnregister";
    case HIP_API_ID_hipProfilerStop: return "hipProfilerStop";
    case HIP_API_ID_hipStreamSynchronize: return "hipStreamSynchronize";
    case HIP_API_ID_hipFreeHost: return "hipFreeHost";
    case HIP_API_ID_hipDeviceSetCacheConfig: return "hipDeviceSetCacheConfig";
    case HIP_API_ID_hipGetErrorName: return "hipGetErrorName";
    case HIP_API_ID_hipMemcpyHtoD: return "hipMemcpyHtoD";
    case HIP_API_ID_hipModuleGetGlobal: return "hipModuleGetGlobal";
    case HIP_API_ID_hipMemcpyHtoA: return "hipMemcpyHtoA";
    case HIP_API_ID_hipCtxCreate: return "hipCtxCreate";
    case HIP_API_ID_hipMemcpy2D: return "hipMemcpy2D";
    case HIP_API_ID_hipIpcCloseMemHandle: return "hipIpcCloseMemHandle";
    case HIP_API_ID_hipChooseDevice: return "hipChooseDevice";
    case HIP_API_ID_hipDeviceSetSharedMemConfig: return "hipDeviceSetSharedMemConfig";
    case HIP_API_ID_hipDeviceComputeCapability: return "hipDeviceComputeCapability";
    case HIP_API_ID_hipMallocMipmappedArray: return "hipMallocMipmappedArray";
    case HIP_API_ID_hipSetupArgument: return "hipSetupArgument";
    case HIP_API_ID_hipProfilerStart: return "hipProfilerStart";
    case HIP_API_ID_hipCtxSetCacheConfig: return "hipCtxSetCacheConfig";
    case HIP_API_ID_hipFuncSetCacheConfig: return "hipFuncSetCacheConfig";
    case HIP_API_ID_hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags: return "hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags";
    case HIP_API_ID_hipModuleGetTexRef: return "hipModuleGetTexRef";
    case HIP_API_ID_hipMemcpyPeerAsync: return "hipMemcpyPeerAsync";
    case HIP_API_ID_hipMemcpyWithStream: return "hipMemcpyWithStream";
    case HIP_API_ID_hipConfigureCall: return "hipConfigureCall";
    case HIP_API_ID_hipGetMipmappedArrayLevel: return "hipGetMipmappedArrayLevel";
    case HIP_API_ID_hipMemcpy3DAsync: return "hipMemcpy3DAsync";
    case HIP_API_ID_hipEventDestroy: return "hipEventDestroy";
    case HIP_API_ID_hipCtxPopCurrent: return "hipCtxPopCurrent";
    case HIP_API_ID_hipGetSymbolAddress: return "hipGetSymbolAddress";
    case HIP_API_ID_hipHostGetFlags: return "hipHostGetFlags";
    case HIP_API_ID_hipHostMalloc: return "hipHostMalloc";
    case HIP_API_ID_hipDriverGetVersion: return "hipDriverGetVersion";
    case HIP_API_ID_hipFreeMipmappedArray: return "hipFreeMipmappedArray";
    case HIP_API_ID_hipMemGetInfo: return "hipMemGetInfo";
    case HIP_API_ID_hipDeviceReset: return "hipDeviceReset";
    case HIP_API_ID_hipMemset: return "hipMemset";
    case HIP_API_ID_hipMemsetD8: return "hipMemsetD8";
    case HIP_API_ID_hipMemcpyParam2DAsync: return "hipMemcpyParam2DAsync";
    case HIP_API_ID_hipHostRegister: return "hipHostRegister";
    case HIP_API_ID_hipCtxSetSharedMemConfig: return "hipCtxSetSharedMemConfig";
    case HIP_API_ID_hipArray3DCreate: return "hipArray3DCreate";
    case HIP_API_ID_hipIpcOpenMemHandle: return "hipIpcOpenMemHandle";
    case HIP_API_ID_hipGetLastError: return "hipGetLastError";
    case HIP_API_ID_hipCtxDestroy: return "hipCtxDestroy";
    case HIP_API_ID_hipDeviceGetSharedMemConfig: return "hipDeviceGetSharedMemConfig";
    case HIP_API_ID_hipDrvMemcpy3D: return "hipDrvMemcpy3D";
    case HIP_API_ID_hipMemcpy2DFromArray: return "hipMemcpy2DFromArray";
    case HIP_API_ID_hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags: return "hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags";
    case HIP_API_ID_hipSetDeviceFlags: return "hipSetDeviceFlags";
    case HIP_API_ID_hipHccModuleLaunchKernel: return "hipHccModuleLaunchKernel";
    case HIP_API_ID_hipFree: return "hipFree";
    case HIP_API_ID_hipOccupancyMaxPotentialBlockSize: return "hipOccupancyMaxPotentialBlockSize";
    case HIP_API_ID_hipDeviceGetAttribute: return "hipDeviceGetAttribute";
    case HIP_API_ID_hipMemcpyDtoH: return "hipMemcpyDtoH";
    case HIP_API_ID_hipCtxDisablePeerAccess: return "hipCtxDisablePeerAccess";
    case HIP_API_ID_hipMallocManaged: return "hipMallocManaged";
    case HIP_API_ID_hipDeviceGetByPCIBusId: return "hipDeviceGetByPCIBusId";
    case HIP_API_ID_hipIpcGetMemHandle: return "hipIpcGetMemHandle";
    case HIP_API_ID_hipMemcpyHtoDAsync: return "hipMemcpyHtoDAsync";
    case HIP_API_ID_hipCtxGetDevice: return "hipCtxGetDevice";
    case HIP_API_ID_hipMemcpyDtoD: return "hipMemcpyDtoD";
    case HIP_API_ID_hipModuleLoadData: return "hipModuleLoadData";
    case HIP_API_ID_hipDeviceTotalMem: return "hipDeviceTotalMem";
    case HIP_API_ID_hipOccupancyMaxActiveBlocksPerMultiprocessor: return "hipOccupancyMaxActiveBlocksPerMultiprocessor";
    case HIP_API_ID_hipCtxSetCurrent: return "hipCtxSetCurrent";
    case HIP_API_ID_hipGetErrorString: return "hipGetErrorString";
    case HIP_API_ID_hipStreamCreate: return "hipStreamCreate";
    case HIP_API_ID_hipDevicePrimaryCtxRetain: return "hipDevicePrimaryCtxRetain";
    case HIP_API_ID_hipDeviceDisablePeerAccess: return "hipDeviceDisablePeerAccess";
    case HIP_API_ID_hipStreamCreateWithFlags: return "hipStreamCreateWithFlags";
    case HIP_API_ID_hipMemcpyFromArray: return "hipMemcpyFromArray";
    case HIP_API_ID_hipMemcpy2DAsync: return "hipMemcpy2DAsync";
    case HIP_API_ID_hipFuncGetAttributes: return "hipFuncGetAttributes";
    case HIP_API_ID_hipGetSymbolSize: return "hipGetSymbolSize";
    case HIP_API_ID_hipIpcGetEventHandle: return "hipIpcGetEventHandle";
    case HIP_API_ID_hipEventCreateWithFlags: return "hipEventCreateWithFlags";
    case HIP_API_ID_hipStreamQuery: return "hipStreamQuery";
    case HIP_API_ID_hipDeviceGetPCIBusId: return "hipDeviceGetPCIBusId";
    case HIP_API_ID_hipMemcpy: return "hipMemcpy";
    case HIP_API_ID_hipPeekAtLastError: return "hipPeekAtLastError";
    case HIP_API_ID_hipExtLaunchMultiKernelMultiDevice: return "hipExtLaunchMultiKernelMultiDevice";
    case HIP_API_ID_hipStreamAddCallback: return "hipStreamAddCallback";
    case HIP_API_ID_hipMemcpyToArray: return "hipMemcpyToArray";
    case HIP_API_ID_hipMemsetD32: return "hipMemsetD32";
    case HIP_API_ID_hipExtModuleLaunchKernel: return "hipExtModuleLaunchKernel";
    case HIP_API_ID_hipDeviceSynchronize: return "hipDeviceSynchronize";
    case HIP_API_ID_hipDeviceGetCacheConfig: return "hipDeviceGetCacheConfig";
    case HIP_API_ID_hipMalloc3D: return "hipMalloc3D";
    case HIP_API_ID_hipPointerGetAttributes: return "hipPointerGetAttributes";
    case HIP_API_ID_hipMemsetAsync: return "hipMemsetAsync";
    case HIP_API_ID_hipMemcpyToSymbol: return "hipMemcpyToSymbol";
    case HIP_API_ID_hipModuleOccupancyMaxPotentialBlockSizeWithFlags: return "hipModuleOccupancyMaxPotentialBlockSizeWithFlags";
    case HIP_API_ID_hipCtxPushCurrent: return "hipCtxPushCurrent";
    case HIP_API_ID_hipMemcpyPeer: return "hipMemcpyPeer";
    case HIP_API_ID_hipEventSynchronize: return "hipEventSynchronize";
    case HIP_API_ID_hipMemcpyDtoDAsync: return "hipMemcpyDtoDAsync";
    case HIP_API_ID_hipExtMallocWithFlags: return "hipExtMallocWithFlags";
    case HIP_API_ID_hipCtxEnablePeerAccess: return "hipCtxEnablePeerAccess";
    case HIP_API_ID_hipMemAllocHost: return "hipMemAllocHost";
    case HIP_API_ID_hipMemcpyDtoHAsync: return "hipMemcpyDtoHAsync";
    case HIP_API_ID_hipModuleLaunchKernel: return "hipModuleLaunchKernel";
    case HIP_API_ID_hipMemAllocPitch: return "hipMemAllocPitch";
    case HIP_API_ID_hipMemcpy2DFromArrayAsync: return "hipMemcpy2DFromArrayAsync";
    case HIP_API_ID_hipDeviceGetLimit: return "hipDeviceGetLimit";
    case HIP_API_ID_hipModuleLoadDataEx: return "hipModuleLoadDataEx";
    case HIP_API_ID_hipRuntimeGetVersion: return "hipRuntimeGetVersion";
    case HIP_API_ID___hipPopCallConfiguration: return "__hipPopCallConfiguration";
    case HIP_API_ID_hipGetDeviceProperties: return "hipGetDeviceProperties";
    case HIP_API_ID_hipDeviceGet: return "hipDeviceGet";
    case HIP_API_ID_hipFreeArray: return "hipFreeArray";
    case HIP_API_ID_hipEventElapsedTime: return "hipEventElapsedTime";
    case HIP_API_ID_hipDevicePrimaryCtxRelease: return "hipDevicePrimaryCtxRelease";
    case HIP_API_ID_hipHostGetDevicePointer: return "hipHostGetDevicePointer";
    case HIP_API_ID_hipMemcpyParam2D: return "hipMemcpyParam2D";
    case HIP_API_ID_hipDevicePrimaryCtxReset: return "hipDevicePrimaryCtxReset";
    case HIP_API_ID_hipModuleGetFunction: return "hipModuleGetFunction";
    case HIP_API_ID_hipMemsetD32Async: return "hipMemsetD32Async";
    case HIP_API_ID_hipGetDevice: return "hipGetDevice";
    case HIP_API_ID_hipGetDeviceCount: return "hipGetDeviceCount";
    case HIP_API_ID_hipIpcOpenEventHandle: return "hipIpcOpenEventHandle";
  };
  return "unknown";
};

// HIP API callbacks data structure
typedef struct hip_api_data_s {
  uint64_t correlation_id;
  uint32_t phase;
  union {
    struct {
      const HIP_MEMCPY3D* pCopy;
      hipStream_t stream;
    } hipDrvMemcpy3DAsync;
    struct {
      int peerDeviceId;
      unsigned int flags;
    } hipDeviceEnablePeerAccess;
    struct {
      hipStream_t* stream;
      unsigned int flags;
      int priority;
    } hipStreamCreateWithPriority;
    struct {
      const void* symbol;
      const void* src;
      size_t sizeBytes;
      size_t offset;
      hipMemcpyKind kind;
      hipStream_t stream;
    } hipMemcpyToSymbolAsync;
    struct {
      void** ptr;
      size_t* pitch;
      size_t width;
      size_t height;
    } hipMallocPitch;
    struct {
      void** ptr;
      size_t size;
    } hipMalloc;
    struct {
      hipDeviceptr_t dest;
      unsigned short value;
      size_t count;
    } hipMemsetD16;
    struct {
      char* name;
      int len;
      hipDevice_t device;
    } hipDeviceGetName;
    struct {
      hipEvent_t event;
      hipStream_t stream;
    } hipEventRecord;
    struct {
      int deviceId;
    } hipSetDevice;
    struct {
      hipCtx_t ctx;
      int* apiVersion;
    } hipCtxGetApiVersion;
    struct {
      void* dst;
      const void* symbol;
      size_t sizeBytes;
      size_t offset;
      hipMemcpyKind kind;
      hipStream_t stream;
    } hipMemcpyFromSymbolAsync;
    struct {
      int device1;
      int device2;
      unsigned int* linktype;
      unsigned int* hopcount;
    } hipExtGetLinkTypeAndHopCount;
    struct {
      int* numBlocks;
      hipFunction_t f;
      int blockSize;
      size_t dynSharedMemPerBlk;
    } hipModuleOccupancyMaxActiveBlocksPerMultiprocessor;
    struct {
      hipPitchedPtr pitchedDevPtr;
      int value;
      hipExtent extent;
    } hipMemset3D;
    struct {
      void* ptr;
    } hipHostFree;
    struct {
      hipArray* dst;
      size_t wOffset;
      size_t hOffset;
      const void* src;
      size_t spitch;
      size_t width;
      size_t height;
      hipMemcpyKind kind;
    } hipMemcpy2DToArray;
    struct {
      hipDeviceptr_t dest;
      unsigned char value;
      size_t count;
      hipStream_t stream;
    } hipMemsetD8Async;
    struct {
      hipFuncCache_t* cacheConfig;
    } hipCtxGetCacheConfig;
    struct {
      hipStream_t stream;
      hipEvent_t event;
      unsigned int flags;
    } hipStreamWaitEvent;
    struct {
      int* leastPriority;
      int* greatestPriority;
    } hipDeviceGetStreamPriorityRange;
    struct {
      hipModule_t* module;
      const char* fname;
    } hipModuleLoad;
    struct {
      hipDevice_t dev;
      unsigned int flags;
    } hipDevicePrimaryCtxSetFlags;
    struct {
      const void* f;
      dim3 gridDim;
      dim3 blockDimX;
      void** kernelParams;
      unsigned int sharedMemBytes;
      hipStream_t stream;
    } hipLaunchCooperativeKernel;
    struct {
      hipLaunchParams* launchParamsList;
      int numDevices;
      unsigned int flags;
    } hipLaunchCooperativeKernelMultiDevice;
    struct {
      void* dst;
      const void* src;
      size_t sizeBytes;
      hipMemcpyKind kind;
      hipStream_t stream;
    } hipMemcpyAsync;
    struct {
      hipArray_t* array;
      const hipChannelFormatDesc* desc;
      hipExtent extent;
      unsigned int flags;
    } hipMalloc3DArray;
    struct {
      void** ptr;
      size_t size;
    } hipMallocHost;
    struct {
      hipCtx_t* ctx;
    } hipCtxGetCurrent;
    struct {
      hipDevice_t dev;
      unsigned int* flags;
      int* active;
    } hipDevicePrimaryCtxGetState;
    struct {
      hipEvent_t event;
    } hipEventQuery;
    struct {
      hipEvent_t* event;
    } hipEventCreate;
    struct {
      hipDeviceptr_t* pbase;
      size_t* psize;
      hipDeviceptr_t dptr;
    } hipMemGetAddressRange;
    struct {
      void* dst;
      const void* symbol;
      size_t sizeBytes;
      size_t offset;
      hipMemcpyKind kind;
    } hipMemcpyFromSymbol;
    struct {
      hipArray** pHandle;
      const HIP_ARRAY_DESCRIPTOR* pAllocateArray;
    } hipArrayCreate;
    struct {
      hipStream_t stream;
      unsigned int* flags;
    } hipStreamGetFlags;
    struct {
      hipArray** array;
      const hipChannelFormatDesc* desc;
      size_t width;
      size_t height;
      unsigned int flags;
    } hipMallocArray;
    struct {
      hipSharedMemConfig* pConfig;
    } hipCtxGetSharedMemConfig;
    struct {
      int* gridSize;
      int* blockSize;
      hipFunction_t f;
      size_t dynSharedMemPerBlk;
      int blockSizeLimit;
    } hipModuleOccupancyMaxPotentialBlockSize;
    struct {
      void* ptr;
      size_t* size;
    } hipMemPtrGetInfo;
    struct {
      int* value;
      hipFunction_attribute attrib;
      hipFunction_t hfunc;
    } hipFuncGetAttribute;
    struct {
      unsigned int* flags;
    } hipCtxGetFlags;
    struct {
      hipStream_t stream;
    } hipStreamDestroy;
    struct {
      dim3 gridDim;
      dim3 blockDim;
      size_t sharedMem;
      hipStream_t stream;
    } __hipPushCallConfiguration;
    struct {
      hipPitchedPtr pitchedDevPtr;
      int value;
      hipExtent extent;
      hipStream_t stream;
    } hipMemset3DAsync;
    struct {
      const hipMemcpy3DParms* p;
    } hipMemcpy3D;
    struct {
      unsigned int flags;
    } hipInit;
    struct {
      void* dst;
      hipArray* srcArray;
      size_t srcOffset;
      size_t count;
    } hipMemcpyAtoH;
    struct {
      void* dst;
      size_t pitch;
      int value;
      size_t width;
      size_t height;
    } hipMemset2D;
    struct {
      void* dst;
      size_t pitch;
      int value;
      size_t width;
      size_t height;
      hipStream_t stream;
    } hipMemset2DAsync;
    struct {
      int* canAccessPeer;
      int deviceId;
      int peerDeviceId;
    } hipDeviceCanAccessPeer;
    struct {
      const void* hostFunction;
    } hipLaunchByPtr;
    struct {
      const void* function_address;
      dim3 numBlocks;
      dim3 dimBlocks;
      void** args;
      size_t sharedMemBytes;
      hipStream_t stream;
    } hipLaunchKernel;
    struct {
      hipDeviceptr_t dest;
      unsigned short value;
      size_t count;
      hipStream_t stream;
    } hipMemsetD16Async;
    struct {
      hipModule_t module;
    } hipModuleUnload;
    struct {
      void* hostPtr;
    } hipHostUnregister;
    struct {
      hipStream_t stream;
    } hipStreamSynchronize;
    struct {
      void* ptr;
    } hipFreeHost;
    struct {
      hipFuncCache_t cacheConfig;
    } hipDeviceSetCacheConfig;
    struct {
      hipDeviceptr_t dst;
      void* src;
      size_t sizeBytes;
    } hipMemcpyHtoD;
    struct {
      hipDeviceptr_t* dptr;
      size_t* bytes;
      hipModule_t hmod;
      const char* name;
    } hipModuleGetGlobal;
    struct {
      hipArray* dstArray;
      size_t dstOffset;
      const void* srcHost;
      size_t count;
    } hipMemcpyHtoA;
    struct {
      hipCtx_t* ctx;
      unsigned int flags;
      hipDevice_t device;
    } hipCtxCreate;
    struct {
      void* dst;
      size_t dpitch;
      const void* src;
      size_t spitch;
      size_t width;
      size_t height;
      hipMemcpyKind kind;
    } hipMemcpy2D;
    struct {
      void* devPtr;
    } hipIpcCloseMemHandle;
    struct {
      int* device;
      const hipDeviceProp_t* prop;
    } hipChooseDevice;
    struct {
      hipSharedMemConfig config;
    } hipDeviceSetSharedMemConfig;
    struct {
      int* major;
      int* minor;
      hipDevice_t device;
    } hipDeviceComputeCapability;
    struct {
      hipMipmappedArray_t* mipmappedArray;
      const hipChannelFormatDesc* desc;
      hipExtent extent;
      unsigned int numLevels;
      unsigned int flags;
    } hipMallocMipmappedArray;
    struct {
      const void* arg;
      size_t size;
      size_t offset;
    } hipSetupArgument;
    struct {
      hipFuncCache_t cacheConfig;
    } hipCtxSetCacheConfig;
    struct {
      const void* func;
      hipFuncCache_t config;
    } hipFuncSetCacheConfig;
    struct {
      int* numBlocks;
      hipFunction_t f;
      int blockSize;
      size_t dynSharedMemPerBlk;
      unsigned int flags;
    } hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags;
    struct {
      textureReference** texRef;
      hipModule_t hmod;
      const char* name;
    } hipModuleGetTexRef;
    struct {
      void* dst;
      int dstDeviceId;
      const void* src;
      int srcDevice;
      size_t sizeBytes;
      hipStream_t stream;
    } hipMemcpyPeerAsync;
    struct {
      void* dst;
      const void* src;
      size_t sizeBytes;
      hipMemcpyKind kind;
      hipStream_t stream;
    } hipMemcpyWithStream;
    struct {
      dim3 gridDim;
      dim3 blockDim;
      size_t sharedMem;
      hipStream_t stream;
    } hipConfigureCall;
    struct {
      hipArray_t* levelArray;
      hipMipmappedArray_const_t mipmappedArray;
      unsigned int level;
    } hipGetMipmappedArrayLevel;
    struct {
      const hipMemcpy3DParms* p;
      hipStream_t stream;
    } hipMemcpy3DAsync;
    struct {
      hipEvent_t event;
    } hipEventDestroy;
    struct {
      hipCtx_t* ctx;
    } hipCtxPopCurrent;
    struct {
      void** devPtr;
      const void* symbol;
    } hipGetSymbolAddress;
    struct {
      unsigned int* flagsPtr;
      void* hostPtr;
    } hipHostGetFlags;
    struct {
      void** ptr;
      size_t size;
      unsigned int flags;
    } hipHostMalloc;
    struct {
      int* driverVersion;
    } hipDriverGetVersion;
    struct {
      hipMipmappedArray_t mipmappedArray;
    } hipFreeMipmappedArray;
    struct {
      size_t* free;
      size_t* total;
    } hipMemGetInfo;
    struct {
      void* dst;
      int value;
      size_t sizeBytes;
    } hipMemset;
    struct {
      hipDeviceptr_t dest;
      unsigned char value;
      size_t count;
    } hipMemsetD8;
    struct {
      const hip_Memcpy2D* pCopy;
      hipStream_t stream;
    } hipMemcpyParam2DAsync;
    struct {
      void* hostPtr;
      size_t sizeBytes;
      unsigned int flags;
    } hipHostRegister;
    struct {
      hipSharedMemConfig config;
    } hipCtxSetSharedMemConfig;
    struct {
      hipArray** array;
      const HIP_ARRAY3D_DESCRIPTOR* pAllocateArray;
    } hipArray3DCreate;
    struct {
      void** devPtr;
      hipIpcMemHandle_t handle;
      unsigned int flags;
    } hipIpcOpenMemHandle;
    struct {
      hipCtx_t ctx;
    } hipCtxDestroy;
    struct {
      hipSharedMemConfig* pConfig;
    } hipDeviceGetSharedMemConfig;
    struct {
      const HIP_MEMCPY3D* pCopy;
    } hipDrvMemcpy3D;
    struct {
      void* dst;
      size_t dpitch;
      hipArray_const_t src;
      size_t wOffset;
      size_t hOffset;
      size_t width;
      size_t height;
      hipMemcpyKind kind;
    } hipMemcpy2DFromArray;
    struct {
      int* numBlocks;
      const void* f;
      int blockSize;
      size_t dynamicSMemSize;
      unsigned int flags;
    } hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags;
    struct {
      unsigned int flags;
    } hipSetDeviceFlags;
    struct {
      hipFunction_t f;
      unsigned int gridDimX;
      unsigned int gridDimY;
      unsigned int gridDimZ;
      unsigned int blockDimX;
      unsigned int blockDimY;
      unsigned int blockDimZ;
      size_t sharedMemBytes;
      hipStream_t hStream;
      void** kernelParams;
      void** extra;
      hipEvent_t startEvent;
      hipEvent_t stopEvent;
    } hipHccModuleLaunchKernel;
    struct {
      void* ptr;
    } hipFree;
    struct {
      int* gridSize;
      int* blockSize;
      const void* f;
      size_t dynSharedMemPerBlk;
      int blockSizeLimit;
    } hipOccupancyMaxPotentialBlockSize;
    struct {
      int* pi;
      hipDeviceAttribute_t attr;
      int deviceId;
    } hipDeviceGetAttribute;
    struct {
      void* dst;
      hipDeviceptr_t src;
      size_t sizeBytes;
    } hipMemcpyDtoH;
    struct {
      hipCtx_t peerCtx;
    } hipCtxDisablePeerAccess;
    struct {
      void** devPtr;
      size_t size;
      unsigned int flags;
    } hipMallocManaged;
    struct {
      int* device;
      const char* pciBusId;
    } hipDeviceGetByPCIBusId;
    struct {
      hipIpcMemHandle_t* handle;
      void* devPtr;
    } hipIpcGetMemHandle;
    struct {
      hipDeviceptr_t dst;
      void* src;
      size_t sizeBytes;
      hipStream_t stream;
    } hipMemcpyHtoDAsync;
    struct {
      hipDevice_t* device;
    } hipCtxGetDevice;
    struct {
      hipDeviceptr_t dst;
      hipDeviceptr_t src;
      size_t sizeBytes;
    } hipMemcpyDtoD;
    struct {
      hipModule_t* module;
      const void* image;
    } hipModuleLoadData;
    struct {
      size_t* bytes;
      hipDevice_t device;
    } hipDeviceTotalMem;
    struct {
      int* numBlocks;
      const void* f;
      int blockSize;
      size_t dynamicSMemSize;
    } hipOccupancyMaxActiveBlocksPerMultiprocessor;
    struct {
      hipCtx_t ctx;
    } hipCtxSetCurrent;
    struct {
      hipStream_t* stream;
    } hipStreamCreate;
    struct {
      hipCtx_t* pctx;
      hipDevice_t dev;
    } hipDevicePrimaryCtxRetain;
    struct {
      int peerDeviceId;
    } hipDeviceDisablePeerAccess;
    struct {
      hipStream_t* stream;
      unsigned int flags;
    } hipStreamCreateWithFlags;
    struct {
      void* dst;
      hipArray_const_t srcArray;
      size_t wOffset;
      size_t hOffset;
      size_t count;
      hipMemcpyKind kind;
    } hipMemcpyFromArray;
    struct {
      void* dst;
      size_t dpitch;
      const void* src;
      size_t spitch;
      size_t width;
      size_t height;
      hipMemcpyKind kind;
      hipStream_t stream;
    } hipMemcpy2DAsync;
    struct {
      hipFuncAttributes* attr;
      const void* func;
    } hipFuncGetAttributes;
    struct {
      size_t* size;
      const void* symbol;
    } hipGetSymbolSize;
    struct {
      hipIpcEventHandle_t* handle;
      hipEvent_t event;
    } hipIpcGetEventHandle;
    struct {
      hipEvent_t* event;
      unsigned int flags;
    } hipEventCreateWithFlags;
    struct {
      hipStream_t stream;
    } hipStreamQuery;
    struct {
      char* pciBusId;
      int len;
      int device;
    } hipDeviceGetPCIBusId;
    struct {
      void* dst;
      const void* src;
      size_t sizeBytes;
      hipMemcpyKind kind;
    } hipMemcpy;
    struct {
      hipLaunchParams* launchParamsList;
      int numDevices;
      unsigned int flags;
    } hipExtLaunchMultiKernelMultiDevice;
    struct {
      hipStream_t stream;
      hipStreamCallback_t callback;
      void* userData;
      unsigned int flags;
    } hipStreamAddCallback;
    struct {
      hipArray* dst;
      size_t wOffset;
      size_t hOffset;
      const void* src;
      size_t count;
      hipMemcpyKind kind;
    } hipMemcpyToArray;
    struct {
      hipDeviceptr_t dest;
      int value;
      size_t count;
    } hipMemsetD32;
    struct {
      hipFunction_t f;
      unsigned int globalWorkSizeX;
      unsigned int globalWorkSizeY;
      unsigned int globalWorkSizeZ;
      unsigned int localWorkSizeX;
      unsigned int localWorkSizeY;
      unsigned int localWorkSizeZ;
      size_t sharedMemBytes;
      hipStream_t hStream;
      void** kernelParams;
      void** extra;
      hipEvent_t startEvent;
      hipEvent_t stopEvent;
      unsigned int flags;
    } hipExtModuleLaunchKernel;
    struct {
      hipFuncCache_t* cacheConfig;
    } hipDeviceGetCacheConfig;
    struct {
      hipPitchedPtr* pitchedDevPtr;
      hipExtent extent;
    } hipMalloc3D;
    struct {
      hipPointerAttribute_t* attributes;
      const void* ptr;
    } hipPointerGetAttributes;
    struct {
      void* dst;
      int value;
      size_t sizeBytes;
      hipStream_t stream;
    } hipMemsetAsync;
    struct {
      const void* symbol;
      const void* src;
      size_t sizeBytes;
      size_t offset;
      hipMemcpyKind kind;
    } hipMemcpyToSymbol;
    struct {
      int* gridSize;
      int* blockSize;
      hipFunction_t f;
      size_t dynSharedMemPerBlk;
      int blockSizeLimit;
      unsigned int flags;
    } hipModuleOccupancyMaxPotentialBlockSizeWithFlags;
    struct {
      hipCtx_t ctx;
    } hipCtxPushCurrent;
    struct {
      void* dst;
      int dstDeviceId;
      const void* src;
      int srcDeviceId;
      size_t sizeBytes;
    } hipMemcpyPeer;
    struct {
      hipEvent_t event;
    } hipEventSynchronize;
    struct {
      hipDeviceptr_t dst;
      hipDeviceptr_t src;
      size_t sizeBytes;
      hipStream_t stream;
    } hipMemcpyDtoDAsync;
    struct {
      void** ptr;
      size_t sizeBytes;
      unsigned int flags;
    } hipExtMallocWithFlags;
    struct {
      hipCtx_t peerCtx;
      unsigned int flags;
    } hipCtxEnablePeerAccess;
    struct {
      void** ptr;
      size_t size;
    } hipMemAllocHost;
    struct {
      void* dst;
      hipDeviceptr_t src;
      size_t sizeBytes;
      hipStream_t stream;
    } hipMemcpyDtoHAsync;
    struct {
      hipFunction_t f;
      unsigned int gridDimX;
      unsigned int gridDimY;
      unsigned int gridDimZ;
      unsigned int blockDimX;
      unsigned int blockDimY;
      unsigned int blockDimZ;
      unsigned int sharedMemBytes;
      hipStream_t stream;
      void** kernelParams;
      void** extra;
    } hipModuleLaunchKernel;
    struct {
      hipDeviceptr_t* dptr;
      size_t* pitch;
      size_t widthInBytes;
      size_t height;
      unsigned int elementSizeBytes;
    } hipMemAllocPitch;
    struct {
      void* dst;
      size_t dpitch;
      hipArray_const_t src;
      size_t wOffset;
      size_t hOffset;
      size_t width;
      size_t height;
      hipMemcpyKind kind;
      hipStream_t stream;
    } hipMemcpy2DFromArrayAsync;
    struct {
      size_t* pValue;
      enum hipLimit_t limit;
    } hipDeviceGetLimit;
    struct {
      hipModule_t* module;
      const void* image;
      unsigned int numOptions;
      hipJitOption* options;
      void** optionsValues;
    } hipModuleLoadDataEx;
    struct {
      int* runtimeVersion;
    } hipRuntimeGetVersion;
    struct {
      dim3* gridDim;
      dim3* blockDim;
      size_t* sharedMem;
      hipStream_t* stream;
    } __hipPopCallConfiguration;
    struct {
      hipDeviceProp_t* props;
      hipDevice_t device;
    } hipGetDeviceProperties;
    struct {
      hipDevice_t* device;
      int ordinal;
    } hipDeviceGet;
    struct {
      hipArray* array;
    } hipFreeArray;
    struct {
      float* ms;
      hipEvent_t start;
      hipEvent_t stop;
    } hipEventElapsedTime;
    struct {
      hipDevice_t dev;
    } hipDevicePrimaryCtxRelease;
    struct {
      void** devPtr;
      void* hstPtr;
      unsigned int flags;
    } hipHostGetDevicePointer;
    struct {
      const hip_Memcpy2D* pCopy;
    } hipMemcpyParam2D;
    struct {
      hipDevice_t dev;
    } hipDevicePrimaryCtxReset;
    struct {
      hipFunction_t* function;
      hipModule_t module;
      const char* kname;
    } hipModuleGetFunction;
    struct {
      hipDeviceptr_t dst;
      int value;
      size_t count;
      hipStream_t stream;
    } hipMemsetD32Async;
    struct {
      int* deviceId;
    } hipGetDevice;
    struct {
      int* count;
    } hipGetDeviceCount;
    struct {
      hipEvent_t* event;
      hipIpcEventHandle_t handle;
    } hipIpcOpenEventHandle;
  } args;
} hip_api_data_t;

// HIP API callbacks args data filling macros
// hipDrvMemcpy3DAsync[('const HIP_MEMCPY3D*', 'pCopy'), ('hipStream_t', 'stream')]
#define INIT_hipDrvMemcpy3DAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDrvMemcpy3DAsync.pCopy = (const HIP_MEMCPY3D*)pCopy; \
  cb_data.args.hipDrvMemcpy3DAsync.stream = (hipStream_t)stream; \
};
// hipDeviceEnablePeerAccess[('int', 'peerDeviceId'), ('unsigned int', 'flags')]
#define INIT_hipDeviceEnablePeerAccess_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceEnablePeerAccess.peerDeviceId = (int)peerDeviceId; \
  cb_data.args.hipDeviceEnablePeerAccess.flags = (unsigned int)flags; \
};
// hipStreamCreateWithPriority[('hipStream_t*', 'stream'), ('unsigned int', 'flags'), ('int', 'priority')]
#define INIT_hipStreamCreateWithPriority_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamCreateWithPriority.stream = (hipStream_t*)stream; \
  cb_data.args.hipStreamCreateWithPriority.flags = (unsigned int)flags; \
  cb_data.args.hipStreamCreateWithPriority.priority = (int)priority; \
};
// hipMemcpyToSymbolAsync[('const void*', 'symbol'), ('const void*', 'src'), ('size_t', 'sizeBytes'), ('size_t', 'offset'), ('hipMemcpyKind', 'kind'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyToSymbolAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyToSymbolAsync.symbol = (const void*)symbol; \
  cb_data.args.hipMemcpyToSymbolAsync.src = (const void*)src; \
  cb_data.args.hipMemcpyToSymbolAsync.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyToSymbolAsync.offset = (size_t)offset; \
  cb_data.args.hipMemcpyToSymbolAsync.kind = (hipMemcpyKind)kind; \
  cb_data.args.hipMemcpyToSymbolAsync.stream = (hipStream_t)stream; \
};
// hipMallocPitch[('void**', 'ptr'), ('size_t*', 'pitch'), ('size_t', 'width'), ('size_t', 'height')]
#define INIT_hipMallocPitch_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMallocPitch.ptr = (void**)ptr; \
  cb_data.args.hipMallocPitch.pitch = (size_t*)pitch; \
  cb_data.args.hipMallocPitch.width = (size_t)width; \
  cb_data.args.hipMallocPitch.height = (size_t)height; \
};
// hipMalloc[('void**', 'ptr'), ('size_t', 'size')]
#define INIT_hipMalloc_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMalloc.ptr = (void**)ptr; \
  cb_data.args.hipMalloc.size = (size_t)sizeBytes; \
};
// hipMemsetD16[('hipDeviceptr_t', 'dest'), ('unsigned short', 'value'), ('size_t', 'count')]
#define INIT_hipMemsetD16_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetD16.dest = (hipDeviceptr_t)dst; \
  cb_data.args.hipMemsetD16.value = (unsigned short)value; \
  cb_data.args.hipMemsetD16.count = (size_t)count; \
};
// hipDeviceGetName[('char*', 'name'), ('int', 'len'), ('hipDevice_t', 'device')]
#define INIT_hipDeviceGetName_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetName.name = strdup("***"); \
  cb_data.args.hipDeviceGetName.len = (int)len; \
  cb_data.args.hipDeviceGetName.device = (hipDevice_t)device; \
};
// hipEventRecord[('hipEvent_t', 'event'), ('hipStream_t', 'stream')]
#define INIT_hipEventRecord_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventRecord.event = (hipEvent_t)event; \
  cb_data.args.hipEventRecord.stream = (hipStream_t)stream; \
};
// hipCtxSynchronize[]
#define INIT_hipCtxSynchronize_CB_ARGS_DATA(cb_data) { \
};
// hipSetDevice[('int', 'deviceId')]
#define INIT_hipSetDevice_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipSetDevice.deviceId = (int)device; \
};
// hipCtxGetApiVersion[('hipCtx_t', 'ctx'), ('int*', 'apiVersion')]
#define INIT_hipCtxGetApiVersion_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxGetApiVersion.ctx = (hipCtx_t)ctx; \
  cb_data.args.hipCtxGetApiVersion.apiVersion = (int*)apiVersion; \
};
// hipMemcpyFromSymbolAsync[('void*', 'dst'), ('const void*', 'symbol'), ('size_t', 'sizeBytes'), ('size_t', 'offset'), ('hipMemcpyKind', 'kind'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyFromSymbolAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyFromSymbolAsync.dst = (void*)dst; \
  cb_data.args.hipMemcpyFromSymbolAsync.symbol = (const void*)symbol; \
  cb_data.args.hipMemcpyFromSymbolAsync.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyFromSymbolAsync.offset = (size_t)offset; \
  cb_data.args.hipMemcpyFromSymbolAsync.kind = (hipMemcpyKind)kind; \
  cb_data.args.hipMemcpyFromSymbolAsync.stream = (hipStream_t)stream; \
};
// hipExtGetLinkTypeAndHopCount[('int', 'device1'), ('int', 'device2'), ('unsigned int*', 'linktype'), ('unsigned int*', 'hopcount')]
#define INIT_hipExtGetLinkTypeAndHopCount_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipExtGetLinkTypeAndHopCount.device1 = (int)device1; \
  cb_data.args.hipExtGetLinkTypeAndHopCount.device2 = (int)device2; \
  cb_data.args.hipExtGetLinkTypeAndHopCount.linktype = (unsigned int*)linktype; \
  cb_data.args.hipExtGetLinkTypeAndHopCount.hopcount = (unsigned int*)hopcount; \
};
// hipModuleOccupancyMaxActiveBlocksPerMultiprocessor[('int*', 'numBlocks'), ('hipFunction_t', 'f'), ('int', 'blockSize'), ('size_t', 'dynSharedMemPerBlk')]
#define INIT_hipModuleOccupancyMaxActiveBlocksPerMultiprocessor_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.numBlocks = (int*)numBlocks; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.f = (hipFunction_t)f; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.blockSize = (int)blockSize; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.dynSharedMemPerBlk = (size_t)dynSharedMemPerBlk; \
};
// hipMemset3D[('hipPitchedPtr', 'pitchedDevPtr'), ('int', 'value'), ('hipExtent', 'extent')]
#define INIT_hipMemset3D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemset3D.pitchedDevPtr = (hipPitchedPtr)pitchedDevPtr; \
  cb_data.args.hipMemset3D.value = (int)value; \
  cb_data.args.hipMemset3D.extent = (hipExtent)extent; \
};
// hipHostFree[('void*', 'ptr')]
#define INIT_hipHostFree_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHostFree.ptr = (void*)ptr; \
};
// hipMemcpy2DToArray[('hipArray*', 'dst'), ('size_t', 'wOffset'), ('size_t', 'hOffset'), ('const void*', 'src'), ('size_t', 'spitch'), ('size_t', 'width'), ('size_t', 'height'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpy2DToArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy2DToArray.dst = (hipArray*)dst; \
  cb_data.args.hipMemcpy2DToArray.wOffset = (size_t)wOffset; \
  cb_data.args.hipMemcpy2DToArray.hOffset = (size_t)hOffset; \
  cb_data.args.hipMemcpy2DToArray.src = (const void*)src; \
  cb_data.args.hipMemcpy2DToArray.spitch = (size_t)spitch; \
  cb_data.args.hipMemcpy2DToArray.width = (size_t)width; \
  cb_data.args.hipMemcpy2DToArray.height = (size_t)height; \
  cb_data.args.hipMemcpy2DToArray.kind = (hipMemcpyKind)kind; \
};
// hipMemsetD8Async[('hipDeviceptr_t', 'dest'), ('unsigned char', 'value'), ('size_t', 'count'), ('hipStream_t', 'stream')]
#define INIT_hipMemsetD8Async_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetD8Async.dest = (hipDeviceptr_t)dst; \
  cb_data.args.hipMemsetD8Async.value = (unsigned char)value; \
  cb_data.args.hipMemsetD8Async.count = (size_t)count; \
  cb_data.args.hipMemsetD8Async.stream = (hipStream_t)stream; \
};
// hipCtxGetCacheConfig[('hipFuncCache_t*', 'cacheConfig')]
#define INIT_hipCtxGetCacheConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxGetCacheConfig.cacheConfig = (hipFuncCache_t*)cacheConfig; \
};
// hipStreamWaitEvent[('hipStream_t', 'stream'), ('hipEvent_t', 'event'), ('unsigned int', 'flags')]
#define INIT_hipStreamWaitEvent_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamWaitEvent.stream = (hipStream_t)stream; \
  cb_data.args.hipStreamWaitEvent.event = (hipEvent_t)event; \
  cb_data.args.hipStreamWaitEvent.flags = (unsigned int)flags; \
};
// hipDeviceGetStreamPriorityRange[('int*', 'leastPriority'), ('int*', 'greatestPriority')]
#define INIT_hipDeviceGetStreamPriorityRange_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetStreamPriorityRange.leastPriority = (int*)leastPriority; \
  cb_data.args.hipDeviceGetStreamPriorityRange.greatestPriority = (int*)greatestPriority; \
};
// hipModuleLoad[('hipModule_t*', 'module'), ('const char*', 'fname')]
#define INIT_hipModuleLoad_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleLoad.module = (hipModule_t*)module; \
  cb_data.args.hipModuleLoad.fname = (fname) ? strdup(fname) : NULL; \
};
// hipDevicePrimaryCtxSetFlags[('hipDevice_t', 'dev'), ('unsigned int', 'flags')]
#define INIT_hipDevicePrimaryCtxSetFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDevicePrimaryCtxSetFlags.dev = (hipDevice_t)dev; \
  cb_data.args.hipDevicePrimaryCtxSetFlags.flags = (unsigned int)flags; \
};
// hipLaunchCooperativeKernel[('const void*', 'f'), ('dim3', 'gridDim'), ('dim3', 'blockDimX'), ('void**', 'kernelParams'), ('unsigned int', 'sharedMemBytes'), ('hipStream_t', 'stream')]
#define INIT_hipLaunchCooperativeKernel_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipLaunchCooperativeKernel.f = (const void*)f; \
  cb_data.args.hipLaunchCooperativeKernel.gridDim = (dim3)gridDim; \
  cb_data.args.hipLaunchCooperativeKernel.blockDimX = (dim3)blockDim; \
  cb_data.args.hipLaunchCooperativeKernel.kernelParams = (void**)kernelParams; \
  cb_data.args.hipLaunchCooperativeKernel.sharedMemBytes = (unsigned int)sharedMemBytes; \
  cb_data.args.hipLaunchCooperativeKernel.stream = (hipStream_t)hStream; \
};
// hipLaunchCooperativeKernelMultiDevice[('hipLaunchParams*', 'launchParamsList'), ('int', 'numDevices'), ('unsigned int', 'flags')]
#define INIT_hipLaunchCooperativeKernelMultiDevice_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipLaunchCooperativeKernelMultiDevice.launchParamsList = (hipLaunchParams*)launchParamsList; \
  cb_data.args.hipLaunchCooperativeKernelMultiDevice.numDevices = (int)numDevices; \
  cb_data.args.hipLaunchCooperativeKernelMultiDevice.flags = (unsigned int)flags; \
};
// hipMemcpyAsync[('void*', 'dst'), ('const void*', 'src'), ('size_t', 'sizeBytes'), ('hipMemcpyKind', 'kind'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyAsync.dst = (void*)dst; \
  cb_data.args.hipMemcpyAsync.src = (const void*)src; \
  cb_data.args.hipMemcpyAsync.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyAsync.kind = (hipMemcpyKind)kind; \
  cb_data.args.hipMemcpyAsync.stream = (hipStream_t)stream; \
};
// hipMalloc3DArray[('hipArray_t*', 'array'), ('const hipChannelFormatDesc*', 'desc'), ('hipExtent', 'extent'), ('unsigned int', 'flags')]
#define INIT_hipMalloc3DArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMalloc3DArray.array = (hipArray_t*)array; \
  cb_data.args.hipMalloc3DArray.desc = (const hipChannelFormatDesc*)desc; \
  cb_data.args.hipMalloc3DArray.extent = (hipExtent)extent; \
  cb_data.args.hipMalloc3DArray.flags = (unsigned int)flags; \
};
// hipMallocHost[('void**', 'ptr'), ('size_t', 'size')]
#define INIT_hipMallocHost_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMallocHost.ptr = (void**)ptr; \
  cb_data.args.hipMallocHost.size = (size_t)size; \
};
// hipCtxGetCurrent[('hipCtx_t*', 'ctx')]
#define INIT_hipCtxGetCurrent_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxGetCurrent.ctx = (hipCtx_t*)ctx; \
};
// hipDevicePrimaryCtxGetState[('hipDevice_t', 'dev'), ('unsigned int*', 'flags'), ('int*', 'active')]
#define INIT_hipDevicePrimaryCtxGetState_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDevicePrimaryCtxGetState.dev = (hipDevice_t)dev; \
  cb_data.args.hipDevicePrimaryCtxGetState.flags = (unsigned int*)flags; \
  cb_data.args.hipDevicePrimaryCtxGetState.active = (int*)active; \
};
// hipEventQuery[('hipEvent_t', 'event')]
#define INIT_hipEventQuery_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventQuery.event = (hipEvent_t)event; \
};
// hipEventCreate[('hipEvent_t*', 'event')]
#define INIT_hipEventCreate_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventCreate.event = (hipEvent_t*)event; \
};
// hipMemGetAddressRange[('hipDeviceptr_t*', 'pbase'), ('size_t*', 'psize'), ('hipDeviceptr_t', 'dptr')]
#define INIT_hipMemGetAddressRange_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemGetAddressRange.pbase = (hipDeviceptr_t*)pbase; \
  cb_data.args.hipMemGetAddressRange.psize = (size_t*)psize; \
  cb_data.args.hipMemGetAddressRange.dptr = (hipDeviceptr_t)dptr; \
};
// hipMemcpyFromSymbol[('void*', 'dst'), ('const void*', 'symbol'), ('size_t', 'sizeBytes'), ('size_t', 'offset'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpyFromSymbol_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyFromSymbol.dst = (void*)dst; \
  cb_data.args.hipMemcpyFromSymbol.symbol = (const void*)symbol; \
  cb_data.args.hipMemcpyFromSymbol.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyFromSymbol.offset = (size_t)offset; \
  cb_data.args.hipMemcpyFromSymbol.kind = (hipMemcpyKind)kind; \
};
// hipArrayCreate[('hipArray**', 'pHandle'), ('const HIP_ARRAY_DESCRIPTOR*', 'pAllocateArray')]
#define INIT_hipArrayCreate_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipArrayCreate.pHandle = (hipArray**)array; \
  cb_data.args.hipArrayCreate.pAllocateArray = (const HIP_ARRAY_DESCRIPTOR*)pAllocateArray; \
};
// hipStreamGetFlags[('hipStream_t', 'stream'), ('unsigned int*', 'flags')]
#define INIT_hipStreamGetFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamGetFlags.stream = (hipStream_t)stream; \
  cb_data.args.hipStreamGetFlags.flags = (unsigned int*)flags; \
};
// hipMallocArray[('hipArray**', 'array'), ('const hipChannelFormatDesc*', 'desc'), ('size_t', 'width'), ('size_t', 'height'), ('unsigned int', 'flags')]
#define INIT_hipMallocArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMallocArray.array = (hipArray**)array; \
  cb_data.args.hipMallocArray.desc = (const hipChannelFormatDesc*)desc; \
  cb_data.args.hipMallocArray.width = (size_t)width; \
  cb_data.args.hipMallocArray.height = (size_t)height; \
  cb_data.args.hipMallocArray.flags = (unsigned int)flags; \
};
// hipCtxGetSharedMemConfig[('hipSharedMemConfig*', 'pConfig')]
#define INIT_hipCtxGetSharedMemConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxGetSharedMemConfig.pConfig = (hipSharedMemConfig*)pConfig; \
};
// hipModuleOccupancyMaxPotentialBlockSize[('int*', 'gridSize'), ('int*', 'blockSize'), ('hipFunction_t', 'f'), ('size_t', 'dynSharedMemPerBlk'), ('int', 'blockSizeLimit')]
#define INIT_hipModuleOccupancyMaxPotentialBlockSize_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSize.gridSize = (int*)gridSize; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSize.blockSize = (int*)blockSize; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSize.f = (hipFunction_t)f; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSize.dynSharedMemPerBlk = (size_t)dynSharedMemPerBlk; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSize.blockSizeLimit = (int)blockSizeLimit; \
};
// hipMemPtrGetInfo[('void*', 'ptr'), ('size_t*', 'size')]
#define INIT_hipMemPtrGetInfo_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemPtrGetInfo.ptr = (void*)ptr; \
  cb_data.args.hipMemPtrGetInfo.size = (size_t*)size; \
};
// hipFuncGetAttribute[('int*', 'value'), ('hipFunction_attribute', 'attrib'), ('hipFunction_t', 'hfunc')]
#define INIT_hipFuncGetAttribute_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFuncGetAttribute.value = (int*)value; \
  cb_data.args.hipFuncGetAttribute.attrib = (hipFunction_attribute)attrib; \
  cb_data.args.hipFuncGetAttribute.hfunc = (hipFunction_t)hfunc; \
};
// hipCtxGetFlags[('unsigned int*', 'flags')]
#define INIT_hipCtxGetFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxGetFlags.flags = (unsigned int*)flags; \
};
// hipStreamDestroy[('hipStream_t', 'stream')]
#define INIT_hipStreamDestroy_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamDestroy.stream = (hipStream_t)stream; \
};
// __hipPushCallConfiguration[('dim3', 'gridDim'), ('dim3', 'blockDim'), ('size_t', 'sharedMem'), ('hipStream_t', 'stream')]
#define INIT___hipPushCallConfiguration_CB_ARGS_DATA(cb_data) { \
  cb_data.args.__hipPushCallConfiguration.gridDim = (dim3)gridDim; \
  cb_data.args.__hipPushCallConfiguration.blockDim = (dim3)blockDim; \
  cb_data.args.__hipPushCallConfiguration.sharedMem = (size_t)sharedMem; \
  cb_data.args.__hipPushCallConfiguration.stream = (hipStream_t)stream; \
};
// hipMemset3DAsync[('hipPitchedPtr', 'pitchedDevPtr'), ('int', 'value'), ('hipExtent', 'extent'), ('hipStream_t', 'stream')]
#define INIT_hipMemset3DAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemset3DAsync.pitchedDevPtr = (hipPitchedPtr)pitchedDevPtr; \
  cb_data.args.hipMemset3DAsync.value = (int)value; \
  cb_data.args.hipMemset3DAsync.extent = (hipExtent)extent; \
  cb_data.args.hipMemset3DAsync.stream = (hipStream_t)stream; \
};
// hipMemcpy3D[('const hipMemcpy3DParms*', 'p')]
#define INIT_hipMemcpy3D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy3D.p = (const hipMemcpy3DParms*)p; \
};
// hipInit[('unsigned int', 'flags')]
#define INIT_hipInit_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipInit.flags = (unsigned int)flags; \
};
// hipMemcpyAtoH[('void*', 'dst'), ('hipArray*', 'srcArray'), ('size_t', 'srcOffset'), ('size_t', 'count')]
#define INIT_hipMemcpyAtoH_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyAtoH.dst = (void*)dstHost; \
  cb_data.args.hipMemcpyAtoH.srcArray = (hipArray*)srcArray; \
  cb_data.args.hipMemcpyAtoH.srcOffset = (size_t)srcOffset; \
  cb_data.args.hipMemcpyAtoH.count = (size_t)ByteCount; \
};
// hipStreamGetPriority[]
#define INIT_hipStreamGetPriority_CB_ARGS_DATA(cb_data) { \
};
// hipMemset2D[('void*', 'dst'), ('size_t', 'pitch'), ('int', 'value'), ('size_t', 'width'), ('size_t', 'height')]
#define INIT_hipMemset2D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemset2D.dst = (void*)dst; \
  cb_data.args.hipMemset2D.pitch = (size_t)pitch; \
  cb_data.args.hipMemset2D.value = (int)value; \
  cb_data.args.hipMemset2D.width = (size_t)width; \
  cb_data.args.hipMemset2D.height = (size_t)height; \
};
// hipMemset2DAsync[('void*', 'dst'), ('size_t', 'pitch'), ('int', 'value'), ('size_t', 'width'), ('size_t', 'height'), ('hipStream_t', 'stream')]
#define INIT_hipMemset2DAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemset2DAsync.dst = (void*)dst; \
  cb_data.args.hipMemset2DAsync.pitch = (size_t)pitch; \
  cb_data.args.hipMemset2DAsync.value = (int)value; \
  cb_data.args.hipMemset2DAsync.width = (size_t)width; \
  cb_data.args.hipMemset2DAsync.height = (size_t)height; \
  cb_data.args.hipMemset2DAsync.stream = (hipStream_t)stream; \
};
// hipDeviceCanAccessPeer[('int*', 'canAccessPeer'), ('int', 'deviceId'), ('int', 'peerDeviceId')]
#define INIT_hipDeviceCanAccessPeer_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceCanAccessPeer.canAccessPeer = (int*)canAccess; \
  cb_data.args.hipDeviceCanAccessPeer.deviceId = (int)deviceId; \
  cb_data.args.hipDeviceCanAccessPeer.peerDeviceId = (int)peerDeviceId; \
};
// hipLaunchByPtr[('const void*', 'hostFunction')]
#define INIT_hipLaunchByPtr_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipLaunchByPtr.hostFunction = (const void*)hostFunction; \
};
// hipLaunchKernel[('const void*', 'function_address'), ('dim3', 'numBlocks'), ('dim3', 'dimBlocks'), ('void**', 'args'), ('size_t', 'sharedMemBytes'), ('hipStream_t', 'stream')]
#define INIT_hipLaunchKernel_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipLaunchKernel.function_address = (const void*)hostFunction; \
  cb_data.args.hipLaunchKernel.numBlocks = (dim3)gridDim; \
  cb_data.args.hipLaunchKernel.dimBlocks = (dim3)blockDim; \
  cb_data.args.hipLaunchKernel.args = (void**)args; \
  cb_data.args.hipLaunchKernel.sharedMemBytes = (size_t)sharedMemBytes; \
  cb_data.args.hipLaunchKernel.stream = (hipStream_t)stream; \
};
// hipMemsetD16Async[('hipDeviceptr_t', 'dest'), ('unsigned short', 'value'), ('size_t', 'count'), ('hipStream_t', 'stream')]
#define INIT_hipMemsetD16Async_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetD16Async.dest = (hipDeviceptr_t)dst; \
  cb_data.args.hipMemsetD16Async.value = (unsigned short)value; \
  cb_data.args.hipMemsetD16Async.count = (size_t)count; \
  cb_data.args.hipMemsetD16Async.stream = (hipStream_t)stream; \
};
// hipModuleUnload[('hipModule_t', 'module')]
#define INIT_hipModuleUnload_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleUnload.module = (hipModule_t)hmod; \
};
// hipHostUnregister[('void*', 'hostPtr')]
#define INIT_hipHostUnregister_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHostUnregister.hostPtr = (void*)hostPtr; \
};
// hipProfilerStop[]
#define INIT_hipProfilerStop_CB_ARGS_DATA(cb_data) { \
};
// hipStreamSynchronize[('hipStream_t', 'stream')]
#define INIT_hipStreamSynchronize_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamSynchronize.stream = (hipStream_t)stream; \
};
// hipFreeHost[('void*', 'ptr')]
#define INIT_hipFreeHost_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFreeHost.ptr = (void*)ptr; \
};
// hipDeviceSetCacheConfig[('hipFuncCache_t', 'cacheConfig')]
#define INIT_hipDeviceSetCacheConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceSetCacheConfig.cacheConfig = (hipFuncCache_t)cacheConfig; \
};
// hipGetErrorName[]
#define INIT_hipGetErrorName_CB_ARGS_DATA(cb_data) { \
};
// hipMemcpyHtoD[('hipDeviceptr_t', 'dst'), ('void*', 'src'), ('size_t', 'sizeBytes')]
#define INIT_hipMemcpyHtoD_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyHtoD.dst = (hipDeviceptr_t)dstDevice; \
  cb_data.args.hipMemcpyHtoD.src = (void*)srcHost; \
  cb_data.args.hipMemcpyHtoD.sizeBytes = (size_t)ByteCount; \
};
// hipModuleGetGlobal[('hipDeviceptr_t*', 'dptr'), ('size_t*', 'bytes'), ('hipModule_t', 'hmod'), ('const char*', 'name')]
#define INIT_hipModuleGetGlobal_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleGetGlobal.dptr = (hipDeviceptr_t*)dptr; \
  cb_data.args.hipModuleGetGlobal.bytes = (size_t*)bytes; \
  cb_data.args.hipModuleGetGlobal.hmod = (hipModule_t)hmod; \
  cb_data.args.hipModuleGetGlobal.name = (name) ? strdup(name) : NULL; \
};
// hipMemcpyHtoA[('hipArray*', 'dstArray'), ('size_t', 'dstOffset'), ('const void*', 'srcHost'), ('size_t', 'count')]
#define INIT_hipMemcpyHtoA_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyHtoA.dstArray = (hipArray*)dstArray; \
  cb_data.args.hipMemcpyHtoA.dstOffset = (size_t)dstOffset; \
  cb_data.args.hipMemcpyHtoA.srcHost = (const void*)srcHost; \
  cb_data.args.hipMemcpyHtoA.count = (size_t)ByteCount; \
};
// hipCtxCreate[('hipCtx_t*', 'ctx'), ('unsigned int', 'flags'), ('hipDevice_t', 'device')]
#define INIT_hipCtxCreate_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxCreate.ctx = (hipCtx_t*)ctx; \
  cb_data.args.hipCtxCreate.flags = (unsigned int)flags; \
  cb_data.args.hipCtxCreate.device = (hipDevice_t)device; \
};
// hipMemcpy2D[('void*', 'dst'), ('size_t', 'dpitch'), ('const void*', 'src'), ('size_t', 'spitch'), ('size_t', 'width'), ('size_t', 'height'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpy2D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy2D.dst = (void*)dst; \
  cb_data.args.hipMemcpy2D.dpitch = (size_t)dpitch; \
  cb_data.args.hipMemcpy2D.src = (const void*)src; \
  cb_data.args.hipMemcpy2D.spitch = (size_t)spitch; \
  cb_data.args.hipMemcpy2D.width = (size_t)width; \
  cb_data.args.hipMemcpy2D.height = (size_t)height; \
  cb_data.args.hipMemcpy2D.kind = (hipMemcpyKind)kind; \
};
// hipIpcCloseMemHandle[('void*', 'devPtr')]
#define INIT_hipIpcCloseMemHandle_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipIpcCloseMemHandle.devPtr = (void*)dev_ptr; \
};
// hipChooseDevice[('int*', 'device'), ('const hipDeviceProp_t*', 'prop')]
#define INIT_hipChooseDevice_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipChooseDevice.device = (int*)device; \
  cb_data.args.hipChooseDevice.prop = (const hipDeviceProp_t*)properties; \
};
// hipDeviceSetSharedMemConfig[('hipSharedMemConfig', 'config')]
#define INIT_hipDeviceSetSharedMemConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceSetSharedMemConfig.config = (hipSharedMemConfig)config; \
};
// hipDeviceComputeCapability[('int*', 'major'), ('int*', 'minor'), ('hipDevice_t', 'device')]
#define INIT_hipDeviceComputeCapability_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceComputeCapability.major = (int*)major; \
  cb_data.args.hipDeviceComputeCapability.minor = (int*)minor; \
  cb_data.args.hipDeviceComputeCapability.device = (hipDevice_t)device; \
};
// hipMallocMipmappedArray[('hipMipmappedArray_t*', 'mipmappedArray'), ('const hipChannelFormatDesc*', 'desc'), ('hipExtent', 'extent'), ('unsigned int', 'numLevels'), ('unsigned int', 'flags')]
#define INIT_hipMallocMipmappedArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMallocMipmappedArray.mipmappedArray = (hipMipmappedArray_t*)mipmappedArray; \
  cb_data.args.hipMallocMipmappedArray.desc = (const hipChannelFormatDesc*)desc; \
  cb_data.args.hipMallocMipmappedArray.extent = (hipExtent)extent; \
  cb_data.args.hipMallocMipmappedArray.numLevels = (unsigned int)numLevels; \
  cb_data.args.hipMallocMipmappedArray.flags = (unsigned int)flags; \
};
// hipSetupArgument[('const void*', 'arg'), ('size_t', 'size'), ('size_t', 'offset')]
#define INIT_hipSetupArgument_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipSetupArgument.arg = (const void*)arg; \
  cb_data.args.hipSetupArgument.size = (size_t)size; \
  cb_data.args.hipSetupArgument.offset = (size_t)offset; \
};
// hipProfilerStart[]
#define INIT_hipProfilerStart_CB_ARGS_DATA(cb_data) { \
};
// hipCtxSetCacheConfig[('hipFuncCache_t', 'cacheConfig')]
#define INIT_hipCtxSetCacheConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxSetCacheConfig.cacheConfig = (hipFuncCache_t)cacheConfig; \
};
// hipFuncSetCacheConfig[('const void*', 'func'), ('hipFuncCache_t', 'config')]
#define INIT_hipFuncSetCacheConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFuncSetCacheConfig.func = (const void*)func; \
  cb_data.args.hipFuncSetCacheConfig.config = (hipFuncCache_t)cacheConfig; \
};
// hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags[('int*', 'numBlocks'), ('hipFunction_t', 'f'), ('int', 'blockSize'), ('size_t', 'dynSharedMemPerBlk'), ('unsigned int', 'flags')]
#define INIT_hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.numBlocks = (int*)numBlocks; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.f = (hipFunction_t)f; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.blockSize = (int)blockSize; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.dynSharedMemPerBlk = (size_t)dynSharedMemPerBlk; \
  cb_data.args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.flags = (unsigned int)flags; \
};
// hipModuleGetTexRef[('textureReference**', 'texRef'), ('hipModule_t', 'hmod'), ('const char*', 'name')]
#define INIT_hipModuleGetTexRef_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleGetTexRef.texRef = (textureReference**)texRef; \
  cb_data.args.hipModuleGetTexRef.hmod = (hipModule_t)hmod; \
  cb_data.args.hipModuleGetTexRef.name = (name) ? strdup(name) : NULL; \
};
// hipMemcpyPeerAsync[('void*', 'dst'), ('int', 'dstDeviceId'), ('const void*', 'src'), ('int', 'srcDevice'), ('size_t', 'sizeBytes'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyPeerAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyPeerAsync.dst = (void*)dst; \
  cb_data.args.hipMemcpyPeerAsync.dstDeviceId = (int)dstDevice; \
  cb_data.args.hipMemcpyPeerAsync.src = (const void*)src; \
  cb_data.args.hipMemcpyPeerAsync.srcDevice = (int)srcDevice; \
  cb_data.args.hipMemcpyPeerAsync.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyPeerAsync.stream = (hipStream_t)stream; \
};
// hipMemcpyWithStream[('void*', 'dst'), ('const void*', 'src'), ('size_t', 'sizeBytes'), ('hipMemcpyKind', 'kind'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyWithStream_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyWithStream.dst = (void*)dst; \
  cb_data.args.hipMemcpyWithStream.src = (const void*)src; \
  cb_data.args.hipMemcpyWithStream.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyWithStream.kind = (hipMemcpyKind)kind; \
  cb_data.args.hipMemcpyWithStream.stream = (hipStream_t)stream; \
};
// hipConfigureCall[('dim3', 'gridDim'), ('dim3', 'blockDim'), ('size_t', 'sharedMem'), ('hipStream_t', 'stream')]
#define INIT_hipConfigureCall_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipConfigureCall.gridDim = (dim3)gridDim; \
  cb_data.args.hipConfigureCall.blockDim = (dim3)blockDim; \
  cb_data.args.hipConfigureCall.sharedMem = (size_t)sharedMem; \
  cb_data.args.hipConfigureCall.stream = (hipStream_t)stream; \
};
// hipGetMipmappedArrayLevel[('hipArray_t*', 'levelArray'), ('hipMipmappedArray_const_t', 'mipmappedArray'), ('unsigned int', 'level')]
#define INIT_hipGetMipmappedArrayLevel_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipGetMipmappedArrayLevel.levelArray = (hipArray_t*)levelArray; \
  cb_data.args.hipGetMipmappedArrayLevel.mipmappedArray = (hipMipmappedArray_const_t)mipmappedArray; \
  cb_data.args.hipGetMipmappedArrayLevel.level = (unsigned int)level; \
};
// hipMemcpy3DAsync[('const hipMemcpy3DParms*', 'p'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpy3DAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy3DAsync.p = (const hipMemcpy3DParms*)p; \
  cb_data.args.hipMemcpy3DAsync.stream = (hipStream_t)stream; \
};
// hipEventDestroy[('hipEvent_t', 'event')]
#define INIT_hipEventDestroy_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventDestroy.event = (hipEvent_t)event; \
};
// hipCtxPopCurrent[('hipCtx_t*', 'ctx')]
#define INIT_hipCtxPopCurrent_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxPopCurrent.ctx = (hipCtx_t*)ctx; \
};
// hipGetSymbolAddress[('void**', 'devPtr'), ('const void*', 'symbol')]
#define INIT_hipGetSymbolAddress_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipGetSymbolAddress.devPtr = (void**)devPtr; \
  cb_data.args.hipGetSymbolAddress.symbol = (const void*)symbol; \
};
// hipHostGetFlags[('unsigned int*', 'flagsPtr'), ('void*', 'hostPtr')]
#define INIT_hipHostGetFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHostGetFlags.flagsPtr = (unsigned int*)flagsPtr; \
  cb_data.args.hipHostGetFlags.hostPtr = (void*)hostPtr; \
};
// hipHostMalloc[('void**', 'ptr'), ('size_t', 'size'), ('unsigned int', 'flags')]
#define INIT_hipHostMalloc_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHostMalloc.ptr = (void**)ptr; \
  cb_data.args.hipHostMalloc.size = (size_t)sizeBytes; \
  cb_data.args.hipHostMalloc.flags = (unsigned int)flags; \
};
// hipDriverGetVersion[('int*', 'driverVersion')]
#define INIT_hipDriverGetVersion_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDriverGetVersion.driverVersion = (int*)driverVersion; \
};
// hipFreeMipmappedArray[('hipMipmappedArray_t', 'mipmappedArray')]
#define INIT_hipFreeMipmappedArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFreeMipmappedArray.mipmappedArray = (hipMipmappedArray_t)mipmappedArray; \
};
// hipMemGetInfo[('size_t*', 'free'), ('size_t*', 'total')]
#define INIT_hipMemGetInfo_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemGetInfo.free = (size_t*)free; \
  cb_data.args.hipMemGetInfo.total = (size_t*)total; \
};
// hipDeviceReset[]
#define INIT_hipDeviceReset_CB_ARGS_DATA(cb_data) { \
};
// hipMemset[('void*', 'dst'), ('int', 'value'), ('size_t', 'sizeBytes')]
#define INIT_hipMemset_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemset.dst = (void*)dst; \
  cb_data.args.hipMemset.value = (int)value; \
  cb_data.args.hipMemset.sizeBytes = (size_t)sizeBytes; \
};
// hipMemsetD8[('hipDeviceptr_t', 'dest'), ('unsigned char', 'value'), ('size_t', 'count')]
#define INIT_hipMemsetD8_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetD8.dest = (hipDeviceptr_t)dst; \
  cb_data.args.hipMemsetD8.value = (unsigned char)value; \
  cb_data.args.hipMemsetD8.count = (size_t)count; \
};
// hipMemcpyParam2DAsync[('const hip_Memcpy2D*', 'pCopy'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyParam2DAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyParam2DAsync.pCopy = (const hip_Memcpy2D*)pCopy; \
  cb_data.args.hipMemcpyParam2DAsync.stream = (hipStream_t)stream; \
};
// hipHostRegister[('void*', 'hostPtr'), ('size_t', 'sizeBytes'), ('unsigned int', 'flags')]
#define INIT_hipHostRegister_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHostRegister.hostPtr = (void*)hostPtr; \
  cb_data.args.hipHostRegister.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipHostRegister.flags = (unsigned int)flags; \
};
// hipCtxSetSharedMemConfig[('hipSharedMemConfig', 'config')]
#define INIT_hipCtxSetSharedMemConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxSetSharedMemConfig.config = (hipSharedMemConfig)config; \
};
// hipArray3DCreate[('hipArray**', 'array'), ('const HIP_ARRAY3D_DESCRIPTOR*', 'pAllocateArray')]
#define INIT_hipArray3DCreate_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipArray3DCreate.array = (hipArray**)array; \
  cb_data.args.hipArray3DCreate.pAllocateArray = (const HIP_ARRAY3D_DESCRIPTOR*)pAllocateArray; \
};
// hipIpcOpenMemHandle[('void**', 'devPtr'), ('hipIpcMemHandle_t', 'handle'), ('unsigned int', 'flags')]
#define INIT_hipIpcOpenMemHandle_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipIpcOpenMemHandle.devPtr = (void**)dev_ptr; \
  cb_data.args.hipIpcOpenMemHandle.handle = (hipIpcMemHandle_t)handle; \
  cb_data.args.hipIpcOpenMemHandle.flags = (unsigned int)flags; \
};
// hipGetLastError[]
#define INIT_hipGetLastError_CB_ARGS_DATA(cb_data) { \
};
// hipCtxDestroy[('hipCtx_t', 'ctx')]
#define INIT_hipCtxDestroy_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxDestroy.ctx = (hipCtx_t)ctx; \
};
// hipDeviceGetSharedMemConfig[('hipSharedMemConfig*', 'pConfig')]
#define INIT_hipDeviceGetSharedMemConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetSharedMemConfig.pConfig = (hipSharedMemConfig*)pConfig; \
};
// hipDrvMemcpy3D[('const HIP_MEMCPY3D*', 'pCopy')]
#define INIT_hipDrvMemcpy3D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDrvMemcpy3D.pCopy = (const HIP_MEMCPY3D*)pCopy; \
};
// hipMemcpy2DFromArray[('void*', 'dst'), ('size_t', 'dpitch'), ('hipArray_const_t', 'src'), ('size_t', 'wOffset'), ('size_t', 'hOffset'), ('size_t', 'width'), ('size_t', 'height'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpy2DFromArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy2DFromArray.dst = (void*)dst; \
  cb_data.args.hipMemcpy2DFromArray.dpitch = (size_t)dpitch; \
  cb_data.args.hipMemcpy2DFromArray.src = (hipArray_const_t)src; \
  cb_data.args.hipMemcpy2DFromArray.wOffset = (size_t)wOffsetSrc; \
  cb_data.args.hipMemcpy2DFromArray.hOffset = (size_t)hOffset; \
  cb_data.args.hipMemcpy2DFromArray.width = (size_t)width; \
  cb_data.args.hipMemcpy2DFromArray.height = (size_t)height; \
  cb_data.args.hipMemcpy2DFromArray.kind = (hipMemcpyKind)kind; \
};
// hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags[('int*', 'numBlocks'), ('const void*', 'f'), ('int', 'blockSize'), ('size_t', 'dynamicSMemSize'), ('unsigned int', 'flags')]
#define INIT_hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.numBlocks = (int*)numBlocks; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.f = (const void*)f; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.blockSize = (int)blockSize; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.dynamicSMemSize = (size_t)dynamicSMemSize; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.flags = (unsigned int)flags; \
};
// hipSetDeviceFlags[('unsigned int', 'flags')]
#define INIT_hipSetDeviceFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipSetDeviceFlags.flags = (unsigned int)flags; \
};
// hipHccModuleLaunchKernel[('hipFunction_t', 'f'), ('unsigned int', 'gridDimX'), ('unsigned int', 'gridDimY'), ('unsigned int', 'gridDimZ'), ('unsigned int', 'blockDimX'), ('unsigned int', 'blockDimY'), ('unsigned int', 'blockDimZ'), ('size_t', 'sharedMemBytes'), ('hipStream_t', 'hStream'), ('void**', 'kernelParams'), ('void**', 'extra'), ('hipEvent_t', 'startEvent'), ('hipEvent_t', 'stopEvent')]
#define INIT_hipHccModuleLaunchKernel_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHccModuleLaunchKernel.f = (hipFunction_t)f; \
  cb_data.args.hipHccModuleLaunchKernel.gridDimX = (unsigned int)gridDimX; \
  cb_data.args.hipHccModuleLaunchKernel.gridDimY = (unsigned int)gridDimY; \
  cb_data.args.hipHccModuleLaunchKernel.gridDimZ = (unsigned int)gridDimZ; \
  cb_data.args.hipHccModuleLaunchKernel.blockDimX = (unsigned int)blockDimX; \
  cb_data.args.hipHccModuleLaunchKernel.blockDimY = (unsigned int)blockDimY; \
  cb_data.args.hipHccModuleLaunchKernel.blockDimZ = (unsigned int)blockDimZ; \
  cb_data.args.hipHccModuleLaunchKernel.sharedMemBytes = (size_t)sharedMemBytes; \
  cb_data.args.hipHccModuleLaunchKernel.hStream = (hipStream_t)hStream; \
  cb_data.args.hipHccModuleLaunchKernel.kernelParams = (void**)kernelParams; \
  cb_data.args.hipHccModuleLaunchKernel.extra = (void**)extra; \
  cb_data.args.hipHccModuleLaunchKernel.startEvent = (hipEvent_t)startEvent; \
  cb_data.args.hipHccModuleLaunchKernel.stopEvent = (hipEvent_t)stopEvent; \
};
// hipFree[('void*', 'ptr')]
#define INIT_hipFree_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFree.ptr = (void*)ptr; \
};
// hipOccupancyMaxPotentialBlockSize[('int*', 'gridSize'), ('int*', 'blockSize'), ('const void*', 'f'), ('size_t', 'dynSharedMemPerBlk'), ('int', 'blockSizeLimit')]
#define INIT_hipOccupancyMaxPotentialBlockSize_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipOccupancyMaxPotentialBlockSize.gridSize = (int*)gridSize; \
  cb_data.args.hipOccupancyMaxPotentialBlockSize.blockSize = (int*)blockSize; \
  cb_data.args.hipOccupancyMaxPotentialBlockSize.f = (const void*)f; \
  cb_data.args.hipOccupancyMaxPotentialBlockSize.dynSharedMemPerBlk = (size_t)dynSharedMemPerBlk; \
  cb_data.args.hipOccupancyMaxPotentialBlockSize.blockSizeLimit = (int)blockSizeLimit; \
};
// hipDeviceGetAttribute[('int*', 'pi'), ('hipDeviceAttribute_t', 'attr'), ('int', 'deviceId')]
#define INIT_hipDeviceGetAttribute_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetAttribute.pi = (int*)pi; \
  cb_data.args.hipDeviceGetAttribute.attr = (hipDeviceAttribute_t)attr; \
  cb_data.args.hipDeviceGetAttribute.deviceId = (int)device; \
};
// hipMemcpyDtoH[('void*', 'dst'), ('hipDeviceptr_t', 'src'), ('size_t', 'sizeBytes')]
#define INIT_hipMemcpyDtoH_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyDtoH.dst = (void*)dstHost; \
  cb_data.args.hipMemcpyDtoH.src = (hipDeviceptr_t)srcDevice; \
  cb_data.args.hipMemcpyDtoH.sizeBytes = (size_t)ByteCount; \
};
// hipCtxDisablePeerAccess[('hipCtx_t', 'peerCtx')]
#define INIT_hipCtxDisablePeerAccess_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxDisablePeerAccess.peerCtx = (hipCtx_t)peerCtx; \
};
// hipMallocManaged[('void**', 'devPtr'), ('size_t', 'size'), ('unsigned int', 'flags')]
#define INIT_hipMallocManaged_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMallocManaged.devPtr = (void**)devPtr; \
  cb_data.args.hipMallocManaged.size = (size_t)size; \
  cb_data.args.hipMallocManaged.flags = (unsigned int)flags; \
};
// hipDeviceGetByPCIBusId[('int*', 'device'), ('const char*', 'pciBusId')]
#define INIT_hipDeviceGetByPCIBusId_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetByPCIBusId.device = (int*)device; \
  cb_data.args.hipDeviceGetByPCIBusId.pciBusId = (pciBusIdstr) ? strdup(pciBusIdstr) : NULL; \
};
// hipIpcGetMemHandle[('hipIpcMemHandle_t*', 'handle'), ('void*', 'devPtr')]
#define INIT_hipIpcGetMemHandle_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipIpcGetMemHandle.handle = (hipIpcMemHandle_t*)handle; \
  cb_data.args.hipIpcGetMemHandle.devPtr = (void*)dev_ptr; \
};
// hipMemcpyHtoDAsync[('hipDeviceptr_t', 'dst'), ('void*', 'src'), ('size_t', 'sizeBytes'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyHtoDAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyHtoDAsync.dst = (hipDeviceptr_t)dstDevice; \
  cb_data.args.hipMemcpyHtoDAsync.src = (void*)srcHost; \
  cb_data.args.hipMemcpyHtoDAsync.sizeBytes = (size_t)ByteCount; \
  cb_data.args.hipMemcpyHtoDAsync.stream = (hipStream_t)stream; \
};
// hipCtxGetDevice[('hipDevice_t*', 'device')]
#define INIT_hipCtxGetDevice_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxGetDevice.device = (hipDevice_t*)device; \
};
// hipMemcpyDtoD[('hipDeviceptr_t', 'dst'), ('hipDeviceptr_t', 'src'), ('size_t', 'sizeBytes')]
#define INIT_hipMemcpyDtoD_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyDtoD.dst = (hipDeviceptr_t)dstDevice; \
  cb_data.args.hipMemcpyDtoD.src = (hipDeviceptr_t)srcDevice; \
  cb_data.args.hipMemcpyDtoD.sizeBytes = (size_t)ByteCount; \
};
// hipModuleLoadData[('hipModule_t*', 'module'), ('const void*', 'image')]
#define INIT_hipModuleLoadData_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleLoadData.module = (hipModule_t*)module; \
  cb_data.args.hipModuleLoadData.image = (const void*)image; \
};
// hipDeviceTotalMem[('size_t*', 'bytes'), ('hipDevice_t', 'device')]
#define INIT_hipDeviceTotalMem_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceTotalMem.bytes = (size_t*)bytes; \
  cb_data.args.hipDeviceTotalMem.device = (hipDevice_t)device; \
};
// hipOccupancyMaxActiveBlocksPerMultiprocessor[('int*', 'numBlocks'), ('const void*', 'f'), ('int', 'blockSize'), ('size_t', 'dynamicSMemSize')]
#define INIT_hipOccupancyMaxActiveBlocksPerMultiprocessor_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessor.numBlocks = (int*)numBlocks; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessor.f = (const void*)f; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessor.blockSize = (int)blockSize; \
  cb_data.args.hipOccupancyMaxActiveBlocksPerMultiprocessor.dynamicSMemSize = (size_t)dynamicSMemSize; \
};
// hipCtxSetCurrent[('hipCtx_t', 'ctx')]
#define INIT_hipCtxSetCurrent_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxSetCurrent.ctx = (hipCtx_t)ctx; \
};
// hipGetErrorString[]
#define INIT_hipGetErrorString_CB_ARGS_DATA(cb_data) { \
};
// hipStreamCreate[('hipStream_t*', 'stream')]
#define INIT_hipStreamCreate_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamCreate.stream = (hipStream_t*)stream; \
};
// hipDevicePrimaryCtxRetain[('hipCtx_t*', 'pctx'), ('hipDevice_t', 'dev')]
#define INIT_hipDevicePrimaryCtxRetain_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDevicePrimaryCtxRetain.pctx = (hipCtx_t*)pctx; \
  cb_data.args.hipDevicePrimaryCtxRetain.dev = (hipDevice_t)dev; \
};
// hipDeviceDisablePeerAccess[('int', 'peerDeviceId')]
#define INIT_hipDeviceDisablePeerAccess_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceDisablePeerAccess.peerDeviceId = (int)peerDeviceId; \
};
// hipStreamCreateWithFlags[('hipStream_t*', 'stream'), ('unsigned int', 'flags')]
#define INIT_hipStreamCreateWithFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamCreateWithFlags.stream = (hipStream_t*)stream; \
  cb_data.args.hipStreamCreateWithFlags.flags = (unsigned int)flags; \
};
// hipMemcpyFromArray[('void*', 'dst'), ('hipArray_const_t', 'srcArray'), ('size_t', 'wOffset'), ('size_t', 'hOffset'), ('size_t', 'count'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpyFromArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyFromArray.dst = (void*)dst; \
  cb_data.args.hipMemcpyFromArray.srcArray = (hipArray_const_t)src; \
  cb_data.args.hipMemcpyFromArray.wOffset = (size_t)wOffsetSrc; \
  cb_data.args.hipMemcpyFromArray.hOffset = (size_t)hOffset; \
  cb_data.args.hipMemcpyFromArray.count = (size_t)count; \
  cb_data.args.hipMemcpyFromArray.kind = (hipMemcpyKind)kind; \
};
// hipMemcpy2DAsync[('void*', 'dst'), ('size_t', 'dpitch'), ('const void*', 'src'), ('size_t', 'spitch'), ('size_t', 'width'), ('size_t', 'height'), ('hipMemcpyKind', 'kind'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpy2DAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy2DAsync.dst = (void*)dst; \
  cb_data.args.hipMemcpy2DAsync.dpitch = (size_t)dpitch; \
  cb_data.args.hipMemcpy2DAsync.src = (const void*)src; \
  cb_data.args.hipMemcpy2DAsync.spitch = (size_t)spitch; \
  cb_data.args.hipMemcpy2DAsync.width = (size_t)width; \
  cb_data.args.hipMemcpy2DAsync.height = (size_t)height; \
  cb_data.args.hipMemcpy2DAsync.kind = (hipMemcpyKind)kind; \
  cb_data.args.hipMemcpy2DAsync.stream = (hipStream_t)stream; \
};
// hipFuncGetAttributes[('hipFuncAttributes*', 'attr'), ('const void*', 'func')]
#define INIT_hipFuncGetAttributes_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFuncGetAttributes.attr = (hipFuncAttributes*)attr; \
  cb_data.args.hipFuncGetAttributes.func = (const void*)func; \
};
// hipGetSymbolSize[('size_t*', 'size'), ('const void*', 'symbol')]
#define INIT_hipGetSymbolSize_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipGetSymbolSize.size = (size_t*)sizePtr; \
  cb_data.args.hipGetSymbolSize.symbol = (const void*)symbol; \
};
// hipIpcGetEventHandle[('hipIpcEventHandle_t*', 'handle'), ('hipEvent_t', 'event')]
#define INIT_hipIpcGetEventHandle_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipIpcGetEventHandle.handle = (hipIpcEventHandle_t*)handle; \
  cb_data.args.hipIpcGetEventHandle.event = (hipEvent_t)event; \
};
// hipEventCreateWithFlags[('hipEvent_t*', 'event'), ('unsigned int', 'flags')]
#define INIT_hipEventCreateWithFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventCreateWithFlags.event = (hipEvent_t*)event; \
  cb_data.args.hipEventCreateWithFlags.flags = (unsigned int)flags; \
};
// hipStreamQuery[('hipStream_t', 'stream')]
#define INIT_hipStreamQuery_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamQuery.stream = (hipStream_t)stream; \
};
// hipDeviceGetPCIBusId[('char*', 'pciBusId'), ('int', 'len'), ('int', 'device')]
#define INIT_hipDeviceGetPCIBusId_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetPCIBusId.pciBusId = strdup("***"); \
  cb_data.args.hipDeviceGetPCIBusId.len = (int)len; \
  cb_data.args.hipDeviceGetPCIBusId.device = (int)device; \
};
// hipMemcpy[('void*', 'dst'), ('const void*', 'src'), ('size_t', 'sizeBytes'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpy_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy.dst = (void*)dst; \
  cb_data.args.hipMemcpy.src = (const void*)src; \
  cb_data.args.hipMemcpy.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpy.kind = (hipMemcpyKind)kind; \
};
// hipPeekAtLastError[]
#define INIT_hipPeekAtLastError_CB_ARGS_DATA(cb_data) { \
};
// hipExtLaunchMultiKernelMultiDevice[('hipLaunchParams*', 'launchParamsList'), ('int', 'numDevices'), ('unsigned int', 'flags')]
#define INIT_hipExtLaunchMultiKernelMultiDevice_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipExtLaunchMultiKernelMultiDevice.launchParamsList = (hipLaunchParams*)launchParamsList; \
  cb_data.args.hipExtLaunchMultiKernelMultiDevice.numDevices = (int)numDevices; \
  cb_data.args.hipExtLaunchMultiKernelMultiDevice.flags = (unsigned int)flags; \
};
// hipStreamAddCallback[('hipStream_t', 'stream'), ('hipStreamCallback_t', 'callback'), ('void*', 'userData'), ('unsigned int', 'flags')]
#define INIT_hipStreamAddCallback_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipStreamAddCallback.stream = (hipStream_t)stream; \
  cb_data.args.hipStreamAddCallback.callback = (hipStreamCallback_t)callback; \
  cb_data.args.hipStreamAddCallback.userData = (void*)userData; \
  cb_data.args.hipStreamAddCallback.flags = (unsigned int)flags; \
};
// hipMemcpyToArray[('hipArray*', 'dst'), ('size_t', 'wOffset'), ('size_t', 'hOffset'), ('const void*', 'src'), ('size_t', 'count'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpyToArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyToArray.dst = (hipArray*)dst; \
  cb_data.args.hipMemcpyToArray.wOffset = (size_t)wOffset; \
  cb_data.args.hipMemcpyToArray.hOffset = (size_t)hOffset; \
  cb_data.args.hipMemcpyToArray.src = (const void*)src; \
  cb_data.args.hipMemcpyToArray.count = (size_t)count; \
  cb_data.args.hipMemcpyToArray.kind = (hipMemcpyKind)kind; \
};
// hipMemsetD32[('hipDeviceptr_t', 'dest'), ('int', 'value'), ('size_t', 'count')]
#define INIT_hipMemsetD32_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetD32.dest = (hipDeviceptr_t)dst; \
  cb_data.args.hipMemsetD32.value = (int)value; \
  cb_data.args.hipMemsetD32.count = (size_t)count; \
};
// hipExtModuleLaunchKernel[('hipFunction_t', 'f'), ('unsigned int', 'globalWorkSizeX'), ('unsigned int', 'globalWorkSizeY'), ('unsigned int', 'globalWorkSizeZ'), ('unsigned int', 'localWorkSizeX'), ('unsigned int', 'localWorkSizeY'), ('unsigned int', 'localWorkSizeZ'), ('size_t', 'sharedMemBytes'), ('hipStream_t', 'hStream'), ('void**', 'kernelParams'), ('void**', 'extra'), ('hipEvent_t', 'startEvent'), ('hipEvent_t', 'stopEvent'), ('unsigned int', 'flags')]
#define INIT_hipExtModuleLaunchKernel_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipExtModuleLaunchKernel.f = (hipFunction_t)f; \
  cb_data.args.hipExtModuleLaunchKernel.globalWorkSizeX = (unsigned int)globalWorkSizeX; \
  cb_data.args.hipExtModuleLaunchKernel.globalWorkSizeY = (unsigned int)globalWorkSizeY; \
  cb_data.args.hipExtModuleLaunchKernel.globalWorkSizeZ = (unsigned int)globalWorkSizeZ; \
  cb_data.args.hipExtModuleLaunchKernel.localWorkSizeX = (unsigned int)localWorkSizeX; \
  cb_data.args.hipExtModuleLaunchKernel.localWorkSizeY = (unsigned int)localWorkSizeY; \
  cb_data.args.hipExtModuleLaunchKernel.localWorkSizeZ = (unsigned int)localWorkSizeZ; \
  cb_data.args.hipExtModuleLaunchKernel.sharedMemBytes = (size_t)sharedMemBytes; \
  cb_data.args.hipExtModuleLaunchKernel.hStream = (hipStream_t)hStream; \
  cb_data.args.hipExtModuleLaunchKernel.kernelParams = (void**)kernelParams; \
  cb_data.args.hipExtModuleLaunchKernel.extra = (void**)extra; \
  cb_data.args.hipExtModuleLaunchKernel.startEvent = (hipEvent_t)startEvent; \
  cb_data.args.hipExtModuleLaunchKernel.stopEvent = (hipEvent_t)stopEvent; \
  cb_data.args.hipExtModuleLaunchKernel.flags = (unsigned int)flags; \
};
// hipDeviceSynchronize[]
#define INIT_hipDeviceSynchronize_CB_ARGS_DATA(cb_data) { \
};
// hipDeviceGetCacheConfig[('hipFuncCache_t*', 'cacheConfig')]
#define INIT_hipDeviceGetCacheConfig_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetCacheConfig.cacheConfig = (hipFuncCache_t*)cacheConfig; \
};
// hipMalloc3D[('hipPitchedPtr*', 'pitchedDevPtr'), ('hipExtent', 'extent')]
#define INIT_hipMalloc3D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMalloc3D.pitchedDevPtr = (hipPitchedPtr*)pitchedDevPtr; \
  cb_data.args.hipMalloc3D.extent = (hipExtent)extent; \
};
// hipPointerGetAttributes[('hipPointerAttribute_t*', 'attributes'), ('const void*', 'ptr')]
#define INIT_hipPointerGetAttributes_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipPointerGetAttributes.attributes = (hipPointerAttribute_t*)attributes; \
  cb_data.args.hipPointerGetAttributes.ptr = (const void*)ptr; \
};
// hipMemsetAsync[('void*', 'dst'), ('int', 'value'), ('size_t', 'sizeBytes'), ('hipStream_t', 'stream')]
#define INIT_hipMemsetAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetAsync.dst = (void*)dst; \
  cb_data.args.hipMemsetAsync.value = (int)value; \
  cb_data.args.hipMemsetAsync.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemsetAsync.stream = (hipStream_t)stream; \
};
// hipMemcpyToSymbol[('const void*', 'symbol'), ('const void*', 'src'), ('size_t', 'sizeBytes'), ('size_t', 'offset'), ('hipMemcpyKind', 'kind')]
#define INIT_hipMemcpyToSymbol_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyToSymbol.symbol = (const void*)symbol; \
  cb_data.args.hipMemcpyToSymbol.src = (const void*)src; \
  cb_data.args.hipMemcpyToSymbol.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipMemcpyToSymbol.offset = (size_t)offset; \
  cb_data.args.hipMemcpyToSymbol.kind = (hipMemcpyKind)kind; \
};
// hipModuleOccupancyMaxPotentialBlockSizeWithFlags[('int*', 'gridSize'), ('int*', 'blockSize'), ('hipFunction_t', 'f'), ('size_t', 'dynSharedMemPerBlk'), ('int', 'blockSizeLimit'), ('unsigned int', 'flags')]
#define INIT_hipModuleOccupancyMaxPotentialBlockSizeWithFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.gridSize = (int*)gridSize; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.blockSize = (int*)blockSize; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.f = (hipFunction_t)f; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.dynSharedMemPerBlk = (size_t)dynSharedMemPerBlk; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.blockSizeLimit = (int)blockSizeLimit; \
  cb_data.args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.flags = (unsigned int)flags; \
};
// hipCtxPushCurrent[('hipCtx_t', 'ctx')]
#define INIT_hipCtxPushCurrent_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxPushCurrent.ctx = (hipCtx_t)ctx; \
};
// hipMemcpyPeer[('void*', 'dst'), ('int', 'dstDeviceId'), ('const void*', 'src'), ('int', 'srcDeviceId'), ('size_t', 'sizeBytes')]
#define INIT_hipMemcpyPeer_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyPeer.dst = (void*)dst; \
  cb_data.args.hipMemcpyPeer.dstDeviceId = (int)dstDevice; \
  cb_data.args.hipMemcpyPeer.src = (const void*)src; \
  cb_data.args.hipMemcpyPeer.srcDeviceId = (int)srcDevice; \
  cb_data.args.hipMemcpyPeer.sizeBytes = (size_t)sizeBytes; \
};
// hipEventSynchronize[('hipEvent_t', 'event')]
#define INIT_hipEventSynchronize_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventSynchronize.event = (hipEvent_t)event; \
};
// hipMemcpyDtoDAsync[('hipDeviceptr_t', 'dst'), ('hipDeviceptr_t', 'src'), ('size_t', 'sizeBytes'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyDtoDAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyDtoDAsync.dst = (hipDeviceptr_t)dstDevice; \
  cb_data.args.hipMemcpyDtoDAsync.src = (hipDeviceptr_t)srcDevice; \
  cb_data.args.hipMemcpyDtoDAsync.sizeBytes = (size_t)ByteCount; \
  cb_data.args.hipMemcpyDtoDAsync.stream = (hipStream_t)stream; \
};
// hipExtMallocWithFlags[('void**', 'ptr'), ('size_t', 'sizeBytes'), ('unsigned int', 'flags')]
#define INIT_hipExtMallocWithFlags_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipExtMallocWithFlags.ptr = (void**)ptr; \
  cb_data.args.hipExtMallocWithFlags.sizeBytes = (size_t)sizeBytes; \
  cb_data.args.hipExtMallocWithFlags.flags = (unsigned int)flags; \
};
// hipCtxEnablePeerAccess[('hipCtx_t', 'peerCtx'), ('unsigned int', 'flags')]
#define INIT_hipCtxEnablePeerAccess_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipCtxEnablePeerAccess.peerCtx = (hipCtx_t)peerCtx; \
  cb_data.args.hipCtxEnablePeerAccess.flags = (unsigned int)flags; \
};
// hipMemAllocHost[('void**', 'ptr'), ('size_t', 'size')]
#define INIT_hipMemAllocHost_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemAllocHost.ptr = (void**)ptr; \
  cb_data.args.hipMemAllocHost.size = (size_t)size; \
};
// hipMemcpyDtoHAsync[('void*', 'dst'), ('hipDeviceptr_t', 'src'), ('size_t', 'sizeBytes'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpyDtoHAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyDtoHAsync.dst = (void*)dstHost; \
  cb_data.args.hipMemcpyDtoHAsync.src = (hipDeviceptr_t)srcDevice; \
  cb_data.args.hipMemcpyDtoHAsync.sizeBytes = (size_t)ByteCount; \
  cb_data.args.hipMemcpyDtoHAsync.stream = (hipStream_t)stream; \
};
// hipModuleLaunchKernel[('hipFunction_t', 'f'), ('unsigned int', 'gridDimX'), ('unsigned int', 'gridDimY'), ('unsigned int', 'gridDimZ'), ('unsigned int', 'blockDimX'), ('unsigned int', 'blockDimY'), ('unsigned int', 'blockDimZ'), ('unsigned int', 'sharedMemBytes'), ('hipStream_t', 'stream'), ('void**', 'kernelParams'), ('void**', 'extra')]
#define INIT_hipModuleLaunchKernel_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleLaunchKernel.f = (hipFunction_t)f; \
  cb_data.args.hipModuleLaunchKernel.gridDimX = (unsigned int)gridDimX; \
  cb_data.args.hipModuleLaunchKernel.gridDimY = (unsigned int)gridDimY; \
  cb_data.args.hipModuleLaunchKernel.gridDimZ = (unsigned int)gridDimZ; \
  cb_data.args.hipModuleLaunchKernel.blockDimX = (unsigned int)blockDimX; \
  cb_data.args.hipModuleLaunchKernel.blockDimY = (unsigned int)blockDimY; \
  cb_data.args.hipModuleLaunchKernel.blockDimZ = (unsigned int)blockDimZ; \
  cb_data.args.hipModuleLaunchKernel.sharedMemBytes = (unsigned int)sharedMemBytes; \
  cb_data.args.hipModuleLaunchKernel.stream = (hipStream_t)hStream; \
  cb_data.args.hipModuleLaunchKernel.kernelParams = (void**)kernelParams; \
  cb_data.args.hipModuleLaunchKernel.extra = (void**)extra; \
};
// hipMemAllocPitch[('hipDeviceptr_t*', 'dptr'), ('size_t*', 'pitch'), ('size_t', 'widthInBytes'), ('size_t', 'height'), ('unsigned int', 'elementSizeBytes')]
#define INIT_hipMemAllocPitch_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemAllocPitch.dptr = (hipDeviceptr_t*)dptr; \
  cb_data.args.hipMemAllocPitch.pitch = (size_t*)pitch; \
  cb_data.args.hipMemAllocPitch.widthInBytes = (size_t)widthInBytes; \
  cb_data.args.hipMemAllocPitch.height = (size_t)height; \
  cb_data.args.hipMemAllocPitch.elementSizeBytes = (unsigned int)elementSizeBytes; \
};
// hipMemcpy2DFromArrayAsync[('void*', 'dst'), ('size_t', 'dpitch'), ('hipArray_const_t', 'src'), ('size_t', 'wOffset'), ('size_t', 'hOffset'), ('size_t', 'width'), ('size_t', 'height'), ('hipMemcpyKind', 'kind'), ('hipStream_t', 'stream')]
#define INIT_hipMemcpy2DFromArrayAsync_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpy2DFromArrayAsync.dst = (void*)dst; \
  cb_data.args.hipMemcpy2DFromArrayAsync.dpitch = (size_t)dpitch; \
  cb_data.args.hipMemcpy2DFromArrayAsync.src = (hipArray_const_t)src; \
  cb_data.args.hipMemcpy2DFromArrayAsync.wOffset = (size_t)wOffsetSrc; \
  cb_data.args.hipMemcpy2DFromArrayAsync.hOffset = (size_t)hOffsetSrc; \
  cb_data.args.hipMemcpy2DFromArrayAsync.width = (size_t)width; \
  cb_data.args.hipMemcpy2DFromArrayAsync.height = (size_t)height; \
  cb_data.args.hipMemcpy2DFromArrayAsync.kind = (hipMemcpyKind)kind; \
  cb_data.args.hipMemcpy2DFromArrayAsync.stream = (hipStream_t)stream; \
};
// hipDeviceGetLimit[('size_t*', 'pValue'), ('hipLimit_t', 'limit')]
#define INIT_hipDeviceGetLimit_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGetLimit.pValue = (size_t*)pValue; \
  cb_data.args.hipDeviceGetLimit.limit = (hipLimit_t)limit; \
};
// hipModuleLoadDataEx[('hipModule_t*', 'module'), ('const void*', 'image'), ('unsigned int', 'numOptions'), ('hipJitOption*', 'options'), ('void**', 'optionsValues')]
#define INIT_hipModuleLoadDataEx_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleLoadDataEx.module = (hipModule_t*)module; \
  cb_data.args.hipModuleLoadDataEx.image = (const void*)image; \
  cb_data.args.hipModuleLoadDataEx.numOptions = (unsigned int)numOptions; \
  cb_data.args.hipModuleLoadDataEx.options = (hipJitOption*)options; \
  cb_data.args.hipModuleLoadDataEx.optionsValues = (void**)optionsValues; \
};
// hipRuntimeGetVersion[('int*', 'runtimeVersion')]
#define INIT_hipRuntimeGetVersion_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipRuntimeGetVersion.runtimeVersion = (int*)runtimeVersion; \
};
// __hipPopCallConfiguration[('dim3*', 'gridDim'), ('dim3*', 'blockDim'), ('size_t*', 'sharedMem'), ('hipStream_t*', 'stream')]
#define INIT___hipPopCallConfiguration_CB_ARGS_DATA(cb_data) { \
  cb_data.args.__hipPopCallConfiguration.gridDim = (dim3*)gridDim; \
  cb_data.args.__hipPopCallConfiguration.blockDim = (dim3*)blockDim; \
  cb_data.args.__hipPopCallConfiguration.sharedMem = (size_t*)sharedMem; \
  cb_data.args.__hipPopCallConfiguration.stream = (hipStream_t*)stream; \
};
// hipGetDeviceProperties[('hipDeviceProp_t*', 'props'), ('hipDevice_t', 'device')]
#define INIT_hipGetDeviceProperties_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipGetDeviceProperties.props = (hipDeviceProp_t*)props; \
  cb_data.args.hipGetDeviceProperties.device = (hipDevice_t)device; \
};
// hipDeviceGet[('hipDevice_t*', 'device'), ('int', 'ordinal')]
#define INIT_hipDeviceGet_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDeviceGet.device = (hipDevice_t*)device; \
  cb_data.args.hipDeviceGet.ordinal = (int)deviceId; \
};
// hipFreeArray[('hipArray*', 'array')]
#define INIT_hipFreeArray_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipFreeArray.array = (hipArray*)array; \
};
// hipEventElapsedTime[('float*', 'ms'), ('hipEvent_t', 'start'), ('hipEvent_t', 'stop')]
#define INIT_hipEventElapsedTime_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipEventElapsedTime.ms = (float*)ms; \
  cb_data.args.hipEventElapsedTime.start = (hipEvent_t)start; \
  cb_data.args.hipEventElapsedTime.stop = (hipEvent_t)stop; \
};
// hipDevicePrimaryCtxRelease[('hipDevice_t', 'dev')]
#define INIT_hipDevicePrimaryCtxRelease_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDevicePrimaryCtxRelease.dev = (hipDevice_t)dev; \
};
// hipHostGetDevicePointer[('void**', 'devPtr'), ('void*', 'hstPtr'), ('unsigned int', 'flags')]
#define INIT_hipHostGetDevicePointer_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipHostGetDevicePointer.devPtr = (void**)devicePointer; \
  cb_data.args.hipHostGetDevicePointer.hstPtr = (void*)hostPointer; \
  cb_data.args.hipHostGetDevicePointer.flags = (unsigned int)flags; \
};
// hipMemcpyParam2D[('const hip_Memcpy2D*', 'pCopy')]
#define INIT_hipMemcpyParam2D_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemcpyParam2D.pCopy = (const hip_Memcpy2D*)pCopy; \
};
// hipDevicePrimaryCtxReset[('hipDevice_t', 'dev')]
#define INIT_hipDevicePrimaryCtxReset_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipDevicePrimaryCtxReset.dev = (hipDevice_t)dev; \
};
// hipModuleGetFunction[('hipFunction_t*', 'function'), ('hipModule_t', 'module'), ('const char*', 'kname')]
#define INIT_hipModuleGetFunction_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipModuleGetFunction.function = (hipFunction_t*)hfunc; \
  cb_data.args.hipModuleGetFunction.module = (hipModule_t)hmod; \
  cb_data.args.hipModuleGetFunction.kname = (name) ? strdup(name) : NULL; \
};
// hipMemsetD32Async[('hipDeviceptr_t', 'dst'), ('int', 'value'), ('size_t', 'count'), ('hipStream_t', 'stream')]
#define INIT_hipMemsetD32Async_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipMemsetD32Async.dst = (hipDeviceptr_t)dst; \
  cb_data.args.hipMemsetD32Async.value = (int)value; \
  cb_data.args.hipMemsetD32Async.count = (size_t)count; \
  cb_data.args.hipMemsetD32Async.stream = (hipStream_t)stream; \
};
// hipGetDevice[('int*', 'deviceId')]
#define INIT_hipGetDevice_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipGetDevice.deviceId = (int*)deviceId; \
};
// hipGetDeviceCount[('int*', 'count')]
#define INIT_hipGetDeviceCount_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipGetDeviceCount.count = (int*)count; \
};
// hipIpcOpenEventHandle[('hipEvent_t*', 'event'), ('hipIpcEventHandle_t', 'handle')]
#define INIT_hipIpcOpenEventHandle_CB_ARGS_DATA(cb_data) { \
  cb_data.args.hipIpcOpenEventHandle.event = (hipEvent_t*)event; \
  cb_data.args.hipIpcOpenEventHandle.handle = (hipIpcEventHandle_t)handle; \
};
#define INIT_CB_ARGS_DATA(cb_id, cb_data) INIT_##cb_id##_CB_ARGS_DATA(cb_data)

#if HIP_PROF_HIP_API_STRING
#include <sstream>
#include <string>
// HIP API string method, method name and parameters
const char* hipApiString(hip_api_id_t id, const hip_api_data_t* data) {
  std::ostringstream oss;
  switch (id) {
    case HIP_API_ID_hipDrvMemcpy3DAsync:
      oss << "hipDrvMemcpy3DAsync(";
      if (data->args.hipDrvMemcpy3DAsync.pCopy == NULL) oss << "pCopy=NULL";
      else oss << "pCopy=" << data->args.hipDrvMemcpy3DAsync.pCopy;
      oss << ", stream=" << data->args.hipDrvMemcpy3DAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceEnablePeerAccess:
      oss << "hipDeviceEnablePeerAccess(";
      oss << "peerDeviceId=" << data->args.hipDeviceEnablePeerAccess.peerDeviceId;
      oss << ", flags=" << data->args.hipDeviceEnablePeerAccess.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamCreateWithPriority:
      oss << "hipStreamCreateWithPriority(";
      if (data->args.hipStreamCreateWithPriority.stream == NULL) oss << "stream=NULL";
      else oss << "stream=" << data->args.hipStreamCreateWithPriority.stream;
      oss << ", flags=" << data->args.hipStreamCreateWithPriority.flags;
      oss << ", priority=" << data->args.hipStreamCreateWithPriority.priority;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyToSymbolAsync:
      oss << "hipMemcpyToSymbolAsync(";
      if (data->args.hipMemcpyToSymbolAsync.symbol == NULL) oss << "symbol=NULL";
      else oss << "symbol=" << data->args.hipMemcpyToSymbolAsync.symbol;
      if (data->args.hipMemcpyToSymbolAsync.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyToSymbolAsync.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyToSymbolAsync.sizeBytes;
      oss << ", offset=" << data->args.hipMemcpyToSymbolAsync.offset;
      oss << ", kind=" << data->args.hipMemcpyToSymbolAsync.kind;
      oss << ", stream=" << data->args.hipMemcpyToSymbolAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMallocPitch:
      oss << "hipMallocPitch(";
      if (data->args.hipMallocPitch.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipMallocPitch.ptr;
      if (data->args.hipMallocPitch.pitch == NULL) oss << ", pitch=NULL";
      else oss << ", pitch=" << data->args.hipMallocPitch.pitch;
      oss << ", width=" << data->args.hipMallocPitch.width;
      oss << ", height=" << data->args.hipMallocPitch.height;
      oss << ")";
    break;
    case HIP_API_ID_hipMalloc:
      oss << "hipMalloc(";
      if (data->args.hipMalloc.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipMalloc.ptr;
      oss << ", size=" << data->args.hipMalloc.size;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetD16:
      oss << "hipMemsetD16(";
      oss << "dest=" << data->args.hipMemsetD16.dest;
      oss << ", value=" << data->args.hipMemsetD16.value;
      oss << ", count=" << data->args.hipMemsetD16.count;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetName:
      oss << "hipDeviceGetName(";
      if (data->args.hipDeviceGetName.name == NULL) oss << "name=NULL";
      else oss << "name=" << data->args.hipDeviceGetName.name;
      oss << ", len=" << data->args.hipDeviceGetName.len;
      oss << ", device=" << data->args.hipDeviceGetName.device;
      oss << ")";
    break;
    case HIP_API_ID_hipEventRecord:
      oss << "hipEventRecord(";
      oss << "event=" << data->args.hipEventRecord.event;
      oss << ", stream=" << data->args.hipEventRecord.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxSynchronize:
      oss << "hipCtxSynchronize(";
      oss << ")";
    break;
    case HIP_API_ID_hipSetDevice:
      oss << "hipSetDevice(";
      oss << "deviceId=" << data->args.hipSetDevice.deviceId;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxGetApiVersion:
      oss << "hipCtxGetApiVersion(";
      oss << "ctx=" << data->args.hipCtxGetApiVersion.ctx;
      if (data->args.hipCtxGetApiVersion.apiVersion == NULL) oss << ", apiVersion=NULL";
      else oss << ", apiVersion=" << data->args.hipCtxGetApiVersion.apiVersion;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyFromSymbolAsync:
      oss << "hipMemcpyFromSymbolAsync(";
      if (data->args.hipMemcpyFromSymbolAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyFromSymbolAsync.dst;
      if (data->args.hipMemcpyFromSymbolAsync.symbol == NULL) oss << ", symbol=NULL";
      else oss << ", symbol=" << data->args.hipMemcpyFromSymbolAsync.symbol;
      oss << ", sizeBytes=" << data->args.hipMemcpyFromSymbolAsync.sizeBytes;
      oss << ", offset=" << data->args.hipMemcpyFromSymbolAsync.offset;
      oss << ", kind=" << data->args.hipMemcpyFromSymbolAsync.kind;
      oss << ", stream=" << data->args.hipMemcpyFromSymbolAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipExtGetLinkTypeAndHopCount:
      oss << "hipExtGetLinkTypeAndHopCount(";
      oss << "device1=" << data->args.hipExtGetLinkTypeAndHopCount.device1;
      oss << ", device2=" << data->args.hipExtGetLinkTypeAndHopCount.device2;
      if (data->args.hipExtGetLinkTypeAndHopCount.linktype == NULL) oss << ", linktype=NULL";
      else oss << ", linktype=" << data->args.hipExtGetLinkTypeAndHopCount.linktype;
      if (data->args.hipExtGetLinkTypeAndHopCount.hopcount == NULL) oss << ", hopcount=NULL";
      else oss << ", hopcount=" << data->args.hipExtGetLinkTypeAndHopCount.hopcount;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleOccupancyMaxActiveBlocksPerMultiprocessor:
      oss << "hipModuleOccupancyMaxActiveBlocksPerMultiprocessor(";
      if (data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.numBlocks == NULL) oss << "numBlocks=NULL";
      else oss << "numBlocks=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.numBlocks;
      oss << ", f=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.f;
      oss << ", blockSize=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.blockSize;
      oss << ", dynSharedMemPerBlk=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessor.dynSharedMemPerBlk;
      oss << ")";
    break;
    case HIP_API_ID_hipMemset3D:
      oss << "hipMemset3D(";
      oss << "pitchedDevPtr=" << data->args.hipMemset3D.pitchedDevPtr;
      oss << ", value=" << data->args.hipMemset3D.value;
      oss << ", extent=" << data->args.hipMemset3D.extent;
      oss << ")";
    break;
    case HIP_API_ID_hipHostFree:
      oss << "hipHostFree(";
      if (data->args.hipHostFree.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipHostFree.ptr;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy2DToArray:
      oss << "hipMemcpy2DToArray(";
      if (data->args.hipMemcpy2DToArray.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpy2DToArray.dst;
      oss << ", wOffset=" << data->args.hipMemcpy2DToArray.wOffset;
      oss << ", hOffset=" << data->args.hipMemcpy2DToArray.hOffset;
      if (data->args.hipMemcpy2DToArray.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpy2DToArray.src;
      oss << ", spitch=" << data->args.hipMemcpy2DToArray.spitch;
      oss << ", width=" << data->args.hipMemcpy2DToArray.width;
      oss << ", height=" << data->args.hipMemcpy2DToArray.height;
      oss << ", kind=" << data->args.hipMemcpy2DToArray.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetD8Async:
      oss << "hipMemsetD8Async(";
      oss << "dest=" << data->args.hipMemsetD8Async.dest;
      oss << ", value=" << data->args.hipMemsetD8Async.value;
      oss << ", count=" << data->args.hipMemsetD8Async.count;
      oss << ", stream=" << data->args.hipMemsetD8Async.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxGetCacheConfig:
      oss << "hipCtxGetCacheConfig(";
      if (data->args.hipCtxGetCacheConfig.cacheConfig == NULL) oss << "cacheConfig=NULL";
      else oss << "cacheConfig=" << data->args.hipCtxGetCacheConfig.cacheConfig;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamWaitEvent:
      oss << "hipStreamWaitEvent(";
      oss << "stream=" << data->args.hipStreamWaitEvent.stream;
      oss << ", event=" << data->args.hipStreamWaitEvent.event;
      oss << ", flags=" << data->args.hipStreamWaitEvent.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetStreamPriorityRange:
      oss << "hipDeviceGetStreamPriorityRange(";
      if (data->args.hipDeviceGetStreamPriorityRange.leastPriority == NULL) oss << "leastPriority=NULL";
      else oss << "leastPriority=" << data->args.hipDeviceGetStreamPriorityRange.leastPriority;
      if (data->args.hipDeviceGetStreamPriorityRange.greatestPriority == NULL) oss << ", greatestPriority=NULL";
      else oss << ", greatestPriority=" << data->args.hipDeviceGetStreamPriorityRange.greatestPriority;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleLoad:
      oss << "hipModuleLoad(";
      if (data->args.hipModuleLoad.module == NULL) oss << "module=NULL";
      else oss << "module=" << data->args.hipModuleLoad.module;
      if (data->args.hipModuleLoad.fname == NULL) oss << ", fname=NULL";
      else oss << ", fname=" << data->args.hipModuleLoad.fname;
      oss << ")";
    break;
    case HIP_API_ID_hipDevicePrimaryCtxSetFlags:
      oss << "hipDevicePrimaryCtxSetFlags(";
      oss << "dev=" << data->args.hipDevicePrimaryCtxSetFlags.dev;
      oss << ", flags=" << data->args.hipDevicePrimaryCtxSetFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipLaunchCooperativeKernel:
      oss << "hipLaunchCooperativeKernel(";
      if (data->args.hipLaunchCooperativeKernel.f == NULL) oss << "f=NULL";
      else oss << "f=" << data->args.hipLaunchCooperativeKernel.f;
      oss << ", gridDim=" << data->args.hipLaunchCooperativeKernel.gridDim;
      oss << ", blockDimX=" << data->args.hipLaunchCooperativeKernel.blockDimX;
      if (data->args.hipLaunchCooperativeKernel.kernelParams == NULL) oss << ", kernelParams=NULL";
      else oss << ", kernelParams=" << data->args.hipLaunchCooperativeKernel.kernelParams;
      oss << ", sharedMemBytes=" << data->args.hipLaunchCooperativeKernel.sharedMemBytes;
      oss << ", stream=" << data->args.hipLaunchCooperativeKernel.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipLaunchCooperativeKernelMultiDevice:
      oss << "hipLaunchCooperativeKernelMultiDevice(";
      if (data->args.hipLaunchCooperativeKernelMultiDevice.launchParamsList == NULL) oss << "launchParamsList=NULL";
      else oss << "launchParamsList=" << data->args.hipLaunchCooperativeKernelMultiDevice.launchParamsList;
      oss << ", numDevices=" << data->args.hipLaunchCooperativeKernelMultiDevice.numDevices;
      oss << ", flags=" << data->args.hipLaunchCooperativeKernelMultiDevice.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyAsync:
      oss << "hipMemcpyAsync(";
      if (data->args.hipMemcpyAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyAsync.dst;
      if (data->args.hipMemcpyAsync.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyAsync.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyAsync.sizeBytes;
      oss << ", kind=" << data->args.hipMemcpyAsync.kind;
      oss << ", stream=" << data->args.hipMemcpyAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMalloc3DArray:
      oss << "hipMalloc3DArray(";
      if (data->args.hipMalloc3DArray.array == NULL) oss << "array=NULL";
      else oss << "array=" << data->args.hipMalloc3DArray.array;
      if (data->args.hipMalloc3DArray.desc == NULL) oss << ", desc=NULL";
      else oss << ", desc=" << data->args.hipMalloc3DArray.desc;
      oss << ", extent=" << data->args.hipMalloc3DArray.extent;
      oss << ", flags=" << data->args.hipMalloc3DArray.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMallocHost:
      oss << "hipMallocHost(";
      if (data->args.hipMallocHost.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipMallocHost.ptr;
      oss << ", size=" << data->args.hipMallocHost.size;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxGetCurrent:
      oss << "hipCtxGetCurrent(";
      if (data->args.hipCtxGetCurrent.ctx == NULL) oss << "ctx=NULL";
      else oss << "ctx=" << data->args.hipCtxGetCurrent.ctx;
      oss << ")";
    break;
    case HIP_API_ID_hipDevicePrimaryCtxGetState:
      oss << "hipDevicePrimaryCtxGetState(";
      oss << "dev=" << data->args.hipDevicePrimaryCtxGetState.dev;
      if (data->args.hipDevicePrimaryCtxGetState.flags == NULL) oss << ", flags=NULL";
      else oss << ", flags=" << data->args.hipDevicePrimaryCtxGetState.flags;
      if (data->args.hipDevicePrimaryCtxGetState.active == NULL) oss << ", active=NULL";
      else oss << ", active=" << data->args.hipDevicePrimaryCtxGetState.active;
      oss << ")";
    break;
    case HIP_API_ID_hipEventQuery:
      oss << "hipEventQuery(";
      oss << "event=" << data->args.hipEventQuery.event;
      oss << ")";
    break;
    case HIP_API_ID_hipEventCreate:
      oss << "hipEventCreate(";
      if (data->args.hipEventCreate.event == NULL) oss << "event=NULL";
      else oss << "event=" << data->args.hipEventCreate.event;
      oss << ")";
    break;
    case HIP_API_ID_hipMemGetAddressRange:
      oss << "hipMemGetAddressRange(";
      if (data->args.hipMemGetAddressRange.pbase == NULL) oss << "pbase=NULL";
      else oss << "pbase=" << data->args.hipMemGetAddressRange.pbase;
      if (data->args.hipMemGetAddressRange.psize == NULL) oss << ", psize=NULL";
      else oss << ", psize=" << data->args.hipMemGetAddressRange.psize;
      oss << ", dptr=" << data->args.hipMemGetAddressRange.dptr;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyFromSymbol:
      oss << "hipMemcpyFromSymbol(";
      if (data->args.hipMemcpyFromSymbol.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyFromSymbol.dst;
      if (data->args.hipMemcpyFromSymbol.symbol == NULL) oss << ", symbol=NULL";
      else oss << ", symbol=" << data->args.hipMemcpyFromSymbol.symbol;
      oss << ", sizeBytes=" << data->args.hipMemcpyFromSymbol.sizeBytes;
      oss << ", offset=" << data->args.hipMemcpyFromSymbol.offset;
      oss << ", kind=" << data->args.hipMemcpyFromSymbol.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipArrayCreate:
      oss << "hipArrayCreate(";
      if (data->args.hipArrayCreate.pHandle == NULL) oss << "pHandle=NULL";
      else oss << "pHandle=" << data->args.hipArrayCreate.pHandle;
      if (data->args.hipArrayCreate.pAllocateArray == NULL) oss << ", pAllocateArray=NULL";
      else oss << ", pAllocateArray=" << data->args.hipArrayCreate.pAllocateArray;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamGetFlags:
      oss << "hipStreamGetFlags(";
      oss << "stream=" << data->args.hipStreamGetFlags.stream;
      if (data->args.hipStreamGetFlags.flags == NULL) oss << ", flags=NULL";
      else oss << ", flags=" << data->args.hipStreamGetFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMallocArray:
      oss << "hipMallocArray(";
      if (data->args.hipMallocArray.array == NULL) oss << "array=NULL";
      else oss << "array=" << data->args.hipMallocArray.array;
      if (data->args.hipMallocArray.desc == NULL) oss << ", desc=NULL";
      else oss << ", desc=" << data->args.hipMallocArray.desc;
      oss << ", width=" << data->args.hipMallocArray.width;
      oss << ", height=" << data->args.hipMallocArray.height;
      oss << ", flags=" << data->args.hipMallocArray.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxGetSharedMemConfig:
      oss << "hipCtxGetSharedMemConfig(";
      if (data->args.hipCtxGetSharedMemConfig.pConfig == NULL) oss << "pConfig=NULL";
      else oss << "pConfig=" << data->args.hipCtxGetSharedMemConfig.pConfig;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleOccupancyMaxPotentialBlockSize:
      oss << "hipModuleOccupancyMaxPotentialBlockSize(";
      if (data->args.hipModuleOccupancyMaxPotentialBlockSize.gridSize == NULL) oss << "gridSize=NULL";
      else oss << "gridSize=" << data->args.hipModuleOccupancyMaxPotentialBlockSize.gridSize;
      if (data->args.hipModuleOccupancyMaxPotentialBlockSize.blockSize == NULL) oss << ", blockSize=NULL";
      else oss << ", blockSize=" << data->args.hipModuleOccupancyMaxPotentialBlockSize.blockSize;
      oss << ", f=" << data->args.hipModuleOccupancyMaxPotentialBlockSize.f;
      oss << ", dynSharedMemPerBlk=" << data->args.hipModuleOccupancyMaxPotentialBlockSize.dynSharedMemPerBlk;
      oss << ", blockSizeLimit=" << data->args.hipModuleOccupancyMaxPotentialBlockSize.blockSizeLimit;
      oss << ")";
    break;
    case HIP_API_ID_hipMemPtrGetInfo:
      oss << "hipMemPtrGetInfo(";
      if (data->args.hipMemPtrGetInfo.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipMemPtrGetInfo.ptr;
      if (data->args.hipMemPtrGetInfo.size == NULL) oss << ", size=NULL";
      else oss << ", size=" << data->args.hipMemPtrGetInfo.size;
      oss << ")";
    break;
    case HIP_API_ID_hipFuncGetAttribute:
      oss << "hipFuncGetAttribute(";
      if (data->args.hipFuncGetAttribute.value == NULL) oss << "value=NULL";
      else oss << "value=" << data->args.hipFuncGetAttribute.value;
      oss << ", attrib=" << data->args.hipFuncGetAttribute.attrib;
      oss << ", hfunc=" << data->args.hipFuncGetAttribute.hfunc;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxGetFlags:
      oss << "hipCtxGetFlags(";
      if (data->args.hipCtxGetFlags.flags == NULL) oss << "flags=NULL";
      else oss << "flags=" << data->args.hipCtxGetFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamDestroy:
      oss << "hipStreamDestroy(";
      oss << "stream=" << data->args.hipStreamDestroy.stream;
      oss << ")";
    break;
    case HIP_API_ID___hipPushCallConfiguration:
      oss << "__hipPushCallConfiguration(";
      oss << "gridDim=" << data->args.__hipPushCallConfiguration.gridDim;
      oss << ", blockDim=" << data->args.__hipPushCallConfiguration.blockDim;
      oss << ", sharedMem=" << data->args.__hipPushCallConfiguration.sharedMem;
      oss << ", stream=" << data->args.__hipPushCallConfiguration.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMemset3DAsync:
      oss << "hipMemset3DAsync(";
      oss << "pitchedDevPtr=" << data->args.hipMemset3DAsync.pitchedDevPtr;
      oss << ", value=" << data->args.hipMemset3DAsync.value;
      oss << ", extent=" << data->args.hipMemset3DAsync.extent;
      oss << ", stream=" << data->args.hipMemset3DAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy3D:
      oss << "hipMemcpy3D(";
      if (data->args.hipMemcpy3D.p == NULL) oss << "p=NULL";
      else oss << "p=" << data->args.hipMemcpy3D.p;
      oss << ")";
    break;
    case HIP_API_ID_hipInit:
      oss << "hipInit(";
      oss << "flags=" << data->args.hipInit.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyAtoH:
      oss << "hipMemcpyAtoH(";
      if (data->args.hipMemcpyAtoH.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyAtoH.dst;
      if (data->args.hipMemcpyAtoH.srcArray == NULL) oss << ", srcArray=NULL";
      else oss << ", srcArray=" << data->args.hipMemcpyAtoH.srcArray;
      oss << ", srcOffset=" << data->args.hipMemcpyAtoH.srcOffset;
      oss << ", count=" << data->args.hipMemcpyAtoH.count;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamGetPriority:
      oss << "hipStreamGetPriority(";
      oss << ")";
    break;
    case HIP_API_ID_hipMemset2D:
      oss << "hipMemset2D(";
      if (data->args.hipMemset2D.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemset2D.dst;
      oss << ", pitch=" << data->args.hipMemset2D.pitch;
      oss << ", value=" << data->args.hipMemset2D.value;
      oss << ", width=" << data->args.hipMemset2D.width;
      oss << ", height=" << data->args.hipMemset2D.height;
      oss << ")";
    break;
    case HIP_API_ID_hipMemset2DAsync:
      oss << "hipMemset2DAsync(";
      if (data->args.hipMemset2DAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemset2DAsync.dst;
      oss << ", pitch=" << data->args.hipMemset2DAsync.pitch;
      oss << ", value=" << data->args.hipMemset2DAsync.value;
      oss << ", width=" << data->args.hipMemset2DAsync.width;
      oss << ", height=" << data->args.hipMemset2DAsync.height;
      oss << ", stream=" << data->args.hipMemset2DAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceCanAccessPeer:
      oss << "hipDeviceCanAccessPeer(";
      if (data->args.hipDeviceCanAccessPeer.canAccessPeer == NULL) oss << "canAccessPeer=NULL";
      else oss << "canAccessPeer=" << data->args.hipDeviceCanAccessPeer.canAccessPeer;
      oss << ", deviceId=" << data->args.hipDeviceCanAccessPeer.deviceId;
      oss << ", peerDeviceId=" << data->args.hipDeviceCanAccessPeer.peerDeviceId;
      oss << ")";
    break;
    case HIP_API_ID_hipLaunchByPtr:
      oss << "hipLaunchByPtr(";
      if (data->args.hipLaunchByPtr.hostFunction == NULL) oss << "hostFunction=NULL";
      else oss << "hostFunction=" << data->args.hipLaunchByPtr.hostFunction;
      oss << ")";
    break;
    case HIP_API_ID_hipLaunchKernel:
      oss << "hipLaunchKernel(";
      if (data->args.hipLaunchKernel.function_address == NULL) oss << "function_address=NULL";
      else oss << "function_address=" << data->args.hipLaunchKernel.function_address;
      oss << ", numBlocks=" << data->args.hipLaunchKernel.numBlocks;
      oss << ", dimBlocks=" << data->args.hipLaunchKernel.dimBlocks;
      if (data->args.hipLaunchKernel.args == NULL) oss << ", args=NULL";
      else oss << ", args=" << data->args.hipLaunchKernel.args;
      oss << ", sharedMemBytes=" << data->args.hipLaunchKernel.sharedMemBytes;
      oss << ", stream=" << data->args.hipLaunchKernel.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetD16Async:
      oss << "hipMemsetD16Async(";
      oss << "dest=" << data->args.hipMemsetD16Async.dest;
      oss << ", value=" << data->args.hipMemsetD16Async.value;
      oss << ", count=" << data->args.hipMemsetD16Async.count;
      oss << ", stream=" << data->args.hipMemsetD16Async.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleUnload:
      oss << "hipModuleUnload(";
      oss << "module=" << data->args.hipModuleUnload.module;
      oss << ")";
    break;
    case HIP_API_ID_hipHostUnregister:
      oss << "hipHostUnregister(";
      if (data->args.hipHostUnregister.hostPtr == NULL) oss << "hostPtr=NULL";
      else oss << "hostPtr=" << data->args.hipHostUnregister.hostPtr;
      oss << ")";
    break;
    case HIP_API_ID_hipProfilerStop:
      oss << "hipProfilerStop(";
      oss << ")";
    break;
    case HIP_API_ID_hipStreamSynchronize:
      oss << "hipStreamSynchronize(";
      oss << "stream=" << data->args.hipStreamSynchronize.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipFreeHost:
      oss << "hipFreeHost(";
      if (data->args.hipFreeHost.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipFreeHost.ptr;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceSetCacheConfig:
      oss << "hipDeviceSetCacheConfig(";
      oss << "cacheConfig=" << data->args.hipDeviceSetCacheConfig.cacheConfig;
      oss << ")";
    break;
    case HIP_API_ID_hipGetErrorName:
      oss << "hipGetErrorName(";
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyHtoD:
      oss << "hipMemcpyHtoD(";
      oss << "dst=" << data->args.hipMemcpyHtoD.dst;
      if (data->args.hipMemcpyHtoD.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyHtoD.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyHtoD.sizeBytes;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleGetGlobal:
      oss << "hipModuleGetGlobal(";
      if (data->args.hipModuleGetGlobal.dptr == NULL) oss << "dptr=NULL";
      else oss << "dptr=" << data->args.hipModuleGetGlobal.dptr;
      if (data->args.hipModuleGetGlobal.bytes == NULL) oss << ", bytes=NULL";
      else oss << ", bytes=" << data->args.hipModuleGetGlobal.bytes;
      oss << ", hmod=" << data->args.hipModuleGetGlobal.hmod;
      if (data->args.hipModuleGetGlobal.name == NULL) oss << ", name=NULL";
      else oss << ", name=" << data->args.hipModuleGetGlobal.name;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyHtoA:
      oss << "hipMemcpyHtoA(";
      if (data->args.hipMemcpyHtoA.dstArray == NULL) oss << "dstArray=NULL";
      else oss << "dstArray=" << data->args.hipMemcpyHtoA.dstArray;
      oss << ", dstOffset=" << data->args.hipMemcpyHtoA.dstOffset;
      if (data->args.hipMemcpyHtoA.srcHost == NULL) oss << ", srcHost=NULL";
      else oss << ", srcHost=" << data->args.hipMemcpyHtoA.srcHost;
      oss << ", count=" << data->args.hipMemcpyHtoA.count;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxCreate:
      oss << "hipCtxCreate(";
      if (data->args.hipCtxCreate.ctx == NULL) oss << "ctx=NULL";
      else oss << "ctx=" << data->args.hipCtxCreate.ctx;
      oss << ", flags=" << data->args.hipCtxCreate.flags;
      oss << ", device=" << data->args.hipCtxCreate.device;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy2D:
      oss << "hipMemcpy2D(";
      if (data->args.hipMemcpy2D.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpy2D.dst;
      oss << ", dpitch=" << data->args.hipMemcpy2D.dpitch;
      if (data->args.hipMemcpy2D.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpy2D.src;
      oss << ", spitch=" << data->args.hipMemcpy2D.spitch;
      oss << ", width=" << data->args.hipMemcpy2D.width;
      oss << ", height=" << data->args.hipMemcpy2D.height;
      oss << ", kind=" << data->args.hipMemcpy2D.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipIpcCloseMemHandle:
      oss << "hipIpcCloseMemHandle(";
      if (data->args.hipIpcCloseMemHandle.devPtr == NULL) oss << "devPtr=NULL";
      else oss << "devPtr=" << data->args.hipIpcCloseMemHandle.devPtr;
      oss << ")";
    break;
    case HIP_API_ID_hipChooseDevice:
      oss << "hipChooseDevice(";
      if (data->args.hipChooseDevice.device == NULL) oss << "device=NULL";
      else oss << "device=" << data->args.hipChooseDevice.device;
      if (data->args.hipChooseDevice.prop == NULL) oss << ", prop=NULL";
      else oss << ", prop=" << data->args.hipChooseDevice.prop;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceSetSharedMemConfig:
      oss << "hipDeviceSetSharedMemConfig(";
      oss << "config=" << data->args.hipDeviceSetSharedMemConfig.config;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceComputeCapability:
      oss << "hipDeviceComputeCapability(";
      if (data->args.hipDeviceComputeCapability.major == NULL) oss << "major=NULL";
      else oss << "major=" << data->args.hipDeviceComputeCapability.major;
      if (data->args.hipDeviceComputeCapability.minor == NULL) oss << ", minor=NULL";
      else oss << ", minor=" << data->args.hipDeviceComputeCapability.minor;
      oss << ", device=" << data->args.hipDeviceComputeCapability.device;
      oss << ")";
    break;
    case HIP_API_ID_hipMallocMipmappedArray:
      oss << "hipMallocMipmappedArray(";
      if (data->args.hipMallocMipmappedArray.mipmappedArray == NULL) oss << "mipmappedArray=NULL";
      else oss << "mipmappedArray=" << data->args.hipMallocMipmappedArray.mipmappedArray;
      if (data->args.hipMallocMipmappedArray.desc == NULL) oss << ", desc=NULL";
      else oss << ", desc=" << data->args.hipMallocMipmappedArray.desc;
      oss << ", extent=" << data->args.hipMallocMipmappedArray.extent;
      oss << ", numLevels=" << data->args.hipMallocMipmappedArray.numLevels;
      oss << ", flags=" << data->args.hipMallocMipmappedArray.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipSetupArgument:
      oss << "hipSetupArgument(";
      if (data->args.hipSetupArgument.arg == NULL) oss << "arg=NULL";
      else oss << "arg=" << data->args.hipSetupArgument.arg;
      oss << ", size=" << data->args.hipSetupArgument.size;
      oss << ", offset=" << data->args.hipSetupArgument.offset;
      oss << ")";
    break;
    case HIP_API_ID_hipProfilerStart:
      oss << "hipProfilerStart(";
      oss << ")";
    break;
    case HIP_API_ID_hipCtxSetCacheConfig:
      oss << "hipCtxSetCacheConfig(";
      oss << "cacheConfig=" << data->args.hipCtxSetCacheConfig.cacheConfig;
      oss << ")";
    break;
    case HIP_API_ID_hipFuncSetCacheConfig:
      oss << "hipFuncSetCacheConfig(";
      if (data->args.hipFuncSetCacheConfig.func == NULL) oss << "func=NULL";
      else oss << "func=" << data->args.hipFuncSetCacheConfig.func;
      oss << ", config=" << data->args.hipFuncSetCacheConfig.config;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags:
      oss << "hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(";
      if (data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.numBlocks == NULL) oss << "numBlocks=NULL";
      else oss << "numBlocks=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.numBlocks;
      oss << ", f=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.f;
      oss << ", blockSize=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.blockSize;
      oss << ", dynSharedMemPerBlk=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.dynSharedMemPerBlk;
      oss << ", flags=" << data->args.hipModuleOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleGetTexRef:
      oss << "hipModuleGetTexRef(";
      if (data->args.hipModuleGetTexRef.texRef == NULL) oss << "texRef=NULL";
      else oss << "texRef=" << data->args.hipModuleGetTexRef.texRef;
      oss << ", hmod=" << data->args.hipModuleGetTexRef.hmod;
      if (data->args.hipModuleGetTexRef.name == NULL) oss << ", name=NULL";
      else oss << ", name=" << data->args.hipModuleGetTexRef.name;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyPeerAsync:
      oss << "hipMemcpyPeerAsync(";
      if (data->args.hipMemcpyPeerAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyPeerAsync.dst;
      oss << ", dstDeviceId=" << data->args.hipMemcpyPeerAsync.dstDeviceId;
      if (data->args.hipMemcpyPeerAsync.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyPeerAsync.src;
      oss << ", srcDevice=" << data->args.hipMemcpyPeerAsync.srcDevice;
      oss << ", sizeBytes=" << data->args.hipMemcpyPeerAsync.sizeBytes;
      oss << ", stream=" << data->args.hipMemcpyPeerAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyWithStream:
      oss << "hipMemcpyWithStream(";
      if (data->args.hipMemcpyWithStream.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyWithStream.dst;
      if (data->args.hipMemcpyWithStream.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyWithStream.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyWithStream.sizeBytes;
      oss << ", kind=" << data->args.hipMemcpyWithStream.kind;
      oss << ", stream=" << data->args.hipMemcpyWithStream.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipConfigureCall:
      oss << "hipConfigureCall(";
      oss << "gridDim=" << data->args.hipConfigureCall.gridDim;
      oss << ", blockDim=" << data->args.hipConfigureCall.blockDim;
      oss << ", sharedMem=" << data->args.hipConfigureCall.sharedMem;
      oss << ", stream=" << data->args.hipConfigureCall.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipGetMipmappedArrayLevel:
      oss << "hipGetMipmappedArrayLevel(";
      if (data->args.hipGetMipmappedArrayLevel.levelArray == NULL) oss << "levelArray=NULL";
      else oss << "levelArray=" << data->args.hipGetMipmappedArrayLevel.levelArray;
      oss << ", mipmappedArray=" << data->args.hipGetMipmappedArrayLevel.mipmappedArray;
      oss << ", level=" << data->args.hipGetMipmappedArrayLevel.level;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy3DAsync:
      oss << "hipMemcpy3DAsync(";
      if (data->args.hipMemcpy3DAsync.p == NULL) oss << "p=NULL";
      else oss << "p=" << data->args.hipMemcpy3DAsync.p;
      oss << ", stream=" << data->args.hipMemcpy3DAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipEventDestroy:
      oss << "hipEventDestroy(";
      oss << "event=" << data->args.hipEventDestroy.event;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxPopCurrent:
      oss << "hipCtxPopCurrent(";
      if (data->args.hipCtxPopCurrent.ctx == NULL) oss << "ctx=NULL";
      else oss << "ctx=" << data->args.hipCtxPopCurrent.ctx;
      oss << ")";
    break;
    case HIP_API_ID_hipGetSymbolAddress:
      oss << "hipGetSymbolAddress(";
      if (data->args.hipGetSymbolAddress.devPtr == NULL) oss << "devPtr=NULL";
      else oss << "devPtr=" << data->args.hipGetSymbolAddress.devPtr;
      if (data->args.hipGetSymbolAddress.symbol == NULL) oss << ", symbol=NULL";
      else oss << ", symbol=" << data->args.hipGetSymbolAddress.symbol;
      oss << ")";
    break;
    case HIP_API_ID_hipHostGetFlags:
      oss << "hipHostGetFlags(";
      if (data->args.hipHostGetFlags.flagsPtr == NULL) oss << "flagsPtr=NULL";
      else oss << "flagsPtr=" << data->args.hipHostGetFlags.flagsPtr;
      if (data->args.hipHostGetFlags.hostPtr == NULL) oss << ", hostPtr=NULL";
      else oss << ", hostPtr=" << data->args.hipHostGetFlags.hostPtr;
      oss << ")";
    break;
    case HIP_API_ID_hipHostMalloc:
      oss << "hipHostMalloc(";
      if (data->args.hipHostMalloc.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipHostMalloc.ptr;
      oss << ", size=" << data->args.hipHostMalloc.size;
      oss << ", flags=" << data->args.hipHostMalloc.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipDriverGetVersion:
      oss << "hipDriverGetVersion(";
      if (data->args.hipDriverGetVersion.driverVersion == NULL) oss << "driverVersion=NULL";
      else oss << "driverVersion=" << data->args.hipDriverGetVersion.driverVersion;
      oss << ")";
    break;
    case HIP_API_ID_hipFreeMipmappedArray:
      oss << "hipFreeMipmappedArray(";
      oss << "mipmappedArray=" << data->args.hipFreeMipmappedArray.mipmappedArray;
      oss << ")";
    break;
    case HIP_API_ID_hipMemGetInfo:
      oss << "hipMemGetInfo(";
      if (data->args.hipMemGetInfo.free == NULL) oss << "free=NULL";
      else oss << "free=" << data->args.hipMemGetInfo.free;
      if (data->args.hipMemGetInfo.total == NULL) oss << ", total=NULL";
      else oss << ", total=" << data->args.hipMemGetInfo.total;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceReset:
      oss << "hipDeviceReset(";
      oss << ")";
    break;
    case HIP_API_ID_hipMemset:
      oss << "hipMemset(";
      if (data->args.hipMemset.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemset.dst;
      oss << ", value=" << data->args.hipMemset.value;
      oss << ", sizeBytes=" << data->args.hipMemset.sizeBytes;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetD8:
      oss << "hipMemsetD8(";
      oss << "dest=" << data->args.hipMemsetD8.dest;
      oss << ", value=" << data->args.hipMemsetD8.value;
      oss << ", count=" << data->args.hipMemsetD8.count;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyParam2DAsync:
      oss << "hipMemcpyParam2DAsync(";
      if (data->args.hipMemcpyParam2DAsync.pCopy == NULL) oss << "pCopy=NULL";
      else oss << "pCopy=" << data->args.hipMemcpyParam2DAsync.pCopy;
      oss << ", stream=" << data->args.hipMemcpyParam2DAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipHostRegister:
      oss << "hipHostRegister(";
      if (data->args.hipHostRegister.hostPtr == NULL) oss << "hostPtr=NULL";
      else oss << "hostPtr=" << data->args.hipHostRegister.hostPtr;
      oss << ", sizeBytes=" << data->args.hipHostRegister.sizeBytes;
      oss << ", flags=" << data->args.hipHostRegister.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxSetSharedMemConfig:
      oss << "hipCtxSetSharedMemConfig(";
      oss << "config=" << data->args.hipCtxSetSharedMemConfig.config;
      oss << ")";
    break;
    case HIP_API_ID_hipArray3DCreate:
      oss << "hipArray3DCreate(";
      if (data->args.hipArray3DCreate.array == NULL) oss << "array=NULL";
      else oss << "array=" << data->args.hipArray3DCreate.array;
      if (data->args.hipArray3DCreate.pAllocateArray == NULL) oss << ", pAllocateArray=NULL";
      else oss << ", pAllocateArray=" << data->args.hipArray3DCreate.pAllocateArray;
      oss << ")";
    break;
    case HIP_API_ID_hipIpcOpenMemHandle:
      oss << "hipIpcOpenMemHandle(";
      if (data->args.hipIpcOpenMemHandle.devPtr == NULL) oss << "devPtr=NULL";
      else oss << "devPtr=" << data->args.hipIpcOpenMemHandle.devPtr;
      oss << ", handle=" << data->args.hipIpcOpenMemHandle.handle;
      oss << ", flags=" << data->args.hipIpcOpenMemHandle.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipGetLastError:
      oss << "hipGetLastError(";
      oss << ")";
    break;
    case HIP_API_ID_hipCtxDestroy:
      oss << "hipCtxDestroy(";
      oss << "ctx=" << data->args.hipCtxDestroy.ctx;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetSharedMemConfig:
      oss << "hipDeviceGetSharedMemConfig(";
      if (data->args.hipDeviceGetSharedMemConfig.pConfig == NULL) oss << "pConfig=NULL";
      else oss << "pConfig=" << data->args.hipDeviceGetSharedMemConfig.pConfig;
      oss << ")";
    break;
    case HIP_API_ID_hipDrvMemcpy3D:
      oss << "hipDrvMemcpy3D(";
      if (data->args.hipDrvMemcpy3D.pCopy == NULL) oss << "pCopy=NULL";
      else oss << "pCopy=" << data->args.hipDrvMemcpy3D.pCopy;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy2DFromArray:
      oss << "hipMemcpy2DFromArray(";
      if (data->args.hipMemcpy2DFromArray.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpy2DFromArray.dst;
      oss << ", dpitch=" << data->args.hipMemcpy2DFromArray.dpitch;
      oss << ", src=" << data->args.hipMemcpy2DFromArray.src;
      oss << ", wOffset=" << data->args.hipMemcpy2DFromArray.wOffset;
      oss << ", hOffset=" << data->args.hipMemcpy2DFromArray.hOffset;
      oss << ", width=" << data->args.hipMemcpy2DFromArray.width;
      oss << ", height=" << data->args.hipMemcpy2DFromArray.height;
      oss << ", kind=" << data->args.hipMemcpy2DFromArray.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags:
      oss << "hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(";
      if (data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.numBlocks == NULL) oss << "numBlocks=NULL";
      else oss << "numBlocks=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.numBlocks;
      if (data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.f == NULL) oss << ", f=NULL";
      else oss << ", f=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.f;
      oss << ", blockSize=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.blockSize;
      oss << ", dynamicSMemSize=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.dynamicSMemSize;
      oss << ", flags=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipSetDeviceFlags:
      oss << "hipSetDeviceFlags(";
      oss << "flags=" << data->args.hipSetDeviceFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipHccModuleLaunchKernel:
      oss << "hipHccModuleLaunchKernel(";
      oss << "f=" << data->args.hipHccModuleLaunchKernel.f;
      oss << ", gridDimX=" << data->args.hipHccModuleLaunchKernel.gridDimX;
      oss << ", gridDimY=" << data->args.hipHccModuleLaunchKernel.gridDimY;
      oss << ", gridDimZ=" << data->args.hipHccModuleLaunchKernel.gridDimZ;
      oss << ", blockDimX=" << data->args.hipHccModuleLaunchKernel.blockDimX;
      oss << ", blockDimY=" << data->args.hipHccModuleLaunchKernel.blockDimY;
      oss << ", blockDimZ=" << data->args.hipHccModuleLaunchKernel.blockDimZ;
      oss << ", sharedMemBytes=" << data->args.hipHccModuleLaunchKernel.sharedMemBytes;
      oss << ", hStream=" << data->args.hipHccModuleLaunchKernel.hStream;
      if (data->args.hipHccModuleLaunchKernel.kernelParams == NULL) oss << ", kernelParams=NULL";
      else oss << ", kernelParams=" << data->args.hipHccModuleLaunchKernel.kernelParams;
      if (data->args.hipHccModuleLaunchKernel.extra == NULL) oss << ", extra=NULL";
      else oss << ", extra=" << data->args.hipHccModuleLaunchKernel.extra;
      oss << ", startEvent=" << data->args.hipHccModuleLaunchKernel.startEvent;
      oss << ", stopEvent=" << data->args.hipHccModuleLaunchKernel.stopEvent;
      oss << ")";
    break;
    case HIP_API_ID_hipFree:
      oss << "hipFree(";
      if (data->args.hipFree.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipFree.ptr;
      oss << ")";
    break;
    case HIP_API_ID_hipOccupancyMaxPotentialBlockSize:
      oss << "hipOccupancyMaxPotentialBlockSize(";
      if (data->args.hipOccupancyMaxPotentialBlockSize.gridSize == NULL) oss << "gridSize=NULL";
      else oss << "gridSize=" << data->args.hipOccupancyMaxPotentialBlockSize.gridSize;
      if (data->args.hipOccupancyMaxPotentialBlockSize.blockSize == NULL) oss << ", blockSize=NULL";
      else oss << ", blockSize=" << data->args.hipOccupancyMaxPotentialBlockSize.blockSize;
      if (data->args.hipOccupancyMaxPotentialBlockSize.f == NULL) oss << ", f=NULL";
      else oss << ", f=" << data->args.hipOccupancyMaxPotentialBlockSize.f;
      oss << ", dynSharedMemPerBlk=" << data->args.hipOccupancyMaxPotentialBlockSize.dynSharedMemPerBlk;
      oss << ", blockSizeLimit=" << data->args.hipOccupancyMaxPotentialBlockSize.blockSizeLimit;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetAttribute:
      oss << "hipDeviceGetAttribute(";
      if (data->args.hipDeviceGetAttribute.pi == NULL) oss << "pi=NULL";
      else oss << "pi=" << data->args.hipDeviceGetAttribute.pi;
      oss << ", attr=" << data->args.hipDeviceGetAttribute.attr;
      oss << ", deviceId=" << data->args.hipDeviceGetAttribute.deviceId;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyDtoH:
      oss << "hipMemcpyDtoH(";
      if (data->args.hipMemcpyDtoH.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyDtoH.dst;
      oss << ", src=" << data->args.hipMemcpyDtoH.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyDtoH.sizeBytes;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxDisablePeerAccess:
      oss << "hipCtxDisablePeerAccess(";
      oss << "peerCtx=" << data->args.hipCtxDisablePeerAccess.peerCtx;
      oss << ")";
    break;
    case HIP_API_ID_hipMallocManaged:
      oss << "hipMallocManaged(";
      if (data->args.hipMallocManaged.devPtr == NULL) oss << "devPtr=NULL";
      else oss << "devPtr=" << data->args.hipMallocManaged.devPtr;
      oss << ", size=" << data->args.hipMallocManaged.size;
      oss << ", flags=" << data->args.hipMallocManaged.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetByPCIBusId:
      oss << "hipDeviceGetByPCIBusId(";
      if (data->args.hipDeviceGetByPCIBusId.device == NULL) oss << "device=NULL";
      else oss << "device=" << data->args.hipDeviceGetByPCIBusId.device;
      if (data->args.hipDeviceGetByPCIBusId.pciBusId == NULL) oss << ", pciBusId=NULL";
      else oss << ", pciBusId=" << data->args.hipDeviceGetByPCIBusId.pciBusId;
      oss << ")";
    break;
    case HIP_API_ID_hipIpcGetMemHandle:
      oss << "hipIpcGetMemHandle(";
      if (data->args.hipIpcGetMemHandle.handle == NULL) oss << "handle=NULL";
      else oss << "handle=" << data->args.hipIpcGetMemHandle.handle;
      if (data->args.hipIpcGetMemHandle.devPtr == NULL) oss << ", devPtr=NULL";
      else oss << ", devPtr=" << data->args.hipIpcGetMemHandle.devPtr;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyHtoDAsync:
      oss << "hipMemcpyHtoDAsync(";
      oss << "dst=" << data->args.hipMemcpyHtoDAsync.dst;
      if (data->args.hipMemcpyHtoDAsync.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyHtoDAsync.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyHtoDAsync.sizeBytes;
      oss << ", stream=" << data->args.hipMemcpyHtoDAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxGetDevice:
      oss << "hipCtxGetDevice(";
      if (data->args.hipCtxGetDevice.device == NULL) oss << "device=NULL";
      else oss << "device=" << data->args.hipCtxGetDevice.device;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyDtoD:
      oss << "hipMemcpyDtoD(";
      oss << "dst=" << data->args.hipMemcpyDtoD.dst;
      oss << ", src=" << data->args.hipMemcpyDtoD.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyDtoD.sizeBytes;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleLoadData:
      oss << "hipModuleLoadData(";
      if (data->args.hipModuleLoadData.module == NULL) oss << "module=NULL";
      else oss << "module=" << data->args.hipModuleLoadData.module;
      if (data->args.hipModuleLoadData.image == NULL) oss << ", image=NULL";
      else oss << ", image=" << data->args.hipModuleLoadData.image;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceTotalMem:
      oss << "hipDeviceTotalMem(";
      if (data->args.hipDeviceTotalMem.bytes == NULL) oss << "bytes=NULL";
      else oss << "bytes=" << data->args.hipDeviceTotalMem.bytes;
      oss << ", device=" << data->args.hipDeviceTotalMem.device;
      oss << ")";
    break;
    case HIP_API_ID_hipOccupancyMaxActiveBlocksPerMultiprocessor:
      oss << "hipOccupancyMaxActiveBlocksPerMultiprocessor(";
      if (data->args.hipOccupancyMaxActiveBlocksPerMultiprocessor.numBlocks == NULL) oss << "numBlocks=NULL";
      else oss << "numBlocks=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessor.numBlocks;
      if (data->args.hipOccupancyMaxActiveBlocksPerMultiprocessor.f == NULL) oss << ", f=NULL";
      else oss << ", f=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessor.f;
      oss << ", blockSize=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessor.blockSize;
      oss << ", dynamicSMemSize=" << data->args.hipOccupancyMaxActiveBlocksPerMultiprocessor.dynamicSMemSize;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxSetCurrent:
      oss << "hipCtxSetCurrent(";
      oss << "ctx=" << data->args.hipCtxSetCurrent.ctx;
      oss << ")";
    break;
    case HIP_API_ID_hipGetErrorString:
      oss << "hipGetErrorString(";
      oss << ")";
    break;
    case HIP_API_ID_hipStreamCreate:
      oss << "hipStreamCreate(";
      if (data->args.hipStreamCreate.stream == NULL) oss << "stream=NULL";
      else oss << "stream=" << data->args.hipStreamCreate.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipDevicePrimaryCtxRetain:
      oss << "hipDevicePrimaryCtxRetain(";
      if (data->args.hipDevicePrimaryCtxRetain.pctx == NULL) oss << "pctx=NULL";
      else oss << "pctx=" << data->args.hipDevicePrimaryCtxRetain.pctx;
      oss << ", dev=" << data->args.hipDevicePrimaryCtxRetain.dev;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceDisablePeerAccess:
      oss << "hipDeviceDisablePeerAccess(";
      oss << "peerDeviceId=" << data->args.hipDeviceDisablePeerAccess.peerDeviceId;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamCreateWithFlags:
      oss << "hipStreamCreateWithFlags(";
      if (data->args.hipStreamCreateWithFlags.stream == NULL) oss << "stream=NULL";
      else oss << "stream=" << data->args.hipStreamCreateWithFlags.stream;
      oss << ", flags=" << data->args.hipStreamCreateWithFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyFromArray:
      oss << "hipMemcpyFromArray(";
      if (data->args.hipMemcpyFromArray.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyFromArray.dst;
      oss << ", srcArray=" << data->args.hipMemcpyFromArray.srcArray;
      oss << ", wOffset=" << data->args.hipMemcpyFromArray.wOffset;
      oss << ", hOffset=" << data->args.hipMemcpyFromArray.hOffset;
      oss << ", count=" << data->args.hipMemcpyFromArray.count;
      oss << ", kind=" << data->args.hipMemcpyFromArray.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy2DAsync:
      oss << "hipMemcpy2DAsync(";
      if (data->args.hipMemcpy2DAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpy2DAsync.dst;
      oss << ", dpitch=" << data->args.hipMemcpy2DAsync.dpitch;
      if (data->args.hipMemcpy2DAsync.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpy2DAsync.src;
      oss << ", spitch=" << data->args.hipMemcpy2DAsync.spitch;
      oss << ", width=" << data->args.hipMemcpy2DAsync.width;
      oss << ", height=" << data->args.hipMemcpy2DAsync.height;
      oss << ", kind=" << data->args.hipMemcpy2DAsync.kind;
      oss << ", stream=" << data->args.hipMemcpy2DAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipFuncGetAttributes:
      oss << "hipFuncGetAttributes(";
      if (data->args.hipFuncGetAttributes.attr == NULL) oss << "attr=NULL";
      else oss << "attr=" << data->args.hipFuncGetAttributes.attr;
      if (data->args.hipFuncGetAttributes.func == NULL) oss << ", func=NULL";
      else oss << ", func=" << data->args.hipFuncGetAttributes.func;
      oss << ")";
    break;
    case HIP_API_ID_hipGetSymbolSize:
      oss << "hipGetSymbolSize(";
      if (data->args.hipGetSymbolSize.size == NULL) oss << "size=NULL";
      else oss << "size=" << data->args.hipGetSymbolSize.size;
      if (data->args.hipGetSymbolSize.symbol == NULL) oss << ", symbol=NULL";
      else oss << ", symbol=" << data->args.hipGetSymbolSize.symbol;
      oss << ")";
    break;
    case HIP_API_ID_hipIpcGetEventHandle:
      oss << "hipIpcGetEventHandle(";
      if (data->args.hipIpcGetEventHandle.handle == NULL) oss << "handle=NULL";
      else oss << "handle=" << data->args.hipIpcGetEventHandle.handle;
      oss << ", event=" << data->args.hipIpcGetEventHandle.event;
      oss << ")";
    break;
    case HIP_API_ID_hipEventCreateWithFlags:
      oss << "hipEventCreateWithFlags(";
      if (data->args.hipEventCreateWithFlags.event == NULL) oss << "event=NULL";
      else oss << "event=" << data->args.hipEventCreateWithFlags.event;
      oss << ", flags=" << data->args.hipEventCreateWithFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamQuery:
      oss << "hipStreamQuery(";
      oss << "stream=" << data->args.hipStreamQuery.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetPCIBusId:
      oss << "hipDeviceGetPCIBusId(";
      if (data->args.hipDeviceGetPCIBusId.pciBusId == NULL) oss << "pciBusId=NULL";
      else oss << "pciBusId=" << data->args.hipDeviceGetPCIBusId.pciBusId;
      oss << ", len=" << data->args.hipDeviceGetPCIBusId.len;
      oss << ", device=" << data->args.hipDeviceGetPCIBusId.device;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy:
      oss << "hipMemcpy(";
      if (data->args.hipMemcpy.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpy.dst;
      if (data->args.hipMemcpy.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpy.src;
      oss << ", sizeBytes=" << data->args.hipMemcpy.sizeBytes;
      oss << ", kind=" << data->args.hipMemcpy.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipPeekAtLastError:
      oss << "hipPeekAtLastError(";
      oss << ")";
    break;
    case HIP_API_ID_hipExtLaunchMultiKernelMultiDevice:
      oss << "hipExtLaunchMultiKernelMultiDevice(";
      if (data->args.hipExtLaunchMultiKernelMultiDevice.launchParamsList == NULL) oss << "launchParamsList=NULL";
      else oss << "launchParamsList=" << data->args.hipExtLaunchMultiKernelMultiDevice.launchParamsList;
      oss << ", numDevices=" << data->args.hipExtLaunchMultiKernelMultiDevice.numDevices;
      oss << ", flags=" << data->args.hipExtLaunchMultiKernelMultiDevice.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipStreamAddCallback:
      oss << "hipStreamAddCallback(";
      oss << "stream=" << data->args.hipStreamAddCallback.stream;
      oss << ", callback=" << data->args.hipStreamAddCallback.callback;
      if (data->args.hipStreamAddCallback.userData == NULL) oss << ", userData=NULL";
      else oss << ", userData=" << data->args.hipStreamAddCallback.userData;
      oss << ", flags=" << data->args.hipStreamAddCallback.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyToArray:
      oss << "hipMemcpyToArray(";
      if (data->args.hipMemcpyToArray.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyToArray.dst;
      oss << ", wOffset=" << data->args.hipMemcpyToArray.wOffset;
      oss << ", hOffset=" << data->args.hipMemcpyToArray.hOffset;
      if (data->args.hipMemcpyToArray.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyToArray.src;
      oss << ", count=" << data->args.hipMemcpyToArray.count;
      oss << ", kind=" << data->args.hipMemcpyToArray.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetD32:
      oss << "hipMemsetD32(";
      oss << "dest=" << data->args.hipMemsetD32.dest;
      oss << ", value=" << data->args.hipMemsetD32.value;
      oss << ", count=" << data->args.hipMemsetD32.count;
      oss << ")";
    break;
    case HIP_API_ID_hipExtModuleLaunchKernel:
      oss << "hipExtModuleLaunchKernel(";
      oss << "f=" << data->args.hipExtModuleLaunchKernel.f;
      oss << ", globalWorkSizeX=" << data->args.hipExtModuleLaunchKernel.globalWorkSizeX;
      oss << ", globalWorkSizeY=" << data->args.hipExtModuleLaunchKernel.globalWorkSizeY;
      oss << ", globalWorkSizeZ=" << data->args.hipExtModuleLaunchKernel.globalWorkSizeZ;
      oss << ", localWorkSizeX=" << data->args.hipExtModuleLaunchKernel.localWorkSizeX;
      oss << ", localWorkSizeY=" << data->args.hipExtModuleLaunchKernel.localWorkSizeY;
      oss << ", localWorkSizeZ=" << data->args.hipExtModuleLaunchKernel.localWorkSizeZ;
      oss << ", sharedMemBytes=" << data->args.hipExtModuleLaunchKernel.sharedMemBytes;
      oss << ", hStream=" << data->args.hipExtModuleLaunchKernel.hStream;
      if (data->args.hipExtModuleLaunchKernel.kernelParams == NULL) oss << ", kernelParams=NULL";
      else oss << ", kernelParams=" << data->args.hipExtModuleLaunchKernel.kernelParams;
      if (data->args.hipExtModuleLaunchKernel.extra == NULL) oss << ", extra=NULL";
      else oss << ", extra=" << data->args.hipExtModuleLaunchKernel.extra;
      oss << ", startEvent=" << data->args.hipExtModuleLaunchKernel.startEvent;
      oss << ", stopEvent=" << data->args.hipExtModuleLaunchKernel.stopEvent;
      oss << ", flags=" << data->args.hipExtModuleLaunchKernel.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceSynchronize:
      oss << "hipDeviceSynchronize(";
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetCacheConfig:
      oss << "hipDeviceGetCacheConfig(";
      if (data->args.hipDeviceGetCacheConfig.cacheConfig == NULL) oss << "cacheConfig=NULL";
      else oss << "cacheConfig=" << data->args.hipDeviceGetCacheConfig.cacheConfig;
      oss << ")";
    break;
    case HIP_API_ID_hipMalloc3D:
      oss << "hipMalloc3D(";
      if (data->args.hipMalloc3D.pitchedDevPtr == NULL) oss << "pitchedDevPtr=NULL";
      else oss << "pitchedDevPtr=" << data->args.hipMalloc3D.pitchedDevPtr;
      oss << ", extent=" << data->args.hipMalloc3D.extent;
      oss << ")";
    break;
    case HIP_API_ID_hipPointerGetAttributes:
      oss << "hipPointerGetAttributes(";
      if (data->args.hipPointerGetAttributes.attributes == NULL) oss << "attributes=NULL";
      else oss << "attributes=" << data->args.hipPointerGetAttributes.attributes;
      if (data->args.hipPointerGetAttributes.ptr == NULL) oss << ", ptr=NULL";
      else oss << ", ptr=" << data->args.hipPointerGetAttributes.ptr;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetAsync:
      oss << "hipMemsetAsync(";
      if (data->args.hipMemsetAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemsetAsync.dst;
      oss << ", value=" << data->args.hipMemsetAsync.value;
      oss << ", sizeBytes=" << data->args.hipMemsetAsync.sizeBytes;
      oss << ", stream=" << data->args.hipMemsetAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyToSymbol:
      oss << "hipMemcpyToSymbol(";
      if (data->args.hipMemcpyToSymbol.symbol == NULL) oss << "symbol=NULL";
      else oss << "symbol=" << data->args.hipMemcpyToSymbol.symbol;
      if (data->args.hipMemcpyToSymbol.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyToSymbol.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyToSymbol.sizeBytes;
      oss << ", offset=" << data->args.hipMemcpyToSymbol.offset;
      oss << ", kind=" << data->args.hipMemcpyToSymbol.kind;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleOccupancyMaxPotentialBlockSizeWithFlags:
      oss << "hipModuleOccupancyMaxPotentialBlockSizeWithFlags(";
      if (data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.gridSize == NULL) oss << "gridSize=NULL";
      else oss << "gridSize=" << data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.gridSize;
      if (data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.blockSize == NULL) oss << ", blockSize=NULL";
      else oss << ", blockSize=" << data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.blockSize;
      oss << ", f=" << data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.f;
      oss << ", dynSharedMemPerBlk=" << data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.dynSharedMemPerBlk;
      oss << ", blockSizeLimit=" << data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.blockSizeLimit;
      oss << ", flags=" << data->args.hipModuleOccupancyMaxPotentialBlockSizeWithFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxPushCurrent:
      oss << "hipCtxPushCurrent(";
      oss << "ctx=" << data->args.hipCtxPushCurrent.ctx;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyPeer:
      oss << "hipMemcpyPeer(";
      if (data->args.hipMemcpyPeer.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyPeer.dst;
      oss << ", dstDeviceId=" << data->args.hipMemcpyPeer.dstDeviceId;
      if (data->args.hipMemcpyPeer.src == NULL) oss << ", src=NULL";
      else oss << ", src=" << data->args.hipMemcpyPeer.src;
      oss << ", srcDeviceId=" << data->args.hipMemcpyPeer.srcDeviceId;
      oss << ", sizeBytes=" << data->args.hipMemcpyPeer.sizeBytes;
      oss << ")";
    break;
    case HIP_API_ID_hipEventSynchronize:
      oss << "hipEventSynchronize(";
      oss << "event=" << data->args.hipEventSynchronize.event;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyDtoDAsync:
      oss << "hipMemcpyDtoDAsync(";
      oss << "dst=" << data->args.hipMemcpyDtoDAsync.dst;
      oss << ", src=" << data->args.hipMemcpyDtoDAsync.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyDtoDAsync.sizeBytes;
      oss << ", stream=" << data->args.hipMemcpyDtoDAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipExtMallocWithFlags:
      oss << "hipExtMallocWithFlags(";
      if (data->args.hipExtMallocWithFlags.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipExtMallocWithFlags.ptr;
      oss << ", sizeBytes=" << data->args.hipExtMallocWithFlags.sizeBytes;
      oss << ", flags=" << data->args.hipExtMallocWithFlags.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipCtxEnablePeerAccess:
      oss << "hipCtxEnablePeerAccess(";
      oss << "peerCtx=" << data->args.hipCtxEnablePeerAccess.peerCtx;
      oss << ", flags=" << data->args.hipCtxEnablePeerAccess.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMemAllocHost:
      oss << "hipMemAllocHost(";
      if (data->args.hipMemAllocHost.ptr == NULL) oss << "ptr=NULL";
      else oss << "ptr=" << data->args.hipMemAllocHost.ptr;
      oss << ", size=" << data->args.hipMemAllocHost.size;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyDtoHAsync:
      oss << "hipMemcpyDtoHAsync(";
      if (data->args.hipMemcpyDtoHAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpyDtoHAsync.dst;
      oss << ", src=" << data->args.hipMemcpyDtoHAsync.src;
      oss << ", sizeBytes=" << data->args.hipMemcpyDtoHAsync.sizeBytes;
      oss << ", stream=" << data->args.hipMemcpyDtoHAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleLaunchKernel:
      oss << "hipModuleLaunchKernel(";
      oss << "f=" << data->args.hipModuleLaunchKernel.f;
      oss << ", gridDimX=" << data->args.hipModuleLaunchKernel.gridDimX;
      oss << ", gridDimY=" << data->args.hipModuleLaunchKernel.gridDimY;
      oss << ", gridDimZ=" << data->args.hipModuleLaunchKernel.gridDimZ;
      oss << ", blockDimX=" << data->args.hipModuleLaunchKernel.blockDimX;
      oss << ", blockDimY=" << data->args.hipModuleLaunchKernel.blockDimY;
      oss << ", blockDimZ=" << data->args.hipModuleLaunchKernel.blockDimZ;
      oss << ", sharedMemBytes=" << data->args.hipModuleLaunchKernel.sharedMemBytes;
      oss << ", stream=" << data->args.hipModuleLaunchKernel.stream;
      if (data->args.hipModuleLaunchKernel.kernelParams == NULL) oss << ", kernelParams=NULL";
      else oss << ", kernelParams=" << data->args.hipModuleLaunchKernel.kernelParams;
      if (data->args.hipModuleLaunchKernel.extra == NULL) oss << ", extra=NULL";
      else oss << ", extra=" << data->args.hipModuleLaunchKernel.extra;
      oss << ")";
    break;
    case HIP_API_ID_hipMemAllocPitch:
      oss << "hipMemAllocPitch(";
      if (data->args.hipMemAllocPitch.dptr == NULL) oss << "dptr=NULL";
      else oss << "dptr=" << data->args.hipMemAllocPitch.dptr;
      if (data->args.hipMemAllocPitch.pitch == NULL) oss << ", pitch=NULL";
      else oss << ", pitch=" << data->args.hipMemAllocPitch.pitch;
      oss << ", widthInBytes=" << data->args.hipMemAllocPitch.widthInBytes;
      oss << ", height=" << data->args.hipMemAllocPitch.height;
      oss << ", elementSizeBytes=" << data->args.hipMemAllocPitch.elementSizeBytes;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpy2DFromArrayAsync:
      oss << "hipMemcpy2DFromArrayAsync(";
      if (data->args.hipMemcpy2DFromArrayAsync.dst == NULL) oss << "dst=NULL";
      else oss << "dst=" << data->args.hipMemcpy2DFromArrayAsync.dst;
      oss << ", dpitch=" << data->args.hipMemcpy2DFromArrayAsync.dpitch;
      oss << ", src=" << data->args.hipMemcpy2DFromArrayAsync.src;
      oss << ", wOffset=" << data->args.hipMemcpy2DFromArrayAsync.wOffset;
      oss << ", hOffset=" << data->args.hipMemcpy2DFromArrayAsync.hOffset;
      oss << ", width=" << data->args.hipMemcpy2DFromArrayAsync.width;
      oss << ", height=" << data->args.hipMemcpy2DFromArrayAsync.height;
      oss << ", kind=" << data->args.hipMemcpy2DFromArrayAsync.kind;
      oss << ", stream=" << data->args.hipMemcpy2DFromArrayAsync.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGetLimit:
      oss << "hipDeviceGetLimit(";
      if (data->args.hipDeviceGetLimit.pValue == NULL) oss << "pValue=NULL";
      else oss << "pValue=" << data->args.hipDeviceGetLimit.pValue;
      oss << ", limit=" << data->args.hipDeviceGetLimit.limit;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleLoadDataEx:
      oss << "hipModuleLoadDataEx(";
      if (data->args.hipModuleLoadDataEx.module == NULL) oss << "module=NULL";
      else oss << "module=" << data->args.hipModuleLoadDataEx.module;
      if (data->args.hipModuleLoadDataEx.image == NULL) oss << ", image=NULL";
      else oss << ", image=" << data->args.hipModuleLoadDataEx.image;
      oss << ", numOptions=" << data->args.hipModuleLoadDataEx.numOptions;
      if (data->args.hipModuleLoadDataEx.options == NULL) oss << ", options=NULL";
      else oss << ", options=" << data->args.hipModuleLoadDataEx.options;
      if (data->args.hipModuleLoadDataEx.optionsValues == NULL) oss << ", optionsValues=NULL";
      else oss << ", optionsValues=" << data->args.hipModuleLoadDataEx.optionsValues;
      oss << ")";
    break;
    case HIP_API_ID_hipRuntimeGetVersion:
      oss << "hipRuntimeGetVersion(";
      if (data->args.hipRuntimeGetVersion.runtimeVersion == NULL) oss << "runtimeVersion=NULL";
      else oss << "runtimeVersion=" << data->args.hipRuntimeGetVersion.runtimeVersion;
      oss << ")";
    break;
    case HIP_API_ID___hipPopCallConfiguration:
      oss << "__hipPopCallConfiguration(";
      if (data->args.__hipPopCallConfiguration.gridDim == NULL) oss << "gridDim=NULL";
      else oss << "gridDim=" << data->args.__hipPopCallConfiguration.gridDim;
      if (data->args.__hipPopCallConfiguration.blockDim == NULL) oss << ", blockDim=NULL";
      else oss << ", blockDim=" << data->args.__hipPopCallConfiguration.blockDim;
      if (data->args.__hipPopCallConfiguration.sharedMem == NULL) oss << ", sharedMem=NULL";
      else oss << ", sharedMem=" << data->args.__hipPopCallConfiguration.sharedMem;
      if (data->args.__hipPopCallConfiguration.stream == NULL) oss << ", stream=NULL";
      else oss << ", stream=" << data->args.__hipPopCallConfiguration.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipGetDeviceProperties:
      oss << "hipGetDeviceProperties(";
      if (data->args.hipGetDeviceProperties.props == NULL) oss << "props=NULL";
      else oss << "props=" << data->args.hipGetDeviceProperties.props;
      oss << ", device=" << data->args.hipGetDeviceProperties.device;
      oss << ")";
    break;
    case HIP_API_ID_hipDeviceGet:
      oss << "hipDeviceGet(";
      if (data->args.hipDeviceGet.device == NULL) oss << "device=NULL";
      else oss << "device=" << data->args.hipDeviceGet.device;
      oss << ", ordinal=" << data->args.hipDeviceGet.ordinal;
      oss << ")";
    break;
    case HIP_API_ID_hipFreeArray:
      oss << "hipFreeArray(";
      if (data->args.hipFreeArray.array == NULL) oss << "array=NULL";
      else oss << "array=" << data->args.hipFreeArray.array;
      oss << ")";
    break;
    case HIP_API_ID_hipEventElapsedTime:
      oss << "hipEventElapsedTime(";
      if (data->args.hipEventElapsedTime.ms == NULL) oss << "ms=NULL";
      else oss << "ms=" << data->args.hipEventElapsedTime.ms;
      oss << ", start=" << data->args.hipEventElapsedTime.start;
      oss << ", stop=" << data->args.hipEventElapsedTime.stop;
      oss << ")";
    break;
    case HIP_API_ID_hipDevicePrimaryCtxRelease:
      oss << "hipDevicePrimaryCtxRelease(";
      oss << "dev=" << data->args.hipDevicePrimaryCtxRelease.dev;
      oss << ")";
    break;
    case HIP_API_ID_hipHostGetDevicePointer:
      oss << "hipHostGetDevicePointer(";
      if (data->args.hipHostGetDevicePointer.devPtr == NULL) oss << "devPtr=NULL";
      else oss << "devPtr=" << data->args.hipHostGetDevicePointer.devPtr;
      if (data->args.hipHostGetDevicePointer.hstPtr == NULL) oss << ", hstPtr=NULL";
      else oss << ", hstPtr=" << data->args.hipHostGetDevicePointer.hstPtr;
      oss << ", flags=" << data->args.hipHostGetDevicePointer.flags;
      oss << ")";
    break;
    case HIP_API_ID_hipMemcpyParam2D:
      oss << "hipMemcpyParam2D(";
      if (data->args.hipMemcpyParam2D.pCopy == NULL) oss << "pCopy=NULL";
      else oss << "pCopy=" << data->args.hipMemcpyParam2D.pCopy;
      oss << ")";
    break;
    case HIP_API_ID_hipDevicePrimaryCtxReset:
      oss << "hipDevicePrimaryCtxReset(";
      oss << "dev=" << data->args.hipDevicePrimaryCtxReset.dev;
      oss << ")";
    break;
    case HIP_API_ID_hipModuleGetFunction:
      oss << "hipModuleGetFunction(";
      if (data->args.hipModuleGetFunction.function == NULL) oss << "function=NULL";
      else oss << "function=" << data->args.hipModuleGetFunction.function;
      oss << ", module=" << data->args.hipModuleGetFunction.module;
      if (data->args.hipModuleGetFunction.kname == NULL) oss << ", kname=NULL";
      else oss << ", kname=" << data->args.hipModuleGetFunction.kname;
      oss << ")";
    break;
    case HIP_API_ID_hipMemsetD32Async:
      oss << "hipMemsetD32Async(";
      oss << "dst=" << data->args.hipMemsetD32Async.dst;
      oss << ", value=" << data->args.hipMemsetD32Async.value;
      oss << ", count=" << data->args.hipMemsetD32Async.count;
      oss << ", stream=" << data->args.hipMemsetD32Async.stream;
      oss << ")";
    break;
    case HIP_API_ID_hipGetDevice:
      oss << "hipGetDevice(";
      if (data->args.hipGetDevice.deviceId == NULL) oss << "deviceId=NULL";
      else oss << "deviceId=" << data->args.hipGetDevice.deviceId;
      oss << ")";
    break;
    case HIP_API_ID_hipGetDeviceCount:
      oss << "hipGetDeviceCount(";
      if (data->args.hipGetDeviceCount.count == NULL) oss << "count=NULL";
      else oss << "count=" << data->args.hipGetDeviceCount.count;
      oss << ")";
    break;
    case HIP_API_ID_hipIpcOpenEventHandle:
      oss << "hipIpcOpenEventHandle(";
      if (data->args.hipIpcOpenEventHandle.event == NULL) oss << "event=NULL";
      else oss << "event=" << data->args.hipIpcOpenEventHandle.event;
      oss << ", handle=" << data->args.hipIpcOpenEventHandle.handle;
      oss << ")";
    break;
    default: oss << "unknown";
  };
  return strdup(oss.str().c_str());
};
#endif  // HIP_PROF_HIP_API_STRING
#endif  // _HIP_PROF_STR_H
