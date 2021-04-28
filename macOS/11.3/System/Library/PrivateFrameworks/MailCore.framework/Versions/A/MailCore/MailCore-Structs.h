/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __SecTrust* SecTrustRef;

typedef const struct __CFString* CFStringRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct {
	unsigned char red;
	unsigned char green;
	unsigned char blue;
} SCD_Struct_MC9;

typedef struct {
	id field1;
	char field2;
	char field3;
	char field4;
	char field5;
} SCD_Struct_MC10;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_MC11;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_MC11 rangeToBuffer;
	long long bufferedRangeStart;
	long long bufferedRangeEnd;
} SCD_Struct_MC12;

typedef struct _CMSEncoder* CMSEncoderRef;

typedef struct _CMSDecoder* CMSDecoderRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	long long count;
	unsigned long long size;
} SCD_Struct_MC18;

typedef struct __CFHost* CFHostRef;

