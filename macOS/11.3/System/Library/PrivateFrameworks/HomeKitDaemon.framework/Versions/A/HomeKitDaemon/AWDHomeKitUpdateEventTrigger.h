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

@interface AWDHomeKitUpdateEventTrigger : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _requestOrigin;
	unsigned _resultErrorCode;
	int _updateType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasResultErrorCode; 
@property (assign,nonatomic) unsigned resultErrorCode;                  //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) char hasUpdateType; 
@property (assign,nonatomic) int updateType;                            //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) char hasRequestOrigin; 
@property (assign,nonatomic) int requestOrigin;                         //@synthesize requestOrigin=_requestOrigin - In the implementation block
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
-(char)hasTimestamp;
-(int)updateType;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setUpdateType:(int)arg1 ;
-(void)setRequestOrigin:(int)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(void)setHasResultErrorCode:(char)arg1 ;
-(char)hasResultErrorCode;
-(unsigned)resultErrorCode;
-(int)requestOrigin;
-(void)setHasRequestOrigin:(char)arg1 ;
-(char)hasRequestOrigin;
-(id)requestOriginAsString:(int)arg1 ;
-(int)StringAsRequestOrigin:(id)arg1 ;
-(void)setHasUpdateType:(char)arg1 ;
-(char)hasUpdateType;
-(id)updateTypeAsString:(int)arg1 ;
-(int)StringAsUpdateType:(id)arg1 ;
@end

