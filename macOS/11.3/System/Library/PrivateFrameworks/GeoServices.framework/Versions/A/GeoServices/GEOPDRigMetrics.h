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

@interface GEOPDRigMetrics : PBCodable <NSCopying> {

	SCD_Struct_GE17* _occlusionScores;

}

@property (nonatomic,readonly) unsigned long long occlusionScoresCount; 
@property (nonatomic,readonly) unsigned* occlusionScores; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addOcclusionScore:(unsigned)arg1 ;
-(unsigned long long)occlusionScoresCount;
-(void)clearOcclusionScores;
-(unsigned)occlusionScoreAtIndex:(unsigned long long)arg1 ;
-(unsigned*)occlusionScores;
-(void)setOcclusionScores:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

