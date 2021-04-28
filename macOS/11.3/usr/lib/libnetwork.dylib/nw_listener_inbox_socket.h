/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/nw_listener_inbox.h>

@protocol OS_nw_fd_wrapper;
@class NSObject;

@interface nw_listener_inbox_socket : nw_listener_inbox {

	void* _source;
	NSObject*<OS_nw_fd_wrapper> _sockfd_wrapper_for_connection_group_only;
	int _sockfd_for_logging_only_do_not_close_or_use;
	int _sockfd_from_client;
	unsigned char _ipProtocol;
	unsigned char _listenUUID[16];

}
-(id)description;
-(BOOL)resume;
-(id)start;
-(BOOL)cancel;
-(BOOL)suspend;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
@end

