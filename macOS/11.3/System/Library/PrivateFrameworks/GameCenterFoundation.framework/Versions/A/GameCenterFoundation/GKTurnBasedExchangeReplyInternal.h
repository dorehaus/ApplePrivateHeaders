/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation {

	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _replyDate;
	unsigned char _recipientIndex;

}

@property (assign,nonatomic) unsigned char recipientIndex;                   //@synthesize recipientIndex=_recipientIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * replyDate;                             //@synthesize replyDate=_replyDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned char)recipientIndex;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(NSDate *)replyDate;
-(void)setRecipientIndex:(unsigned char)arg1 ;
-(void)setReplyDate:(NSDate *)arg1 ;
@end

