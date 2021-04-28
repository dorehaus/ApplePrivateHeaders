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

@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying> {

	unsigned long long _byteLength;
	unsigned long long _byteOffset;
	double _duration;
	double _timeOffset;
	unsigned _height;
	int _type;
	unsigned _width;
	SCD_Struct_HM29 _has;

}

@property (assign,nonatomic) char hasByteOffset; 
@property (assign,nonatomic) unsigned long long byteOffset;              //@synthesize byteOffset=_byteOffset - In the implementation block
@property (assign,nonatomic) char hasByteLength; 
@property (assign,nonatomic) unsigned long long byteLength;              //@synthesize byteLength=_byteLength - In the implementation block
@property (assign,nonatomic) char hasTimeOffset; 
@property (assign,nonatomic) double timeOffset;                          //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) unsigned width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) char hasHeight; 
@property (assign,nonatomic) unsigned height;                            //@synthesize height=_height - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(id)dictionaryRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(unsigned long long)byteLength;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setByteLength:(unsigned long long)arg1 ;
-(unsigned long long)byteOffset;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setHasWidth:(char)arg1 ;
-(char)hasWidth;
-(void)setHasHeight:(char)arg1 ;
-(char)hasHeight;
-(double)timeOffset;
-(void)setByteOffset:(unsigned long long)arg1 ;
-(void)setHasByteOffset:(char)arg1 ;
-(char)hasByteOffset;
-(void)setHasByteLength:(char)arg1 ;
-(char)hasByteLength;
-(void)setHasTimeOffset:(char)arg1 ;
-(char)hasTimeOffset;
@end

