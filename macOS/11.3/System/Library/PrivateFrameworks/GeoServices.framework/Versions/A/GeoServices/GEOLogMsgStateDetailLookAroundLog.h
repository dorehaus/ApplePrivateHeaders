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

@class PBDataReader, NSMutableArray;

@interface GEOLogMsgStateDetailLookAroundLog : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _durationSec;
	NSMutableArray* _lookAroundPipRecords;
	NSMutableArray* _lookAroundViewRecords;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _poisShown;
	struct {
		unsigned has_durationSec : 1;
		unsigned has_poisShown : 1;
		unsigned read_lookAroundPipRecords : 1;
		unsigned read_lookAroundViewRecords : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasDurationSec; 
@property (assign,nonatomic) double durationSec; 
@property (assign,nonatomic) char hasPoisShown; 
@property (assign,nonatomic) unsigned poisShown; 
@property (nonatomic,retain) NSMutableArray * lookAroundPipRecords; 
@property (nonatomic,retain) NSMutableArray * lookAroundViewRecords; 
+(char)isValid:(id)arg1 ;
+(Class)lookAroundPipRecordsType;
+(Class)lookAroundViewRecordsType;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(void)setDurationSec:(double)arg1 ;
-(void)setPoisShown:(unsigned)arg1 ;
-(void)addLookAroundPipRecords:(id)arg1 ;
-(void)addLookAroundViewRecords:(id)arg1 ;
-(unsigned long long)lookAroundPipRecordsCount;
-(void)clearLookAroundPipRecords;
-(id)lookAroundPipRecordsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lookAroundViewRecordsCount;
-(void)clearLookAroundViewRecords;
-(id)lookAroundViewRecordsAtIndex:(unsigned long long)arg1 ;
-(double)durationSec;
-(void)setHasDurationSec:(char)arg1 ;
-(char)hasDurationSec;
-(unsigned)poisShown;
-(void)setHasPoisShown:(char)arg1 ;
-(char)hasPoisShown;
-(NSMutableArray *)lookAroundPipRecords;
-(void)setLookAroundPipRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lookAroundViewRecords;
-(void)setLookAroundViewRecords:(NSMutableArray *)arg1 ;
@end
