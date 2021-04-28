/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol TRITaskQueuing;
@class NSXPCInterface, TRIServerContext, NSString;

@interface TRIXPCNamespaceManagementServiceListener : NSObject <NSXPCListenerDelegate> {

	NSXPCInterface* _interface;
	TRIServerContext* _serverContext;
	id<TRITaskQueuing> _taskQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 ;
@end
