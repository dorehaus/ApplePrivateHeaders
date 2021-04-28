/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCMessage.h>

@interface MCRemoteMessage : MCMessage {

	unsigned long long _messageSize;

}

@property (assign,nonatomic) char isPartial; 
@property (assign,nonatomic) char partsHaveBeenCached; 
@property (assign,nonatomic) unsigned long long messageSize;              //@synthesize messageSize=_messageSize - In the implementation block
-(id)initWithSize:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(char)isPartial;
-(void)setPartsHaveBeenCached:(char)arg1 ;
-(void)setIsPartial:(char)arg1 ;
-(char)isMessageContentLocallyAvailable;
-(char)partsHaveBeenCached;
@end

