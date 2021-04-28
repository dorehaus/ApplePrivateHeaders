/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOVLFCorrection;

@interface GEOVLFSuccessDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _inlierSuccessIndices;
	GEOVLFCorrection* _correction;
	double _poseConfidence;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_poseConfidence : 1;
		unsigned read_inlierSuccessIndices : 1;
		unsigned read_correction : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasCorrection; 
@property (nonatomic,retain) GEOVLFCorrection * correction; 
@property (assign,nonatomic) char hasPoseConfidence; 
@property (assign,nonatomic) double poseConfidence; 
@property (nonatomic,readonly) unsigned long long inlierSuccessIndicesCount; 
@property (nonatomic,readonly) unsigned* inlierSuccessIndices; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOVLFCorrection *)correction;
-(id)dictionaryRepresentation;
-(void)setCorrection:(GEOVLFCorrection *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setPoseConfidence:(double)arg1 ;
-(void)addInlierSuccessIndices:(unsigned)arg1 ;
-(unsigned long long)inlierSuccessIndicesCount;
-(void)clearInlierSuccessIndices;
-(unsigned)inlierSuccessIndicesAtIndex:(unsigned long long)arg1 ;
-(char)hasCorrection;
-(double)poseConfidence;
-(void)setHasPoseConfidence:(char)arg1 ;
-(char)hasPoseConfidence;
-(unsigned*)inlierSuccessIndices;
-(void)setInlierSuccessIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

