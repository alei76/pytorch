#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "generic/THCTensorMathScan.h"
#else

THC_API void THCTensor_(cumsum)(THCState *state, THCTensor *self, THCTensor *src, long dim);
THC_API void THCTensor_(cumprod)(THCState *state, THCTensor *self, THCTensor *src, long dim);

#endif
