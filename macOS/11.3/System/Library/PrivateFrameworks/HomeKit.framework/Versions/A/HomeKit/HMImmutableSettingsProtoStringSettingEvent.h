/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMImmutableSettingsProtoStringValueEvent;

@interface HMImmutableSettingsProtoStringSettingEvent : PBCodable <NSCopying> {

	HMImmutableSettingsProtoStringValueEvent* _value;

}

@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) HMImmutableSettingsProtoStringValueEvent * value;              //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HMImmutableSettingsProtoStringValueEvent *)value;
-(id)dictionaryRepresentation;
-(void)setValue:(HMImmutableSettingsProtoStringValueEvent *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasValue;
@end

