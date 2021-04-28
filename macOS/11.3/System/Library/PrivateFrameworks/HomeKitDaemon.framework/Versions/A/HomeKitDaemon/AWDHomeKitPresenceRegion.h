/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceRegion : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numPresenceAuthUsers;
	unsigned _numPresenceRegionValidUsers;
	unsigned _numUsers;
	char _primaryResident;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNumUsers; 
@property (assign,nonatomic) unsigned numUsers;                                 //@synthesize numUsers=_numUsers - In the implementation block
@property (assign,nonatomic) char hasNumPresenceAuthUsers; 
@property (assign,nonatomic) unsigned numPresenceAuthUsers;                     //@synthesize numPresenceAuthUsers=_numPresenceAuthUsers - In the implementation block
@property (assign,nonatomic) char hasNumPresenceRegionValidUsers; 
@property (assign,nonatomic) unsigned numPresenceRegionValidUsers;              //@synthesize numPresenceRegionValidUsers=_numPresenceRegionValidUsers - In the implementation block
@property (assign,nonatomic) char hasPrimaryResident; 
@property (assign,nonatomic) char primaryResident;                              //@synthesize primaryResident=_primaryResident - In the implementation block
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
-(void)setNumUsers:(unsigned)arg1 ;
-(void)setNumPresenceAuthUsers:(unsigned)arg1 ;
-(void)setNumPresenceRegionValidUsers:(unsigned)arg1 ;
-(unsigned)numPresenceAuthUsers;
-(unsigned)numPresenceRegionValidUsers;
-(void)setPrimaryResident:(char)arg1 ;
-(void)setHasNumUsers:(char)arg1 ;
-(char)hasNumUsers;
-(void)setHasNumPresenceAuthUsers:(char)arg1 ;
-(char)hasNumPresenceAuthUsers;
-(void)setHasNumPresenceRegionValidUsers:(char)arg1 ;
-(char)hasNumPresenceRegionValidUsers;
-(void)setHasPrimaryResident:(char)arg1 ;
-(char)hasPrimaryResident;
-(unsigned)numUsers;
-(char)primaryResident;
@end

