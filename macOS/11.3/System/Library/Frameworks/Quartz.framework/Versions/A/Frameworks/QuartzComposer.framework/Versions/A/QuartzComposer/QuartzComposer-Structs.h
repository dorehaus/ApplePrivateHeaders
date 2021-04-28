/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_GF3;

typedef struct {
	unsigned char bytes[16];
} SCD_Struct_QC4;

typedef struct CGContext* CGContextRef;

typedef struct CGColor* CGColorRef;

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

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct __C3DEngineContext* C3DEngineContextRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGImage* CGImageRef;

typedef struct {
	char useMatrix;
	unsigned char wasEnabled;
	int boundTexture;
	void* unused[4];
} SCD_Struct_QC18;

typedef struct {
	int saveSize;
	int saveType;
	int saveStride;
	unsigned char saveEnabled;
	unsigned char ptrHasChanged;
	void savePointer;
	void* unused[4];
} SCD_Struct_QC19;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct __CFSet* CFSetRef;

typedef struct __CFNetServiceBrowser* CFNetServiceBrowserRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	float field9;
	long long field10;
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
	float field17;
	float field18;
	double field19;
	double field20;
	double field21;
	double field22;
	float field23;
} SCD_Struct_QC25;

typedef struct _QCDod* QCDodRef;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_QC27;

typedef struct {
	double x;
	double y;
	double z;
	double w;
} SCD_Struct_QC28;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct CGPath* CGPathRef;

typedef struct CGLayer* CGLayerRef;

typedef struct __C3DImage* C3DImageRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct __CFBag* CFBagRef;

typedef struct __CVOpenGLTextureCache* CVOpenGLTextureCacheRef;

typedef struct CGSRegionObject* CGSRegionObjectRef;

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
} SCD_Struct_QC40;

typedef struct {
	unsigned clearFlag : 1;
	unsigned paused : 1;
	unsigned stopped : 1;
} SCD_Struct_QC41;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct GLUquadric* GLUquadricRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct {
	char field1;
	CGPoint field2[4];
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
} SCD_Struct_QC45;

typedef struct {
	SCD_Struct_QC4 field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
	5 field5;
	char field6;
	char field7;
} SCD_Struct_QC46;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct _cl_program* cl_programRef;

typedef struct _cl_context* cl_contextRef;

typedef struct _cl_device_id* cl_device_idRef;

typedef struct _cl_command_queue* cl_command_queueRef;

typedef struct _cl_kernel* cl_kernelRef;

typedef struct __C3DGeometry* C3DGeometryRef;

typedef struct {
	unsigned char field1;
	int field2;
	int field3;
	void* field4[4];
} SCD_Struct_QC55;

typedef struct _cl_mem* cl_memRef;

typedef struct _cl_event* cl_eventRef;

typedef struct QCContactInfo {
	double x;
	double y;
	double prev_x;
	double prev_y;
	int state;
} QCContactInfo;

typedef struct __C3DTextureSampler* C3DTextureSamplerRef;

typedef struct SCNVector3 {
	double x;
	double y;
	double z;
} SCNVector3;

typedef struct __C3DFXGLSLProfile* C3DFXGLSLProfileRef;

typedef struct __C3DFXGLSLProgram* C3DFXGLSLProgramRef;

typedef struct __C3DFXRenderTarget* C3DFXRenderTargetRef;

typedef struct __CVDisplayLink* CVDisplayLinkRef;

typedef struct {
	float r;
	float g;
	float b;
	float a;
} SCD_Struct_QC65;

typedef struct C3DColor4 {
	/*function pointer*/void* ;
	float rgba[4];
	SCD_Struct_QC65) ;
} C3DColor4;

typedef struct __C3DSceneSource* C3DSceneSourceRef;

typedef struct C3DSphere {
	double radius;
	SCNVector3 center;
} C3DSphere;

typedef struct __C3DHitTestResult* C3DHitTestResultRef;

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

typedef struct C3DMatrix4x4 {
	/*function pointer*/void* ;
	double components[16];
	double m[4][4];
} C3DMatrix4x4;

