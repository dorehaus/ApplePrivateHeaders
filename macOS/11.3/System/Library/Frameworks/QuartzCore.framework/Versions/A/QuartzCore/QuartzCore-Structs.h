/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef const struct CGPath* CGPathRef;

typedef struct EDIDAttributes {
	int dolbyVision;
	int pqEOTF;
	int bt2020YCC;
	int hdrStaticMetadataType1;
	BOOL legacyHDMI;
	unsigned product_id;
	unsigned manufacturer_id;
	unsigned week_of_manufacture;
	unsigned year_of_manufacture;
	unsigned serial_number;
} EDIDAttributes;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct CAPoint3D {
	double x;
	double y;
	double z;
} CAPoint3D;

typedef struct CAColorMatrix {
	float m11;
	float m12;
	float m13;
	float m14;
	float m15;
	float m21;
	float m22;
	float m23;
	float m24;
	float m25;
	float m31;
	float m32;
	float m33;
	float m34;
	float m35;
	float m41;
	float m42;
	float m43;
	float m44;
	float m45;
} CAColorMatrix;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef union {
	CGPoint point;
	CGSize size;
	CGRect rect;
	CATransform3D transform;
	CAPoint3D point3d;
	CAColorMatrix color_matrix;
	CGAffineTransform affine_transform;
} SCD_Union_LK10;

typedef struct CGColor* CGColorRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPattern* CGPatternRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct _CAMLParserData* CAMLParserDataRef;

typedef struct CATextLayerPrivate* CATextLayerPrivateRef;

typedef struct __CTTypesetter* CTTypesetterRef;

typedef struct __CTLine* CTLineRef;

typedef struct CGContext* CGContextRef;

typedef struct CABackingStore* CABackingStoreRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct Mutex {
	opaque_pthread_mutex_t _m;
} Mutex;

typedef struct {
	int x;
} SCD_Struct_CA23;

typedef struct SpinLock {
	SCD_Struct_CA23 _l;
} SpinLock;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CALinearMaskContext* CALinearMaskContextRef;

typedef struct CALayerIvars {
	int refcount;
	unsigned magic;
	void layer;
} CALayerIvars;

typedef struct {
	CGPoint field1[3];
} SCD_Struct_CA28;

typedef struct CALayerArrayIvars {
	id layers;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long mutations;
	char retained;
} CALayerArrayIvars;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CA30;

typedef struct {
	float field1[9];
} SCD_Struct_CA31;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_CA32;

typedef struct {
	SCD_Struct_CA32 field1;
	SCD_Struct_CA32 field2;
	SCD_Struct_CA32 field3;
	SCD_Struct_CA32 field4;
} SCD_Struct_CA33;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct {
	unsigned field1;
	int field2;
	long long field3;
	unsigned long long field4;
	double field5;
	long long field6;
	CVSMPTETime field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_CA35;

