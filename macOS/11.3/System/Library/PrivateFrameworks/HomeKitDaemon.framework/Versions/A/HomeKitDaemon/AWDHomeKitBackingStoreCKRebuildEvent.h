/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _containerType;
	int _rebuildStatus;
	int _zoneType;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasRebuildStatus; 
@property (assign,nonatomic) int rebuildStatus;                         //@synthesize rebuildStatus=_rebuildStatus - In the implementation block
@property (assign,nonatomic) char hasContainerType; 
@property (assign,nonatomic) int containerType;                         //@synthesize containerType=_containerType - In the implementation block
@property (assign,nonatomic) char hasZoneType; 
@property (assign,nonatomic) int zoneType;                              //@synthesize zoneType=_zoneType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(int)zoneType;
-(int)containerType;
-(void)setContainerType:(int)arg1 ;
-(void)setHasContainerType:(char)arg1 ;
-(char)hasContainerType;
-(id)containerTypeAsString:(int)arg1 ;
-(int)StringAsContainerType:(id)arg1 ;
-(void)setZoneType:(int)arg1 ;
-(void)setHasZoneType:(char)arg1 ;
-(char)hasZoneType;
-(id)zoneTypeAsString:(int)arg1 ;
-(int)StringAsZoneType:(id)arg1 ;
-(int)rebuildStatus;
-(void)setRebuildStatus:(int)arg1 ;
-(void)setHasRebuildStatus:(char)arg1 ;
-(char)hasRebuildStatus;
-(id)rebuildStatusAsString:(int)arg1 ;
-(int)StringAsRebuildStatus:(id)arg1 ;
@end

