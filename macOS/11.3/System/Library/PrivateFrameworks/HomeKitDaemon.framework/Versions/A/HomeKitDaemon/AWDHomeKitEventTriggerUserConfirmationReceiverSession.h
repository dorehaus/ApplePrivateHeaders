/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitEventTriggerUserConfirmationReceiverSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _userResponseDelay;
	int _resultErrorCode;
	NSString* _sessionID;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasResultErrorCode; 
@property (assign,nonatomic) int resultErrorCode;                               //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) char hasUserResponseDelay; 
@property (assign,nonatomic) unsigned long long userResponseDelay;              //@synthesize userResponseDelay=_userResponseDelay - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(char)hasTimestamp;
-(char)hasSessionID;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setResultErrorCode:(int)arg1 ;
-(void)setHasResultErrorCode:(char)arg1 ;
-(char)hasResultErrorCode;
-(int)resultErrorCode;
-(unsigned long long)userResponseDelay;
-(void)setUserResponseDelay:(unsigned long long)arg1 ;
-(void)setHasUserResponseDelay:(char)arg1 ;
-(char)hasUserResponseDelay;
@end

