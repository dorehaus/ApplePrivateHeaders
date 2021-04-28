/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPSatelliteInfo : PBCodable <NSCopying> {

	SCD_Struct_CL6* _azimuths;
	SCD_Struct_CL6* _cnos;
	SCD_Struct_CL6* _elevations;
	SCD_Struct_CL16* _isUsedInFixes;
	SCD_Struct_CL6* _satIds;

}

@property (nonatomic,readonly) unsigned long long satIdsCount; 
@property (nonatomic,readonly) int* satIds; 
@property (nonatomic,readonly) unsigned long long cnosCount; 
@property (nonatomic,readonly) int* cnos; 
@property (nonatomic,readonly) unsigned long long azimuthsCount; 
@property (nonatomic,readonly) int* azimuths; 
@property (nonatomic,readonly) unsigned long long elevationsCount; 
@property (nonatomic,readonly) int* elevations; 
@property (nonatomic,readonly) unsigned long long isUsedInFixesCount; 
@property (nonatomic,readonly) char* isUsedInFixes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)satIdsCount;
-(void)clearSatIds;
-(int)satIdsAtIndex:(unsigned long long)arg1 ;
-(void)addSatIds:(int)arg1 ;
-(unsigned long long)cnosCount;
-(void)clearCnos;
-(int)cnosAtIndex:(unsigned long long)arg1 ;
-(void)addCnos:(int)arg1 ;
-(unsigned long long)azimuthsCount;
-(void)clearAzimuths;
-(int)azimuthsAtIndex:(unsigned long long)arg1 ;
-(void)addAzimuths:(int)arg1 ;
-(unsigned long long)elevationsCount;
-(void)clearElevations;
-(int)elevationsAtIndex:(unsigned long long)arg1 ;
-(void)addElevations:(int)arg1 ;
-(unsigned long long)isUsedInFixesCount;
-(void)clearIsUsedInFixes;
-(char)isUsedInFixesAtIndex:(unsigned long long)arg1 ;
-(void)addIsUsedInFixes:(char)arg1 ;
-(int*)satIds;
-(void)setSatIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)cnos;
-(void)setCnos:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)azimuths;
-(void)setAzimuths:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)elevations;
-(void)setElevations:(int*)arg1 count:(unsigned long long)arg2 ;
-(char*)isUsedInFixes;
-(void)setIsUsedInFixes:(char*)arg1 count:(unsigned long long)arg2 ;
@end

