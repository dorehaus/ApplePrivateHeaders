/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction, CABackdropLayer, CALayer, BU_ButtonController, BU_TBUStarfieldShadowLayer, BU_DPRemoteDesktopPicture, NSArray, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>, BU_TNotificationCenterObserverGlue, NSObject, NSTimer, NSDate, NSDateComponents, NSValue, BU_TRunAfterHelper;

typedef struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> {
	__CFString fRef;
} TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>>;

typedef struct TString {
	TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> fString;
} TString;

typedef struct shared_ptr<TTimelineControl> {
	TTimelineControl __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TTimelineControl>;

typedef struct CGContext* CGContextRef;

typedef struct TNSRef<CAMediaTimingFunction, void> {
	CAMediaTimingFunction* fRef;
} TNSRef<CAMediaTimingFunction, void>;

typedef struct type {
	unsigned char __lx[32];
} type;

typedef struct _value_func<NSComparisonResult (__kindof NSView *, __kindof NSView *)> {
	type __buf_;
	__base<NSComparisonResult (__kindof NSView *, __kindof NSView *)> __f_;
} value_func<NSComparisonResult (__kindof NSView *, __kindof NSView *)>;

typedef struct function<NSComparisonResult (__kindof NSView *, __kindof NSView *)> {
	value_func<NSComparisonResult (__kindof NSView *, __kindof NSView *)> __f_;
} function<NSComparisonResult (__kindof NSView *, __kindof NSView *)>;

typedef struct shared_ptr<TTimeMachineTarget> {
	TTimeMachineTarget __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TTimeMachineTarget>;

typedef struct TNSRef<CABackdropLayer, void> {
	CABackdropLayer* fRef;
} TNSRef<CABackdropLayer, void>;

typedef struct TNSRef<CALayer, void> {
	CALayer* fRef;
} TNSRef<CALayer, void>;

typedef struct _compressed_pair<CGRect *, std::__1::allocator<CGRect>> {
	CGRect __value_;
} compressed_pair<CGRect *, std::__1::allocator<CGRect>>;

typedef struct vector<CGRect, std::__1::allocator<CGRect>> {
	CGRect __begin_;
	CGRect __end_;
	compressed_pair<CGRect *, std::__1::allocator<CGRect>> __end_cap_;
} vector<CGRect, std::__1::allocator<CGRect>>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct TNSRef<BU_ButtonController, void> {
	BU_ButtonController* fRef;
} TNSRef<BU_ButtonController, void>;

typedef struct OpaqueEventHandlerRef* OpaqueEventHandlerRefRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct TNSRef<BU_TBUStarfieldShadowLayer, void> {
	BU_TBUStarfieldShadowLayer* fRef;
} TNSRef<BU_TBUStarfieldShadowLayer, void>;

typedef struct TNSRef<BU_DPRemoteDesktopPicture, void> {
	BU_DPRemoteDesktopPicture* fRef;
} TNSRef<BU_DPRemoteDesktopPicture, void>;

typedef struct TNSRef<NSArray, void> {
	NSArray* fRef;
} TNSRef<NSArray, void>;

typedef struct CGImage* CGImageRef;

typedef struct CGColor* CGColorRef;

typedef struct _compressed_pair<TNotificationCenterObserver *, std::__1::allocator<TNotificationCenterObserver>> {
	TNotificationCenterObserver __value_;
} compressed_pair<TNotificationCenterObserver *, std::__1::allocator<TNotificationCenterObserver>>;

typedef struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> {
	TNotificationCenterObserver __begin_;
	TNotificationCenterObserver __end_;
	compressed_pair<TNotificationCenterObserver *, std::__1::allocator<TNotificationCenterObserver>> __end_cap_;
} vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>>;

typedef struct TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t>> {
	NSObject<OS_xpc_object>* fRef;
} TRef<NSObject<OS_xpc_object> *, TRetainReleasePolicy<xpc_object_t>>;

typedef struct TRef<NSObject<OS_dispatch_queue> *, TRetainReleasePolicy<dispatch_queue_t>> {
	NSObject<OS_dispatch_queue>* fRef;
} TRef<NSObject<OS_dispatch_queue> *, TRetainReleasePolicy<dispatch_queue_t>>;

typedef struct _value_func<void ()> {
	type __buf_;
	__base<void ()> __f_;
} value_func<void ()>;

typedef struct function<void ()> {
	value_func<void ()> __f_;
} function<void ()>;

typedef struct _value_func<void (NSDictionary<NSString *,NSObject *> *)> {
	type __buf_;
	__base<void (NSDictionary<NSString *,NSObject *> *)> __f_;
} value_func<void (NSDictionary<NSString *,NSObject *> *)>;

typedef struct function<void (NSDictionary<NSString *,NSObject *> *)> {
	value_func<void (NSDictionary<NSString *,NSObject *> *)> __f_;
} function<void (NSDictionary<NSString *,NSObject *> *)>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>;

typedef struct _compressed_pair<unsigned long, std::__1::hash<NSObject *__unsafe_unretained>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<NSObject *__unsafe_unretained>>;

typedef struct _compressed_pair<float, std::__1::equal_to<NSObject *__unsafe_unretained>> {
	float __value_;
} compressed_pair<float, std::__1::equal_to<NSObject *__unsafe_unretained>>;

typedef struct _hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> {
	__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::__1::allocator<std::__1::__hash_node<NSObject *__unsafe_unretained, void *>>> {
	hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::__1::allocator<std::__1::__hash_node<NSObject *__unsafe_unretained, void *>>>;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> {
	__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>>;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>>;

typedef struct _hash_table<NSObject *__unsafe_unretained, std::__1::hash<NSObject *__unsafe_unretained>, std::__1::equal_to<NSObject *__unsafe_unretained>, std::__1::allocator<NSObject *__unsafe_unretained>> {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::__1::allocator<std::__1::__hash_node<NSObject *__unsafe_unretained, void *>>> __p1_;
	compressed_pair<unsigned long, std::__1::hash<NSObject *__unsafe_unretained>> __p2_;
	compressed_pair<float, std::__1::equal_to<NSObject *__unsafe_unretained>> __p3_;
} hash_table<NSObject *__unsafe_unretained, std::__1::hash<NSObject *__unsafe_unretained>, std::__1::equal_to<NSObject *__unsafe_unretained>, std::__1::allocator<NSObject *__unsafe_unretained>>;

typedef struct unordered_set<NSObject *__unsafe_unretained, std::__1::hash<NSObject *__unsafe_unretained>, std::__1::equal_to<NSObject *__unsafe_unretained>, std::__1::allocator<NSObject *__unsafe_unretained>> {
	hash_table<NSObject *__unsafe_unretained, std::__1::hash<NSObject *__unsafe_unretained>, std::__1::equal_to<NSObject *__unsafe_unretained>, std::__1::allocator<NSObject *__unsafe_unretained>> __table_;
} unordered_set<NSObject *__unsafe_unretained, std::__1::hash<NSObject *__unsafe_unretained>, std::__1::equal_to<NSObject *__unsafe_unretained>, std::__1::allocator<NSObject *__unsafe_unretained>>;

typedef struct _value_func<void (NSAnimation *, float)> {
	type __buf_;
	__base<void (NSAnimation *, float)> __f_;
} value_func<void (NSAnimation *, float)>;

typedef struct function<void (NSAnimation *, float)> {
	value_func<void (NSAnimation *, float)> __f_;
} function<void (NSAnimation *, float)>;

typedef struct _value_func<void (NSNotification *)> {
	type __buf_;
	__base<void (NSNotification *)> __f_;
} value_func<void (NSNotification *)>;

typedef struct function<void (NSNotification *)> {
	value_func<void (NSNotification *)> __f_;
} function<void (NSNotification *)>;

typedef struct TNSRef<BU_TNotificationCenterObserverGlue, void> {
	BU_TNotificationCenterObserverGlue* fRef;
} TNSRef<BU_TNotificationCenterObserverGlue, void>;

typedef struct _value_func<NSNotificationCenter *()> {
	type __buf_;
	__base<NSNotificationCenter *()> __f_;
} value_func<NSNotificationCenter *()>;

typedef struct function<NSNotificationCenter *()> {
	value_func<NSNotificationCenter *()> __f_;
} function<NSNotificationCenter *()>;

typedef struct TNotificationCenterObserver {
	NSObject* fObservedObject;
	TString fNotificationName;
	TNSRef<BU_TNotificationCenterObserverGlue, void> fFunctorGlue;
	BOOL fIsDistributedObserving;
	function<NSNotificationCenter *()> fCenterProvider;
} TNotificationCenterObserver;

typedef struct TNSRef<NSTimer, void> {
	NSTimer* fRef;
} TNSRef<NSTimer, void>;

typedef struct TNSRef<NSDate, void> {
	NSDate* fRef;
} TNSRef<NSDate, void>;

typedef struct TNSRef<NSDateComponents, void> {
	NSDateComponents* fRef;
} TNSRef<NSDateComponents, void>;

typedef struct TNSWeakPtr<BU_TRunAfterHelper, void> {
	NSValue* fWeakObject;
} TNSWeakPtr<BU_TRunAfterHelper, void>;

typedef struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> {
	CGImage fRef;
} TRef<CGImage *, TRetainReleasePolicy<CGImageRef>>;

typedef struct _compressed_pair<TNSRef<CALayer, void> *, std::__1::allocator<TNSRef<CALayer, void>>> {
	TNSRef<CALayer, void> __value_;
} compressed_pair<TNSRef<CALayer, void> *, std::__1::allocator<TNSRef<CALayer, void>>>;

typedef struct vector<TNSRef<CALayer, void>, std::__1::allocator<TNSRef<CALayer, void>>> {
	TNSRef<CALayer, void> __begin_;
	TNSRef<CALayer, void> __end_;
	compressed_pair<TNSRef<CALayer, void> *, std::__1::allocator<TNSRef<CALayer, void>>> __end_cap_;
} vector<TNSRef<CALayer, void>, std::__1::allocator<TNSRef<CALayer, void>>>;

typedef struct _compressed_pair<fstd::finder_callable_details::callable_holder_base<void> *, std::__1::default_delete<fstd::finder_callable_details::callable_holder_base<void>>> {
	callable_holder_base<void> __value_;
} compressed_pair<fstd::finder_callable_details::callable_holder_base<void> *, std::__1::default_delete<fstd::finder_callable_details::callable_holder_base<void>>>;

typedef struct unique_ptr<fstd::finder_callable_details::callable_holder_base<void>, std::__1::default_delete<fstd::finder_callable_details::callable_holder_base<void>>> {
	compressed_pair<fstd::finder_callable_details::callable_holder_base<void> *, std::__1::default_delete<fstd::finder_callable_details::callable_holder_base<void>>> __ptr_;
} unique_ptr<fstd::finder_callable_details::callable_holder_base<void>, std::__1::default_delete<fstd::finder_callable_details::callable_holder_base<void>>>;

typedef struct unique_function<void ()> {
	unique_ptr<fstd::finder_callable_details::callable_holder_base<void>, std::__1::default_delete<fstd::finder_callable_details::callable_holder_base<void>>> fLambdaHolder;
} unique_function<void ()>;

typedef struct TNSRef<BU_TRunAfterHelper, void> {
	BU_TRunAfterHelper* fRef;
} TNSRef<BU_TRunAfterHelper, void>;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct TSpinLock {
	os_unfair_lock_s fSpinLock;
} TSpinLock;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<TString, std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::less<TString>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<TString, std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::less<TString>, true>>;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TString, TNotificationCenterObserver>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TString, TNotificationCenterObserver>, void *>>>;

typedef struct _tree<std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::__map_value_compare<TString, std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::less<TString>, true>, std::__1::allocator<std::__1::__value_type<TString, TNotificationCenterObserver>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TString, TNotificationCenterObserver>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<TString, std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::less<TString>, true>> __pair3_;
} tree<std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::__map_value_compare<TString, std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::less<TString>, true>, std::__1::allocator<std::__1::__value_type<TString, TNotificationCenterObserver>>>;

typedef struct map<TString, TNotificationCenterObserver, std::__1::less<TString>, std::__1::allocator<std::__1::pair<const TString, TNotificationCenterObserver>>> {
	tree<std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::__map_value_compare<TString, std::__1::__value_type<TString, TNotificationCenterObserver>, std::__1::less<TString>, true>, std::__1::allocator<std::__1::__value_type<TString, TNotificationCenterObserver>>> __tree_;
} map<TString, TNotificationCenterObserver, std::__1::less<TString>, std::__1::allocator<std::__1::pair<const TString, TNotificationCenterObserver>>>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<UDefaults::RegistryID, std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::less<UDefaults::RegistryID>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<UDefaults::RegistryID, std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::less<UDefaults::RegistryID>, true>>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, void *>>>;

typedef struct _tree<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::__map_value_compare<UDefaults::RegistryID, std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::less<UDefaults::RegistryID>, true>, std::__1::allocator<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<UDefaults::RegistryID, std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::less<UDefaults::RegistryID>, true>> __pair3_;
} tree<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::__map_value_compare<UDefaults::RegistryID, std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::less<UDefaults::RegistryID>, true>, std::__1::allocator<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>>>;

typedef struct map<UDefaults::RegistryID, TNotificationCenterObserver, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<std::__1::pair<const UDefaults::RegistryID, TNotificationCenterObserver>>> {
	tree<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::__map_value_compare<UDefaults::RegistryID, std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>, std::__1::less<UDefaults::RegistryID>, true>, std::__1::allocator<std::__1::__value_type<UDefaults::RegistryID, TNotificationCenterObserver>>> __tree_;
} map<UDefaults::RegistryID, TNotificationCenterObserver, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<std::__1::pair<const UDefaults::RegistryID, TNotificationCenterObserver>>>;

