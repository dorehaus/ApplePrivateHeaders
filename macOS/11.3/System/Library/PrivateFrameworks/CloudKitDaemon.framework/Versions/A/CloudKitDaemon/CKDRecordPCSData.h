/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID, NSString, NSData, CKDZonePCSData, CKRecordZoneID, CKDSharePCSData, CKDChainPCSData, CKEncryptedData;

@interface CKDRecordPCSData : CKDPCSData <NSSecureCoding> {

	CKRecordID* _recordID;
	NSString* _recordType;
	CKRecordID* _parentID;
	CKDRecordPCSData* _parentPCSData;
	NSData* _chainParentPublicKeyID;
	CKDZonePCSData* _zonePCSData;
	CKRecordZoneID* _zoneID;
	NSData* _zoneishPublicKeyID;
	CKDSharePCSData* _sharePCSData;
	CKRecordID* _shareID;
	CKDChainPCSData* _chainPCSData;
	CKEncryptedData* _encryptedPublicSharingKey;

}

@property (nonatomic,retain) CKRecordID * recordID;                                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSString * recordType;                                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) CKRecordID * parentID;                                    //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) CKDRecordPCSData * parentPCSData;                         //@synthesize parentPCSData=_parentPCSData - In the implementation block
@property (nonatomic,retain) NSData * chainParentPublicKeyID;                          //@synthesize chainParentPublicKeyID=_chainParentPublicKeyID - In the implementation block
@property (nonatomic,retain) CKDZonePCSData * zonePCSData;                             //@synthesize zonePCSData=_zonePCSData - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                                  //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSData * zoneishPublicKeyID;                              //@synthesize zoneishPublicKeyID=_zoneishPublicKeyID - In the implementation block
@property (nonatomic,retain) CKDSharePCSData * sharePCSData;                           //@synthesize sharePCSData=_sharePCSData - In the implementation block
@property (nonatomic,retain) CKRecordID * shareID;                                     //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKDChainPCSData * chainPCSData;                           //@synthesize chainPCSData=_chainPCSData - In the implementation block
@property (nonatomic,retain) CKEncryptedData * encryptedPublicSharingKey;              //@synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey - In the implementation block
+(char)supportsSecureCoding;
+(id)dataWithRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)itemID;
-(CKRecordZoneID *)zoneID;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSData *)chainParentPublicKeyID;
-(void)setChainParentPublicKeyID:(NSData *)arg1 ;
-(CKEncryptedData *)encryptedPublicSharingKey;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(CKRecordID *)parentID;
-(void)setParentID:(CKRecordID *)arg1 ;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(CKDChainPCSData *)chainPCSData;
-(CKDZonePCSData *)zonePCSData;
-(NSData *)zoneishPublicKeyID;
-(void)setZonePCSData:(CKDZonePCSData *)arg1 ;
-(void)setPcs:(OpaquePCSShareProtectionRef)arg1 ;
-(CKDSharePCSData *)sharePCSData;
-(void)setParentPCSData:(CKDRecordPCSData *)arg1 ;
-(void)setChainPCSData:(CKDChainPCSData *)arg1 ;
-(void)setEncryptedPublicSharingKey:(CKEncryptedData *)arg1 ;
-(CKDRecordPCSData *)parentPCSData;
-(char)shouldEncodePCSData;
-(void)setZoneishPublicKeyID:(NSData *)arg1 ;
-(id)initWithPCSData:(id)arg1 recordID:(id)arg2 ;
@end

