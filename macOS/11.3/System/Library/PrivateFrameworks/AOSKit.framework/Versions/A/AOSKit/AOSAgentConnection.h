/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface AOSAgentConnection : NSObject {

	char _isDisconnected;
	NSObject*<OS_xpc_object> _connection;

}

@property (assign,nonatomic) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) char isDisconnected;                              //@synthesize isDisconnected=_isDisconnected - In the implementation block
+(id)resultFromMessage:(id)arg1 ;
+(id)errorStringFromMessage:(id)arg1 ;
+(void)initialize;
+(id)errorFromMessage:(id)arg1 ;
-(void)sendMessageWithPayload:(id)arg1 replyHandler:(/*^block*/id)arg2 isAsync:(char)arg3 ;
-(void)setIsDisconnected:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)disconnect;
-(char)isConnected;
-(char)connect;
-(char)isDisconnected;
@end

