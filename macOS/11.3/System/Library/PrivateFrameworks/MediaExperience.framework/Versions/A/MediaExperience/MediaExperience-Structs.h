/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASCLIENTSessionState;

typedef struct _long {
	unsigned long long __cap_;
	unsigned long long __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[23];
} short;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

typedef struct shared_ptr<caulk::reactor<mx::IClientProcess *>> {
	const eactor<mx::IClientProcess *> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<caulk::reactor<mx::IClientProcess *>>;

typedef struct ObjectRef<const __CFString *> {
	__CFString mCFObject;
} ObjectRef<const __CFString *>;

typedef struct StringRef {
	ObjectRef<const __CFString *> mObject;
} StringRef;

typedef struct SessionInterruptionSource {
	unsigned interruptorToken;
	StringRef name;
	unsigned long long state;
	unsigned long long cause;
	BOOL shouldResume;
} SessionInterruptionSource;

typedef struct {
	ASCLIENTSessionState* clientConfig;
	BOOL isActive;
	BOOL wasPlayingWhenInterrupted;
	unsigned long long runningState;
	/*^block*/id interruptionHandler;
	BOOL hasInterruptionSource;
	SessionInterruptionSource interruptionSource;
	shared_ptr<caulk::reactor<mx::IClientProcess *>> clientProcessReactor;
} SCD_Struct_MX10;

typedef struct _compressed_pair<MXAuRAIOControllerPayload *__strong *, std::__1::allocator<MXAuRAIOControllerPayload *>> {
	id __value_;
} compressed_pair<MXAuRAIOControllerPayload *__strong *, std::__1::allocator<MXAuRAIOControllerPayload *>>;

typedef struct vector<MXAuRAIOControllerPayload *, std::__1::allocator<MXAuRAIOControllerPayload *>> {
	id __begin_;
	id __end_;
	compressed_pair<MXAuRAIOControllerPayload *__strong *, std::__1::allocator<MXAuRAIOControllerPayload *>> __end_cap_;
} vector<MXAuRAIOControllerPayload *, std::__1::allocator<MXAuRAIOControllerPayload *>>;

typedef struct _compressed_pair<MXAuRAVirtualPortPayload *__strong *, std::__1::allocator<MXAuRAVirtualPortPayload *>> {
	id __value_;
} compressed_pair<MXAuRAVirtualPortPayload *__strong *, std::__1::allocator<MXAuRAVirtualPortPayload *>>;

typedef struct vector<MXAuRAVirtualPortPayload *, std::__1::allocator<MXAuRAVirtualPortPayload *>> {
	id __begin_;
	id __end_;
	compressed_pair<MXAuRAVirtualPortPayload *__strong *, std::__1::allocator<MXAuRAVirtualPortPayload *>> __end_cap_;
} vector<MXAuRAVirtualPortPayload *, std::__1::allocator<MXAuRAVirtualPortPayload *>>;

typedef struct {
	unsigned field1[8];
} SCD_Struct_MX15;

typedef struct {
	id field1;
	BOOL field2;
	BOOL field3;
	unsigned long long field4;
	id field5;
	/*function pointer*/void* field6;
	BOOL field7;
	shared_ptr<caulk::reactor<mx::IClientProcess *>> field8;
	SessionInterruptionSource field9;
} SCD_Struct_MX16;

typedef struct shared_ptr<caulk::reactor<mx::IProcessManager *>> {
	const eactor<mx::IProcessManager *> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<caulk::reactor<mx::IProcessManager *>>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::less<unsigned int>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::less<unsigned int>, true>>;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, MXPlayerSession *>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, MXPlayerSession *>, void *>>>;

typedef struct _tree<std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, MXPlayerSession *>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, MXPlayerSession *>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::less<unsigned int>, true>> __pair3_;
} tree<std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, MXPlayerSession *>>>;

typedef struct map<unsigned int, MXPlayerSession *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MXPlayerSession *>>> {
	tree<std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MXPlayerSession *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, MXPlayerSession *>>> __tree_;
} map<unsigned int, MXPlayerSession *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MXPlayerSession *>>>;

typedef struct __SecTask* SecTaskRef;

typedef const struct function<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)>* function<void (unsigned int, const AMCP::Proc_Cycle_Info &, unsigned long, AMCP::Proc_Stream *, unsigned long, AMCP::Proc_Stream *)>Ref;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned polarPattern : 1;
} SCD_Struct_AS26;

typedef struct {
	unsigned hardwareControlFlags : 1;
	unsigned aggregatedIOPreference : 1;
	unsigned interruptionPriority : 1;
	unsigned outputPortOverride : 1;
	unsigned reporterID : 1;
	unsigned allowAllBuiltInDataSources : 1;
	unsigned bypassRingerSwitchPolicy : 1;
	unsigned fixHardwareFormatToMultiChannel : 1;
	unsigned forceSoundCheck : 1;
	unsigned iAmTheAssistant : 1;
	unsigned microphoneFollowsCamera : 1;
	unsigned selectIndependentRoutingContext : 1;
	unsigned usingLongFormAudio : 1;
} SCD_Struct_AS27;

typedef struct {
	unsigned scalarVolume : 1;
	unsigned dSPFlavor : 1;
	unsigned muteState : 1;
} SCD_Struct_AS28;

typedef struct {
	unsigned clientSampleRate : 1;
	unsigned iOBufferFrameSize : 1;
} SCD_Struct_AS29;

typedef struct {
	unsigned coord0 : 1;
	unsigned coord1 : 1;
	unsigned coord2 : 1;
	unsigned label : 1;
} SCD_Struct_AS30;

typedef const struct __CFAllocator* CFAllocatorRef;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef struct shared_ptr<aura::ResourceArbitrator> {
	ResourceArbitrator __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<aura::ResourceArbitrator>;

typedef struct weak_ptr<aura::Clock> {
	Clock __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<aura::Clock>;

typedef struct weak_ptr<aura::Device> {
	Device __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<aura::Device>;

typedef struct weak_ptr<aura::IOController> {
	IOController __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<aura::IOController>;

typedef struct weak_ptr<aura::Object> {
	Object __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<aura::Object>;

typedef struct weak_ptr<aura::VirtualPort> {
	VirtualPort __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<aura::VirtualPort>;
