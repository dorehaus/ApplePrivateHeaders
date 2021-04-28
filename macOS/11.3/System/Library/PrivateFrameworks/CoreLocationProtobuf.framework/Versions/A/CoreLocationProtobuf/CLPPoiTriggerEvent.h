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

@interface CLPPoiTriggerEvent : PBCodable <NSCopying> {

	unsigned long long _muid;
	double _triggerTimestamp;
	int _providerIdentifier;
	int _triggerSubType;
	int _triggerType;
	SCD_Struct_CL2 _has;

}

@property (assign,nonatomic) unsigned long long muid;                 //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) char hasProviderIdentifier; 
@property (assign,nonatomic) int providerIdentifier;                  //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (assign,nonatomic) char hasTriggerType; 
@property (assign,nonatomic) int triggerType;                         //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) char hasTriggerTimestamp; 
@property (assign,nonatomic) double triggerTimestamp;                 //@synthesize triggerTimestamp=_triggerTimestamp - In the implementation block
@property (assign,nonatomic) char hasTriggerSubType; 
@property (assign,nonatomic) int triggerSubType;                      //@synthesize triggerSubType=_triggerSubType - In the implementation block
+(int)subType:(unsigned long long)arg1 ;
+(unsigned long long)mapItemSource:(int)arg1 ;
-(id)description;
-(id)initWithMapItem:(id)arg1 date:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)providerIdentifier;
-(id)dictionaryRepresentation;
-(void)setProviderIdentifier:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setTriggerTimestamp:(double)arg1 ;
-(void)setTriggerType:(int)arg1 ;
-(void)setTriggerSubType:(int)arg1 ;
-(double)triggerTimestamp;
-(int)triggerType;
-(int)triggerSubType;
-(void)setHasTriggerType:(char)arg1 ;
-(char)hasTriggerType;
-(void)setHasProviderIdentifier:(char)arg1 ;
-(char)hasProviderIdentifier;
-(id)triggerTypeAsString:(int)arg1 ;
-(int)StringAsTriggerType:(id)arg1 ;
-(void)setHasTriggerTimestamp:(char)arg1 ;
-(char)hasTriggerTimestamp;
-(void)setHasTriggerSubType:(char)arg1 ;
-(char)hasTriggerSubType;
@end

