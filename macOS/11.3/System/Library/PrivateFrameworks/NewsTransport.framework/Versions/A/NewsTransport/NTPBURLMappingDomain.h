/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying> {

	double _averageSafariVisitsPerDay;
	NSString* _domain;
	NSMutableArray* _paths;

}

@property (nonatomic,retain) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                        //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
+(Class)pathsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)domain;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSMutableArray *)paths;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)addPaths:(id)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
-(double)averageSafariVisitsPerDay;
@end

