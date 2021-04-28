/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEventMessage.h>

@protocol OS_xpc_object;
@class NSObject;

@interface OSActivityTraceMessageEvent : OSActivityEventMessage {

	unsigned char _messageType;
	NSObject*<OS_xpc_object> _payload;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
@property (nonatomic,readonly) unsigned char messageType;                            //@synthesize messageType=_messageType - In the implementation block
-(void)_addProperties:(id)arg1 ;
-(NSObject*<OS_xpc_object>)payload;
-(unsigned char)messageType;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(unsigned long long)senderProgramCounter;
@end

