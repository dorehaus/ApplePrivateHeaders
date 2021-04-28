/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPShareIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _value;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) char hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPIdentifier *)value;
-(id)dictionaryRepresentation;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasValue;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(char)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
@end

