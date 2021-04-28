/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/nw_listener_inbox_delegate.h>
#import <libobjc.A.dylib/OS_nw_listener.h>

@protocol OS_nw_parameters, OS_nw_context, OS_nw_group_descriptor, OS_nw_connection, OS_dispatch_queue, OS_nw_error, OS_nw_array, OS_nw_dictionary, OS_nw_path_evaluator, OS_nw_path, OS_xpc_object, OS_nw_advertise_descriptor, OS_nw_endpoint;
@class NSObject, NSString;

@interface NWConcrete_nw_listener : NSObject <nw_listener_inbox_delegate, OS_nw_listener> {

	os_unfair_lock_s lock;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_group_descriptor> multicast_descriptor;
	unsigned short id_value;
	char id_str[6];
	NSObject*<OS_nw_connection> join_connection;
	char* launchd_key;
	NSObject*<OS_dispatch_queue> client_queue;
	unsigned client_qos_class;
	/*^block*/id event_handler;
	/*^block*/id new_connection_handler;
	unsigned new_connection_limit;
	/*^block*/id new_packet_handler;
	int state;
	NSObject*<OS_nw_error> last_error;
	NSObject*<OS_nw_array> inboxes;
	NSObject*<OS_nw_array> flow_registrations;
	NSObject*<OS_nw_dictionary> advertise_flow_registrations;
	NSObject*<OS_nw_path_evaluator> evaluator;
	NSObject*<OS_nw_path> path;
	NSObject*<OS_xpc_object> inactive_agents;
	NSObject*<OS_xpc_object> inactive_agent_dictionaries;
	NSObject*<OS_xpc_object> triggered_agents;
	NSObject*<OS_nw_parameters> current_derived_parameters;
	NWConcrete_nw_listener* internally_retained_object;
	NSObject*<OS_nw_path_evaluator> advertise_evaluator;
	NSObject*<OS_nw_path> advertise_path;
	NSObject*<OS_nw_advertise_descriptor> advertise_descriptor;
	/*^block*/id advertised_endpoint_changed_handler;
	DNSServiceRef_tRef dnsref;
	NSObject*<OS_nw_endpoint> local_endpoint;
	unsigned defer_socket;
	unsigned cancelling : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BOOL)canHandleNewConnection:(id)arg1 ;
-(void)handleInbound:(id)arg1 addProtocolInbox:(BOOL)arg2 ;
-(void)handleInboundPacket:(const char*)arg1 length:(unsigned short)arg2 from:(id)arg3 to:(id)arg4 interface:(id)arg5 socket:(id)arg6 ;
-(void)handleInboxFailed:(id)arg1 error:(id)arg2 ;
-(void)handleInboxCancelComplete:(id)arg1 ;
@end

