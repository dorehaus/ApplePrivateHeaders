/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double values;
	double scaleMinimum;
	double scaleMaximum;
	double valueMinimum;
	double valueMaximum;
	double count;
} SCD_Struct_AX4;

typedef struct __CVBuffer* CVBufferRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_AX7;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	[4 columns];
} SCD_Struct_AX9;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_AX10;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGImage* CGImageRef;

typedef struct _LXLexicon* LXLexiconRef;

typedef struct vector<int, std::__1::allocator<int>>* vector<int, std::__1::allocator<int>>Ref;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CVNLPCaptionHandler* CVNLPCaptionHandlerRef;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_AX17;

typedef struct _compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> {
	shared_ptr<espresso_buffer_t> __value_;
} compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>>;

typedef struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> {
	shared_ptr<espresso_buffer_t> __begin_;
	shared_ptr<espresso_buffer_t> __end_;
	compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>> __end_cap_;
} vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t>>>;

typedef struct _compressed_pair<int *, std::__1::allocator<int>> {
	int __value_;
} compressed_pair<int *, std::__1::allocator<int>>;

typedef struct _compressed_pair<NSString *__strong *, std::__1::allocator<NSString *>> {
	id __value_;
} compressed_pair<NSString *__strong *, std::__1::allocator<NSString *>>;

typedef struct vector<NSString *, std::__1::allocator<NSString *>> {
	id __begin_;
	id __end_;
	compressed_pair<NSString *__strong *, std::__1::allocator<NSString *>> __end_cap_;
} vector<NSString *, std::__1::allocator<NSString *>>;

typedef struct _compressed_pair<float *, std::__1::allocator<float>> {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float>>;

typedef struct vector<float, std::__1::allocator<float>> {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float>> __end_cap_;
} vector<float, std::__1::allocator<float>>;

