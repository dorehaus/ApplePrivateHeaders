/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;
@class NSObject;

@interface VCWCMClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSObject*<OS_dispatch_queue> connectionQueue;
	NSObject*<WCMClientDelegate> wcmClientDelegate;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSObject*<OS_dispatch_queue> connectionQueue; 
@property (nonatomic,retain) id<WCMClientDelegate> wcmClientDelegate; 
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)stopWCMClient;
-(void)startWCMClient;
-(id<WCMClientDelegate>)wcmClientDelegate;
-(void)setWcmClientDelegate:(id<WCMClientDelegate>)arg1 ;
@end
