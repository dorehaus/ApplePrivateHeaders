/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {

	CKDPDate* _lastMissingManateeIdentityErrorDate;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	char _userPurge;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                   //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) char hasUserPurge; 
@property (assign,nonatomic) char userPurge;                                              //@synthesize userPurge=_userPurge - In the implementation block
@property (nonatomic,readonly) char hasLastMissingManateeIdentityErrorDate; 
@property (nonatomic,retain) CKDPDate * lastMissingManateeIdentityErrorDate;              //@synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate - In the implementation block
+(id)options;
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
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(char)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setLastMissingManateeIdentityErrorDate:(CKDPDate *)arg1 ;
-(void)setUserPurge:(char)arg1 ;
-(void)setHasUserPurge:(char)arg1 ;
-(char)hasUserPurge;
-(char)hasLastMissingManateeIdentityErrorDate;
-(char)userPurge;
-(CKDPDate *)lastMissingManateeIdentityErrorDate;
@end
