/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXHearingSupport.framework/Versions/A/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXSimpleMessage.h>

@class NSString;

@interface AXIDCMessage : AXSimpleMessage {

	NSString* _UUID;
	/*^block*/id _sendCompletion;

}

@property (nonatomic,retain) NSString * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) id sendCompletion;              //@synthesize sendCompletion=_sendCompletion - In the implementation block
+(id)messageWithPayload:(id)arg1 andSendCompletion:(/*^block*/id)arg2 ;
-(NSString *)UUID;
-(id)initWithPayload:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)sendCompletion;
-(void)setSendCompletion:(id)arg1 ;
-(id)transportPayload;
@end

