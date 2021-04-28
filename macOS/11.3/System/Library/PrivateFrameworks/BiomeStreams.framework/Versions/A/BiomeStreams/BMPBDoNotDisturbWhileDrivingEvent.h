/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BMPBDoNotDisturbWhileDrivingEvent : PBCodable <NSCopying> {

	int _reason;
	char _isStart;
	SCD_Struct_BM4 _has;

}

@property (assign,nonatomic) char hasIsStart; 
@property (assign,nonatomic) char isStart;                 //@synthesize isStart=_isStart - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) int reason;                   //@synthesize reason=_reason - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)reason;
-(id)dictionaryRepresentation;
-(void)setReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(char)hasReason;
-(void)setHasReason:(char)arg1 ;
-(char)isStart;
-(void)setIsStart:(char)arg1 ;
-(void)setHasIsStart:(char)arg1 ;
-(char)hasIsStart;
@end

