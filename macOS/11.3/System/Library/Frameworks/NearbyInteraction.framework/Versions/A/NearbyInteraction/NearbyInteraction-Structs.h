/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/Versions/A/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _compressed_pair<UWBSessionInterruptionBookkeeping *, std::__1::allocator<UWBSessionInterruptionBookkeeping>> {
	UWBSessionInterruptionBookkeeping __value_;
} compressed_pair<UWBSessionInterruptionBookkeeping *, std::__1::allocator<UWBSessionInterruptionBookkeeping>>;

typedef struct vector<UWBSessionInterruptionBookkeeping, std::__1::allocator<UWBSessionInterruptionBookkeeping>> {
	UWBSessionInterruptionBookkeeping __begin_;
	UWBSessionInterruptionBookkeeping __end_;
	compressed_pair<UWBSessionInterruptionBookkeeping *, std::__1::allocator<UWBSessionInterruptionBookkeeping>> __end_cap_;
} vector<UWBSessionInterruptionBookkeeping, std::__1::allocator<UWBSessionInterruptionBookkeeping>>;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	 vector;
} SCD_Struct_NI7;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NI8;

