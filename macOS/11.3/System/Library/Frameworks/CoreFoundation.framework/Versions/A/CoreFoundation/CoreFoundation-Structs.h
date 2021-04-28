/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NS1;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned muts;
	unsigned used;
} SCD_Struct_NS3;

typedef struct {
	id list;
	unsigned offset;
	unsigned size;
	/*function pointer*/void* state;
	unsigned long long mutations;
	SCD_Struct_NS3) ;
} SCD_Struct_NS4;

typedef struct __CFData* CFDataRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	long long field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_NS9;

typedef struct {
	char field1;
	char field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned field6;
} SCD_Struct_NS10;

typedef struct {
	long long field1;
	int field2;
} SCD_Struct_NS11;

typedef struct __CFAllocator* CFAllocatorRef;

typedef const struct __CFUUID* CFUUIDRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	int field1;
	long long field2;
	_ field3;
	_ field4;
	CFData field5;
	unsigned long long field6;
} SCD_Struct_CF15;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	int field1;
	long long field2;
	_ field3;
	_ field4;
	CFArray field5;
	_ field6;
	_ field7;
	CFArray field8;
} SCD_Struct_CF17;

typedef struct {
	int field1;
	long long field2;
	long long field3;
} SCD_Struct_CF18;

typedef struct {
	int field1;
	long long field2;
	_ field3;
	_ field4;
	CFArray field5;
} SCD_Struct_CF19;

typedef struct _cfobservers_t {
	id slot;
	__cfobservers_t next;
} cfobservers_t;

typedef struct {
	unsigned val[8];
} SCD_Struct_CF21;

typedef struct __CFSet* CFSetRef;

typedef struct __CFURL* CFURLRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_CF25;

typedef union {
	/*function pointer*/void* _rcb;
	/*function pointer*/void* _wcb;
	/*function pointer*/void* genericCallback;
	void genericPointer;
} SCD_Union_CF26;

typedef struct {
	__CFBasicHash set;
	NSMutableArray* array;
} SCD_Struct_NS27;

typedef struct {
	unsigned long long state;
	id itemsPtr;
	unsigned long long mutationsPtr;
	unsigned long long extra[5];
} SCD_Struct_NS28;

typedef struct {
	unsigned muts;
	unsigned used : 26;
	unsigned szidx : 6;
} SCD_Struct_NS29;

typedef struct {
	id objs;
	/*function pointer*/void* state;
	unsigned long long mutations;
	SCD_Struct_NS29) ;
} SCD_Struct_NS30;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_NS31;

typedef struct {
	unsigned long long used;
	id list[0];
} SCD_Struct_NS32;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	long long field5;
	id field6;
	id field7;
	id field8;
} SCD_Struct_NS33;

typedef struct _filesec* filesecRef;

typedef struct _acl* aclRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __CFBag* CFBagRef;

typedef struct {
	unsigned long long buckets[64];
} SCD_Struct_CF38;

typedef struct {
	unsigned long long mutations;
} SCD_Struct_NS39;

typedef struct {
	unsigned mutbits : 31;
	unsigned copyKeys : 1;
	unsigned used : 25;
	unsigned kvo : 1;
	unsigned szidx : 6;
} SCD_Struct_NS40;

typedef struct {
	id buffer;
	/*function pointer*/void* state;
	SCD_Struct_NS39 ;
	SCD_Struct_NS3 ;
	SCD_Struct_NS40) ;
} SCD_Struct_NS41;

