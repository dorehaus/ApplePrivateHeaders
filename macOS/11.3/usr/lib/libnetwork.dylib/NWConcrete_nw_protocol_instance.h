/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_instance.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_nw_array, OS_nw_path_flow_registration, OS_nw_path;
@class NWConcrete_nw_protocol_definition, NSObject, NWConcrete_nw_protocol_options, NSString;

@interface NWConcrete_nw_protocol_instance : NSObject <OS_nw_protocol_instance> {

	NWConcrete_nw_protocol_definition* parent_definition;
	nw_protocol_callbacks* callbacks;
	nw_protocol* protocol;
	nw_listen_protocol* listen_handler;
	void* destroy_timer;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NWConcrete_nw_protocol_options* options;
	unsigned long long reserve_header_size;
	unsigned long long reserve_footer_size;
	unsigned long long maximum_content_size;
	unsigned protocol_outbound_data_limit;
	void* handle;
	NSObject*<OS_nw_context> context;
	nw_frame_array_s* inbound_frames;
	nw_frame_array_s* outbound_frames;
	unsigned empty_frame_pool_count;
	nw_frame_array_s* empty_frame_pool;
	nw_frame_array_s* pending_inbound_frames;
	unsigned pending_inbound_frame_count;
	unsigned pending_inbound_frame_bytes;
	nw_frame_array_s* pending_outbound_frames;
	NSObject*<OS_nw_array> outbound_data_requests;
	nw_hash_tableRef flows_table;
	nw_hash_tableRef custom_flow_mapping_table;
	unsigned long long last_accepted_flow;
	/*^block*/id wakeup;
	/*^block*/id wakeup_block;
	NSObject*<OS_nw_path_flow_registration> flow_registration;
	NSObject*<OS_nw_path> current_path;
	nw_hash_tableRef paths_table;
	unsigned long long default_path;
	unsigned long long current_setup_path;
	NSObject*<OS_nw_endpoint> current_setup_path_endpoint;
	NSObject*<OS_nw_endpoint> current_setup_path_local_endpoint;
	NSObject*<OS_nw_parameters> current_setup_path_parameters;
	NSObject*<OS_nw_endpoint> derived_ipv4_endpoint;
	unsigned short paths_log_id_num;
	unsigned initialized : 1;
	unsigned started : 1;
	unsigned ready : 1;
	unsigned connection_used : 1;
	unsigned output_connected : 1;
	unsigned limit_outbound_data : 1;
	unsigned datagram : 1;
	unsigned supports_external_data : 1;
	unsigned link_flow_controlled : 1;
	unsigned waiting_for_link_flow_control : 1;
	unsigned processing_input : 1;
	unsigned processing_output : 1;
	unsigned waiting_for_listener_accept : 1;
	unsigned new_flow_is_control : 1;
	unsigned should_destroy : 1;
	unsigned input_acknowledged : 1;
	unsigned reads_suspended : 1;
	unsigned failed_to_get_output : 1;
	unsigned needs_output_available : 1;
	unsigned needs_finalize_output : 1;
	unsigned ignore_future_path_changes : 1;
	char log_str[84];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(nw_protocol*)getProtocolStructure;
@end

