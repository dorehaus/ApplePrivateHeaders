/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {

	BSXPCServiceConnectionRootContext* _parent;
	char _remote;
	unsigned long long _identifier;

}
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(char)isServer;
-(char)isClient;
-(char)isChild;
-(id)endpointDescription;
@end
