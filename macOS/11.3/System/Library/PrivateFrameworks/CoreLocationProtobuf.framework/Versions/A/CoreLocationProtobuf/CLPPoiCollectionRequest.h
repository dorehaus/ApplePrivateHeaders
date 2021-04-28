/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/Versions/A/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _harvests;
	CLPMeta* _meta;

}

@property (nonatomic,retain) CLPMeta * meta;                         //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * harvests;              //@synthesize harvests=_harvests - In the implementation block
+(Class)harvestsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)addHarvests:(id)arg1 ;
-(unsigned long long)harvestsCount;
-(void)clearHarvests;
-(id)harvestsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)harvests;
-(void)setHarvests:(NSMutableArray *)arg1 ;
@end

