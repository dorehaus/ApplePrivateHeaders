/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _resultErrorCode;
	int _source;
	char _wasNewUpdateFetched;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasResultErrorCode; 
@property (assign,nonatomic) unsigned resultErrorCode;                  //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) char hasSource; 
@property (assign,nonatomic) int source;                                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) char hasWasNewUpdateFetched; 
@property (assign,nonatomic) char wasNewUpdateFetched;                  //@synthesize wasNewUpdateFetched=_wasNewUpdateFetched - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)source;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(char)hasSource;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setHasSource:(char)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(void)setHasResultErrorCode:(char)arg1 ;
-(char)hasResultErrorCode;
-(void)setWasNewUpdateFetched:(char)arg1 ;
-(void)setHasWasNewUpdateFetched:(char)arg1 ;
-(char)hasWasNewUpdateFetched;
-(unsigned)resultErrorCode;
-(char)wasNewUpdateFetched;
@end
