/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/Versions/A/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPDoodle : PBCodable <NSCopying> {

	NSData* _colorData;
	unsigned _doodleCount;
	NSData* _doodleData;
	NSData* _pointTimeDeltaData;
	SCD_Struct_ET16 _has;

}

@property (assign,nonatomic) char hasDoodleCount; 
@property (assign,nonatomic) unsigned doodleCount;                      //@synthesize doodleCount=_doodleCount - In the implementation block
@property (nonatomic,readonly) char hasDoodleData; 
@property (nonatomic,retain) NSData * doodleData;                       //@synthesize doodleData=_doodleData - In the implementation block
@property (nonatomic,readonly) char hasColorData; 
@property (nonatomic,retain) NSData * colorData;                        //@synthesize colorData=_colorData - In the implementation block
@property (nonatomic,readonly) char hasPointTimeDeltaData; 
@property (nonatomic,retain) NSData * pointTimeDeltaData;               //@synthesize pointTimeDeltaData=_pointTimeDeltaData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)doodleCount;
-(NSData *)doodleData;
-(NSData *)colorData;
-(NSData *)pointTimeDeltaData;
-(void)setDoodleCount:(unsigned)arg1 ;
-(void)setDoodleData:(NSData *)arg1 ;
-(void)setColorData:(NSData *)arg1 ;
-(void)setPointTimeDeltaData:(NSData *)arg1 ;
-(void)setHasDoodleCount:(char)arg1 ;
-(char)hasDoodleCount;
-(char)hasDoodleData;
-(char)hasColorData;
-(char)hasPointTimeDeltaData;
@end

