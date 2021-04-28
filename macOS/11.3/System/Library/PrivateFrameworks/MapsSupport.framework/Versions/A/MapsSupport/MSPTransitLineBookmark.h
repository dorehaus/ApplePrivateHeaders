/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPTransitStorageLine;

@interface MSPTransitLineBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	MSPTransitStorageLine* _transitLineStorage;

}

@property (nonatomic,readonly) char hasTransitLineStorage; 
@property (nonatomic,retain) MSPTransitStorageLine * transitLineStorage;              //@synthesize transitLineStorage=_transitLineStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(MSPTransitStorageLine *)transitLineStorage;
-(void)setTransitLineStorage:(MSPTransitStorageLine *)arg1 ;
-(char)hasTransitLineStorage;
@end
