/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _compactSpeeds;
	NSString* _feedId;
	unsigned long long _feedPublishTime;
	long long _feedUpdateTime;
	NSMutableArray* _incidents;
	NSMutableArray* _regions;
	NSString* _snapshotId;
	NSMutableArray* _speeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _trafficVersion;
	struct {
		unsigned has_feedPublishTime : 1;
		unsigned has_feedUpdateTime : 1;
		unsigned has_trafficVersion : 1;
		unsigned read_compactSpeeds : 1;
		unsigned read_feedId : 1;
		unsigned read_incidents : 1;
		unsigned read_regions : 1;
		unsigned read_snapshotId : 1;
		unsigned read_speeds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableArray * incidents; 
@property (nonatomic,retain) NSMutableArray * speeds; 
@property (assign,nonatomic) char hasFeedUpdateTime; 
@property (assign,nonatomic) long long feedUpdateTime; 
@property (nonatomic,readonly) char hasFeedId; 
@property (nonatomic,retain) NSString * feedId; 
@property (assign,nonatomic) char hasTrafficVersion; 
@property (assign,nonatomic) unsigned trafficVersion; 
@property (assign,nonatomic) char hasFeedPublishTime; 
@property (assign,nonatomic) unsigned long long feedPublishTime; 
@property (nonatomic,retain) NSMutableArray * compactSpeeds; 
@property (nonatomic,readonly) char hasSnapshotId; 
@property (nonatomic,retain) NSString * snapshotId; 
+(char)isValid:(id)arg1 ;
+(Class)regionType;
+(Class)incidentsType;
+(Class)speedsType;
+(Class)compactSpeedsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addRegion:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)regions;
-(void)clearRegions;
-(void)readAll:(char)arg1 ;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)feedId;
-(NSString *)snapshotId;
-(void)addIncidents:(id)arg1 ;
-(void)addSpeeds:(id)arg1 ;
-(void)setFeedUpdateTime:(long long)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(void)setTrafficVersion:(unsigned)arg1 ;
-(void)setFeedPublishTime:(unsigned long long)arg1 ;
-(void)addCompactSpeeds:(id)arg1 ;
-(void)setSnapshotId:(NSString *)arg1 ;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)speedsCount;
-(void)clearSpeeds;
-(id)speedsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)compactSpeedsCount;
-(void)clearCompactSpeeds;
-(id)compactSpeedsAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidents;
-(void)setIncidents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)speeds;
-(void)setSpeeds:(NSMutableArray *)arg1 ;
-(long long)feedUpdateTime;
-(void)setHasFeedUpdateTime:(char)arg1 ;
-(char)hasFeedUpdateTime;
-(char)hasFeedId;
-(unsigned)trafficVersion;
-(void)setHasTrafficVersion:(char)arg1 ;
-(char)hasTrafficVersion;
-(unsigned long long)feedPublishTime;
-(void)setHasFeedPublishTime:(char)arg1 ;
-(char)hasFeedPublishTime;
-(NSMutableArray *)compactSpeeds;
-(void)setCompactSpeeds:(NSMutableArray *)arg1 ;
-(char)hasSnapshotId;
@end

