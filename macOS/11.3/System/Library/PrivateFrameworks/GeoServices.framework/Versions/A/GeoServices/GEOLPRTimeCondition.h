/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOLPRTimeCondition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _dayOfMonths;
	SCD_Struct_GE86* _dayOfWeeks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) unsigned long long dayOfWeeksCount; 
@property (nonatomic,readonly) int* dayOfWeeks; 
@property (nonatomic,readonly) unsigned long long dayOfMonthsCount; 
@property (nonatomic,readonly) unsigned* dayOfMonths; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addDayOfWeek:(int)arg1 ;
-(void)addDayOfMonth:(unsigned)arg1 ;
-(unsigned long long)dayOfWeeksCount;
-(void)clearDayOfWeeks;
-(int)dayOfWeekAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dayOfMonthsCount;
-(void)clearDayOfMonths;
-(unsigned)dayOfMonthAtIndex:(unsigned long long)arg1 ;
-(int*)dayOfWeeks;
-(void)setDayOfWeeks:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)dayOfWeeksAsString:(int)arg1 ;
-(int)StringAsDayOfWeeks:(id)arg1 ;
-(unsigned*)dayOfMonths;
-(void)setDayOfMonths:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end
