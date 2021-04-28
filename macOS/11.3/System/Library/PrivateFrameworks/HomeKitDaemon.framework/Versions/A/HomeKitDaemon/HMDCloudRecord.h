/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSString, HMDCloudZone, CKRecordID, NSData, CKRecord;

@interface HMDCloudRecord : HMFObject {

	char _decryptionFailed;
	char _encryptionFailed;
	char _controllerIdentifierChanged;
	char _recordCreated;
	NSUUID* _objectID;
	NSString* _recordName;
	HMDCloudZone* _cloudZone;
	CKRecordID* _recordID;
	NSData* _cachedData;
	CKRecord* _record;

}

@property (nonatomic,retain) NSUUID * objectID;                                        //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) char decryptionFailed;                                    //@synthesize decryptionFailed=_decryptionFailed - In the implementation block
@property (assign,nonatomic) char encryptionFailed;                                    //@synthesize encryptionFailed=_encryptionFailed - In the implementation block
@property (assign,nonatomic) char controllerIdentifierChanged;                         //@synthesize controllerIdentifierChanged=_controllerIdentifierChanged - In the implementation block
@property (nonatomic,readonly) NSString * recordType; 
@property (nonatomic,readonly) NSString * recordName;                                  //@synthesize recordName=_recordName - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                          //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                                      //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) CKRecord * record;                                        //@synthesize record=_record - In the implementation block
@property (getter=isRecordCreated,nonatomic,readonly) char recordCreated;              //@synthesize recordCreated=_recordCreated - In the implementation block
@property (getter=isRecordCached,nonatomic,readonly) char recordCached; 
@property (readonly) unsigned long long objectEncoding; 
+(id)shortDescription;
+(id)logCategory;
-(id)description;
-(id)init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)recordName;
-(NSUUID *)objectID;
-(id)shortDescription;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(void)setObjectID:(NSUUID *)arg1 ;
-(void)clearData;
-(HMDCloudZone *)cloudZone;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(id)extractObjectChange;
-(char)decryptionFailed;
-(void)setDecryptionFailed:(char)arg1 ;
-(char)encryptionFailed;
-(void)setEncryptionFailed:(char)arg1 ;
-(char)controllerIdentifierChanged;
-(void)setControllerIdentifierChanged:(char)arg1 ;
-(id)initWithObjectID:(id)arg1 recordName:(id)arg2 cloudZone:(id)arg3 ;
-(char)isRecordCreated;
-(unsigned long long)objectEncoding;
-(char)encodeObjectChange:(id)arg1 ;
-(char)isRecordCached;
@end

