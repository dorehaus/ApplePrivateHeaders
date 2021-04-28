/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_protocol_transform.h>

@protocol OS_nw_endpoint, OS_xpc_object, OS_nw_protocol_stack;
@class NSObject, NSString;

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {

	unsigned clear_application : 1;
	unsigned clear_transport : 1;
	unsigned clear_internet : 1;
	unsigned no_proxy : 1;
	unsigned prohibit_direct : 1;
	unsigned tfo : 1;
	unsigned tfo_no_cookie : 1;
	unsigned no_fallback : 1;
	unsigned fast_open_force_enable : 1;
	unsigned set_multipath_service : 1;
	int fallback_mode;
	int multipath_service;
	int data_mode;
	NSObject*<OS_nw_endpoint> replace_endpoint;
	NSObject*<OS_xpc_object> disabled_protocols;
	NSObject*<OS_nw_protocol_stack> transform_stack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
@end
