/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying> {

	int _flag;
	char _correctedValue;
	char _originalValue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasFlag; 
@property (assign,nonatomic) int flag; 
@property (assign,nonatomic) char hasOriginalValue; 
@property (assign,nonatomic) char originalValue; 
@property (assign,nonatomic) char hasCorrectedValue; 
@property (assign,nonatomic) char correctedValue; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)originalValue;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFlag:(int)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)correctedValue;
-(void)setOriginalValue:(char)arg1 ;
-(void)setCorrectedValue:(char)arg1 ;
-(char)hasOriginalValue;
-(char)hasCorrectedValue;
-(int)flag;
-(void)setHasFlag:(char)arg1 ;
-(char)hasFlag;
-(id)flagAsString:(int)arg1 ;
-(int)StringAsFlag:(id)arg1 ;
-(void)setHasOriginalValue:(char)arg1 ;
-(void)setHasCorrectedValue:(char)arg1 ;
@end

