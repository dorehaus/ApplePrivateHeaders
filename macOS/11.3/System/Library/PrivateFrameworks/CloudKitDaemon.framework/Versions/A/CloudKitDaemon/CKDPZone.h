/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPProtectionInfo, NSMutableArray, CKDPShareIdentifier, CKDPRecordStableUrl, CKDPRecordZoneIdentifier;

@interface CKDPZone : PBCodable <NSCopying> {

	CKDPProtectionInfo* _protectionInfo;
	NSMutableArray* _protectionInfoKeysToRemoves;
	CKDPProtectionInfo* _recordProtectionInfo;
	CKDPShareIdentifier* _shareId;
	CKDPRecordStableUrl* _stableUrl;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) char hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                 //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) char hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                       //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) char hasRecordProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * recordProtectionInfo;                 //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) char hasStableUrl; 
@property (nonatomic,retain) CKDPRecordStableUrl * stableUrl;                           //@synthesize stableUrl=_stableUrl - In the implementation block
@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                             //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,retain) NSMutableArray * protectionInfoKeysToRemoves;              //@synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves - In the implementation block
+(Class)protectionInfoKeysToRemoveType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(char)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(void)setRecordProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(char)hasRecordProtectionInfo;
-(CKDPProtectionInfo *)recordProtectionInfo;
-(char)hasProtectionInfo;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)addProtectionInfoKeysToRemove:(id)arg1 ;
-(void)setStableUrl:(CKDPRecordStableUrl *)arg1 ;
-(unsigned long long)protectionInfoKeysToRemovesCount;
-(void)clearProtectionInfoKeysToRemoves;
-(id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1 ;
-(char)hasStableUrl;
-(char)hasShareId;
-(CKDPRecordStableUrl *)stableUrl;
-(CKDPShareIdentifier *)shareId;
-(NSMutableArray *)protectionInfoKeysToRemoves;
-(void)setProtectionInfoKeysToRemoves:(NSMutableArray *)arg1 ;
@end

