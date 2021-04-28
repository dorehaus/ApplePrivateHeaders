/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class <MTLDevice>, MPSCommandBufferImageCache, MTLTextureDescriptor, <MTLBuffer>;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MP0;

typedef struct {
	SCD_Struct_MP0 field1;
	SCD_Struct_MP0 field2;
} SCD_Struct_MP1;

typedef struct shared_ptr<MPSKernelDAG> {
	MPSKernelDAG __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<MPSKernelDAG>;

typedef struct _NSZone* NSZoneRef;

typedef struct _cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *>> {
	Av __a_value;
} cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *>>;

typedef struct {
	unsigned long long size;
	unsigned long long align;
} SCD_Struct_MP5;

typedef struct atomic<void *> {
	cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *>> __a_;
} atomic<void *>;

typedef struct MPSAutoBuffer {
	atomic<void *> _buffer;
	unsigned long long _requestedSize;
	<MTLDevice>* _device;
	MPSCommandBufferImageCache* _cache;
	SCD_Struct_MP5 _resourceSize;
} MPSAutoBuffer;

typedef struct _cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long>> {
	Aq __a_value;
} cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long>>;

typedef struct atomic<long> {
	cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long>> __a_;
} atomic<long>;

typedef struct MPSPixelInfo {
	unsigned pixelFormat : 10;
	unsigned chunkSize : 6;
	unsigned chunkWidth : 4;
	unsigned chunkHeight : 4;
	unsigned pixelStyle : 4;
	unsigned colorModel : 4;
	unsigned bitDepth : 8;
	unsigned isSigned : 1;
	unsigned isClamped : 1;
	unsigned isInteger : 1;
	unsigned canFilter : 1;
	unsigned canRender : 1;
	unsigned canWrite : 1;
	unsigned canMultisample : 1;
	unsigned isSupported : 1;
	unsigned isCompressed : 1;
	unsigned chunkSizePlane2 : 6;
	unsigned log2MinAlignment : 4;
	unsigned featureChannelFormat : 3;
	unsigned _padding : 2;
} MPSPixelInfo;

typedef struct _cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture>>> {
	A@ __a_value;
} cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture>>>;

typedef struct {
	MPSCommandBufferImageCache* cache;
} SCD_Struct_MP12;

typedef struct {
	MPSDevice device;
} SCD_Struct_MP13;

typedef struct {
	MTLTextureDescriptor* _descriptor;
	/*function pointer*/void* ;
	SCD_Struct_MP13 _tex;
	SCD_Struct_MP12) _temporary;
} SCD_Struct_MP14;

typedef struct {
	MPSAutoTexture parent;
	unsigned subRangeStart;
	unsigned subRangeSize;
} SCD_Struct_MP15;

typedef struct atomic<id<MTLTexture>> {
	cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture>>> __a_;
} atomic<id<MTLTexture>>;

typedef struct MPSAutoTexture {
	atomic<id<MTLTexture>> _texture;
	SCD_Struct_MP5 _resourceSize;
	unsigned long long _rowBytes;
	MPSPixelInfo _pixelInfo;
	/*function pointer*/void* ;
	SCD_Struct_MP15 _subTex;
	SCD_Struct_MP14) ;
	unsigned char _type;
	unsigned char _twiddled;
} MPSAutoTexture;

typedef struct {
	unsigned mpsKernelVersion : 8;
	unsigned intermediateObjectVersion : 8;
	unsigned version : 16;
} SCD_Struct_MP18;

typedef union {
	unsigned bits;
	SCD_Struct_MP18 field2;
} SCD_Union_MP19;

typedef struct {
	unsigned shift1;
	unsigned shift2;
	 mR;
	 mT;
	unsigned M;
	unsigned stateIdx;
	unsigned maxGenerators;
} SCD_Struct_MP20;

typedef struct UserBufferBindingData_s {
	<MTLBuffer>* userBoundBuffer;
	char userBoundBuffer_set;
	void userBoundBytes;
	unsigned long long userBoundBytes_length;
	char userBoundBytes_set;
	unsigned long long userBoundOffset;
} UserBufferBindingData_s;

