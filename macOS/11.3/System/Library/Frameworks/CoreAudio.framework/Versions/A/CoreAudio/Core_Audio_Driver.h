/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <CoreAudio/Core_Audio_Driver_Protocol.h>

@protocol OS_dispatch_queue;
@class Core_Audio_Driver_Host_Proxy, NSXPCListener, NSXPCListenerEndpoint, NSObject, NSString;

@interface Core_Audio_Driver : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Protocol> {

	Core_Audio_Driver_Host_Proxy* _driver_host_proxy;
	NSXPCListener* _listener;
	NSXPCListenerEndpoint* _endpoint;
	AudioServerPlugInDriverInterface* _asp_interface;
	AudioServerPlugInHostInterface* _host_interface;
	NSObject*<OS_dispatch_queue> _concurrent_queue;
	/*^block*/id _process_boost_reply;
	shared_ptr<caulk::mach::unfair_lock>* _config_change_info_lock;
	shared_ptr<std::__1::map<unsigned long long, void *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, void *>>>>* _config_change_info_map;
	shared_ptr<Property_Type_Info>* _m_custom_property_type_cache;
	shared_ptr<caulk::mach::unfair_lock>* _io_receiver_lock;
	shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>, std::__1::hash<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::equal_to<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::allocator<std::__1::pair<const AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>>>>* _registered_io_receivers;
	shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>, std::__1::hash<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::equal_to<AMCP::Portal::IPC::io_messenger_id_t>, std::__1::allocator<std::__1::pair<const AMCP::Portal::IPC::io_messenger_id_t, std::__1::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>>>>* _io_receivers;
	shared_ptr<std::__1::vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>, std::__1::allocator<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>>>* _io_buffer_list;

}

@property (nonatomic,retain) Core_Audio_Driver_Host_Proxy * driver_host_proxy;                                                               //@synthesize driver_host_proxy=_driver_host_proxy - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                                                               //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) AudioServerPlugInDriverInterface* asp_interface;                                                                //@synthesize asp_interface=_asp_interface - In the implementation block
@property (assign,nonatomic) AudioServerPlugInHostInterface* host_interface;                                                                 //@synthesize host_interface=_host_interface - In the implementation block
@property (nonatomic,readonly) shared_ptr<caulk::mach::unfair_lock>* config_change_info_lock;                                                //@synthesize config_change_info_lock=_config_change_info_lock - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::map<unsigned long long config_change_info_map;                                             //@synthesize config_change_info_map=_config_change_info_map - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrent_queue;                                                                  //@synthesize concurrent_queue=_concurrent_queue - In the implementation block
@property (assign,nonatomic) shared_ptr<Property_Type_Info>* m_property_type_info;                                                           //@synthesize m_custom_property_type_cache=_m_custom_property_type_cache - In the implementation block
@property (nonatomic,copy) id process_boost_reply;                                                                                           //@synthesize process_boost_reply=_process_boost_reply - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t registered_io_receivers;                //@synthesize registered_io_receivers=_registered_io_receivers - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t io_receivers;                           //@synthesize io_receivers=_io_receivers - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t io_buffer_list;              //@synthesize io_buffer_list=_io_buffer_list - In the implementation block
@property (assign,nonatomic) shared_ptr<caulk::mach::unfair_lock>* io_receiver_lock;                                                         //@synthesize io_receiver_lock=_io_receiver_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)initialize:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(shared_ptr<Property_Type_Info>*)m_property_type_info;
-(void)setM_property_type_info:(shared_ptr<Property_Type_Info>*)arg1 ;
-(void)set_property_data:(Driver_Property_Identity)arg1 qualifier:(id)arg2 data:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)get_property_data:(Driver_Property_Identity)arg1 qualifier:(id)arg2 data_size:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(void)get_property_data_size:(Driver_Property_Identity)arg1 qualifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)is_property_settable:(Driver_Property_Identity)arg1 reply:(/*^block*/id)arg2 ;
-(void)has_property:(Driver_Property_Identity)arg1 reply:(/*^block*/id)arg2 ;
-(void)unregister_io_buffer:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)register_io_buffer:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)retain_reply_for_process_boost:(/*^block*/id)arg1 ;
-(void)stop_synchronous_messenger:(unsigned)arg1 client_id:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)start_synchronous_messenger:(unsigned)arg1 client_id:(unsigned)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned)arg4 reply:(/*^block*/id)arg5 ;
-(void)stop_io:(unsigned)arg1 client_id:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)start_io:(unsigned)arg1 client_id:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)destroy_device:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)create_device:(id)arg1 client_info:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)remove_device_client:(unsigned)arg1 client_info:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)add_device_client:(unsigned)arg1 client_info:(id)arg2 io_messenger:(id)arg3 work_group:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)abort_device_configuration_change:(unsigned)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)perform_device_configuration_change:(unsigned)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(id)init_driver_interface:(AudioServerPlugInDriverInterface*)arg1 ;
-(void)store_change_info:(void*)arg1 for_token:(unsigned long long)arg2 ;
-(int)create_io_receiver:(unsigned)arg1 client_id:(unsigned)arg2 io_messenger:(id)arg3 work_group:(id)arg4 ;
-(int)destroy_io_receiver:(unsigned)arg1 client_id:(unsigned)arg2 ;
-(int)destroy_io_receiver:(unsigned)arg1 ;
-(int)handle_register_buffer:(dict)arg1 ;
-(int)handle_unregister_buffer:(dict)arg1 ;
-(void)release_cf_object_from_qualifier_data:(id)arg1 property_identity:(Driver_Property_Identity)arg2 ;
-(void)release_cf_object_from_property_data:(id)arg1 property_identity:(Driver_Property_Identity)arg2 ;
-(id)unpack_data_from_qualifier:(Driver_Property_Identity)arg1 qualifier:(id)arg2 ;
-(Core_Audio_Driver_Host_Proxy *)driver_host_proxy;
-(void)setDriver_host_proxy:(Core_Audio_Driver_Host_Proxy *)arg1 ;
-(AudioServerPlugInDriverInterface*)asp_interface;
-(void)setAsp_interface:(AudioServerPlugInDriverInterface*)arg1 ;
-(AudioServerPlugInHostInterface*)host_interface;
-(void)setHost_interface:(AudioServerPlugInHostInterface*)arg1 ;
-(shared_ptr<caulk::mach::unfair_lock>*)config_change_info_lock;
-(shared_ptr<std::__1::map<unsigned long long)config_change_info_map;
-(void)setConfig_change_info_map:(shared_ptr<std::__1::map<unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrent_queue;
-(void)setConcurrent_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(shared_ptr<caulk::mach::unfair_lock>*)io_receiver_lock;
-(void)setIo_receiver_lock:(shared_ptr<caulk::mach::unfair_lock>*)arg1 ;
-(id)process_boost_reply;
-(void)setProcess_boost_reply:(id)arg1 ;
-(shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t)registered_io_receivers;
-(void)setRegistered_io_receivers:(shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t)arg1 ;
-(shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t)io_receivers;
-(void)setIo_receivers:(shared_ptr<std::__1::unordered_map<AMCP::Portal::IPC::io_messenger_id_t)arg1 ;
-(shared_ptr<std::__1::vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t)io_buffer_list;
-(void)setIo_buffer_list:(shared_ptr<std::__1::vector<std::__1::pair<AMCP::Portal::IPC::shared_buffer_info_t)arg1 ;
@end
