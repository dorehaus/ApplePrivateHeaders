/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject<OS_dispatch_object>;

typedef struct shared_ptr<Property_Type_Info> {
	Property_Type_Info __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Property_Type_Info>;

typedef struct shared_ptr<caulk::mach::unfair_lock> {
	unfair_lock __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<caulk::mach::unfair_lock>;

typedef struct __CFString* CFStringRef;

typedef struct object {
	NSObject<OS_dispatch_object>* fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct shared_ptr<std::__1::function<void (std::__1::shared_ptr<Driver_File>)>> {
	function<void (std::__1::shared_ptr<Driver_File>)> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::function<void (std::__1::shared_ptr<Driver_File>)>>;

typedef struct shared_ptr<Driver_File> {
	Driver_File __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Driver_File>;

typedef struct shared_ptr<HAL::Client::Object_ID_Map> {
	Object_ID_Map __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Client::Object_ID_Map>;

typedef struct shared_ptr<Client_Side_IO_Gateway> {
	Client_Side_IO_Gateway __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Client_Side_IO_Gateway>;

typedef struct shared_ptr<std::__1::map<unsigned long long, void *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, void *>>>> {
	map<unsigned long long, void *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, void *>>> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::map<unsigned long long, void *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, void *>>>>;

typedef struct shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>, std::__1::hash<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::equal_to<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::allocator<std::__1::pair<const AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>>>> {
	unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>, std::__1::hash<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::equal_to<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::allocator<std::__1::pair<const AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>>> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>, std::__1::hash<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::equal_to<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::allocator<std::__1::pair<const AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>>>>;

typedef struct shared_ptr<std::__1::vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>, std::__1::allocator<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>>> {
	vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>, std::__1::allocator<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>, std::__1::allocator<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>>>;

typedef struct shared_ptr<std::__1::shared_mutex> {
	shared_mutex __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::shared_mutex>;

typedef struct shared_ptr<Daemon_Guts> {
	Daemon_Guts __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Daemon_Guts>;

typedef struct shared_ptr<Server_Side_Client_IO_Host> {
	Server_Side_Client_IO_Host __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Server_Side_Client_IO_Host>;

typedef struct shared_ptr<AMCP::Utility::Settings_Storage> {
	Settings_Storage __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AMCP::Utility::Settings_Storage>;

typedef struct shared_ptr<HAL::Default_Device::Manager> {
	Manager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Default_Device::Manager>;

typedef struct shared_ptr<HAL::Object_State::Manager> {
	Manager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Object_State::Manager>;

typedef struct shared_ptr<AMCP::System::All_Control_Value_Observer> {
	All_Control_Value_Observer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AMCP::System::All_Control_Value_Observer>;

typedef struct shared_ptr<HALS_PowerManager::System_Interface> {
	System_Interface __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HALS_PowerManager::System_Interface>;

typedef struct shared_ptr<HAL::Aggregate::Manager> {
	Manager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Aggregate::Manager>;

typedef struct type {
	unsigned char __lx[32];
} type;

typedef struct _value_func<int ()> {
	type __buf_;
	__base<int ()> __f_;
} value_func<int ()>;

typedef struct function<int ()> {
	value_func<int ()> __f_;
} function<int ()>;

typedef struct _value_func<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base>> ()> {
	type __buf_;
	__base<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base>> ()> __f_;
} value_func<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base>> ()>;

typedef struct function<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base>> ()> {
	value_func<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base>> ()> __f_;
} function<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base>> ()>;

typedef struct weak_ptr<HAL_Server_Lifetime_Events> {
	HAL_Server_Lifetime_Events __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<HAL_Server_Lifetime_Events>;

typedef struct ObjectRef<const __CFDictionary *> {
	__CFDictionary mCFObject;
} ObjectRef<const __CFDictionary *>;

typedef struct DictionaryRef {
	ObjectRef<const __CFDictionary *> mObject;
} DictionaryRef;

typedef struct shared_ptr<Host_Interface> {
	Host_Interface __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Host_Interface>;

