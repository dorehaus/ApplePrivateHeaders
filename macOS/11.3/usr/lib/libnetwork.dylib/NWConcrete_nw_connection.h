/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_connection.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_dispatch_queue, OS_dispatch_workloop, OS_nw_write_request, OS_nw_read_request, OS_nw_endpoint_handler, OS_nw_array, OS_dispatch_group, OS_nw_establishment_report;
@class NSObject, NSString;

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_dispatch_queue> request_queue;
	NSObject*<OS_dispatch_workloop> workloop;
	NWConcrete_nw_connection* _internal_reference;
	unsigned long long start_time;
	int state;
	netcore_stats_tcp_report* stats_report;
	int stats_reason;
	unsigned should_report_stats : 1;
	unsigned stats_reported : 1;
	unsigned should_report_generic_stats : 1;
	unsigned generic_stats_reported : 1;
	unsigned hit_max_timestamps : 1;
	unsigned should_report_activities : 1;
	unsigned initial_writes_are_non_idempotent : 1;
	unsigned should_report_probe_parent_stats : 1;
	unsigned should_report_probe_stats : 1;
	unsigned attempted_probe : 1;
	NSObject*<OS_nw_write_request> batched_sends;
	NSObject*<OS_nw_read_request> batched_receives;
	BOOL cancelled;
	BOOL prohibit_set_queue;
	BOOL batching;
	int alternate_path_state;
	os_unfair_lock_s lock;
	NSObject*<OS_nw_endpoint_handler> parent_endpoint_handler;
	NSObject*<OS_nw_endpoint_handler> connected_endpoint_handler;
	NSObject*<OS_nw_array> candidate_endpoint_handlers;
	NSObject*<OS_nw_endpoint_handler> transport_endpoint_handler;
	NSObject*<OS_nw_write_request> initial_write_requests;
	NSObject*<OS_nw_read_request> initial_read_requests;
	NSObject*<OS_nw_endpoint_handler> dry_run_endpoint_handler;
	NSObject*<OS_nw_endpoint_handler> ready_dry_run_endpoint_handler;
	unsigned client_qos_class;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id client_handler;
	/*^block*/id cancel_handler;
	/*^block*/id viability_changed_handler;
	/*^block*/id better_path_available_handler;
	/*^block*/id alternate_path_state_handler;
	/*^block*/id path_changed_handler;
	/*^block*/id read_close_handler;
	/*^block*/id write_close_handler;
	unsigned adaptive_read_timeout_count;
	/*^block*/id adaptive_read_timeout_handler;
	unsigned adaptive_write_timeout_count;
	/*^block*/id adaptive_write_timeout_handler;
	unsigned excessive_keepalive_count;
	unsigned excessive_keepalive_interval;
	/*^block*/id excessive_keepalive_handler;
	metadata_changed_registration_list_s* metadata_changed_registration_list;
	unsigned interface_time_delta;
	unsigned connected_fallback_generation;
	unsigned long long pending_expected_progress_target;
	unsigned long long estimated_bytes_download;
	unsigned long long estimated_bytes_upload;
	nw_connection_timestamp_s* timestamps;
	unsigned short num_timestamps;
	unsigned short used_timestamps;
	NSObject*<OS_nw_array> attempted_endpoints;
	nw_connection_throughput_monitor_s* throughput_monitor;
	/*^block*/id low_throughput_handler;
	NSObject*<OS_nw_array> activities;
	NSObject*<OS_nw_array> probes;
	NSObject*<OS_dispatch_group> cancel_group;
	NSObject*<OS_nw_establishment_report> establishment_report;
	NSObject*<OS_nw_array> data_transfer_reports;
	NSObject*<OS_nw_array> errors;
	unsigned top_id;
	unsigned char top_uuid[16];
	unsigned char parent_uuid[16];
	unsigned char logging_sequence_number;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
@end

