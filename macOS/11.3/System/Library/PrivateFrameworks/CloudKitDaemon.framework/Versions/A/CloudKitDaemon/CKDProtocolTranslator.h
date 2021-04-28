/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDProtocolTranslatorIdentityDelegate;
@class NSString, NSMutableDictionary, CKDPIdentifier;

@interface CKDProtocolTranslator : NSObject {

	char _dontCreateValidatingParentReferences;
	NSString* _packageStagingDirectory;
	NSString* _orgAdminUserID;
	long long _databaseScope;
	id<CKDProtocolTranslatorIdentityDelegate> _identityDelegate;
	NSString* _containerScopedUserID;
	NSString* _overriddenContainerScopedUserID;
	NSMutableDictionary* _downloadPreauthorizationMap;

}

@property (nonatomic,copy) NSString * containerScopedUserID;                                                 //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,copy) NSString * overriddenContainerScopedUserID;                                       //@synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID - In the implementation block
@property (nonatomic,copy) NSString * orgAdminUserID;                                                        //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (nonatomic,copy) NSString * packageStagingDirectory;                                               //@synthesize packageStagingDirectory=_packageStagingDirectory - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadPreauthorizationMap;                              //@synthesize downloadPreauthorizationMap=_downloadPreauthorizationMap - In the implementation block
@property (assign,nonatomic) char dontCreateValidatingParentReferences;                                      //@synthesize dontCreateValidatingParentReferences=_dontCreateValidatingParentReferences - In the implementation block
@property (nonatomic,readonly) CKDPIdentifier * pUserID; 
@property (nonatomic,readonly) long long databaseScope;                                                      //@synthesize databaseScope=_databaseScope - In the implementation block
@property (assign,nonatomic,__weak) id<CKDProtocolTranslatorIdentityDelegate> identityDelegate;              //@synthesize identityDelegate=_identityDelegate - In the implementation block
+(id)translatorIgnoringUserIDsWithPackageStagingDirectory:(id)arg1 databaseScope:(long long)arg2 ;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
-(NSString *)containerScopedUserID;
-(NSString *)orgAdminUserID;
-(long long)databaseScope;
-(id)recordFromPRecord:(id)arg1 error:(id*)arg2 ;
-(id)pRecordFromRecord:(id)arg1 forCache:(char)arg2 ;
-(id)pQueryFromQuery:(id)arg1 error:(id*)arg2 ;
-(id)throttleFromPThrottlingConfig:(id)arg1 ;
-(void)consumeResponseHeader:(id)arg1 ;
-(id)initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 packageStagingDirectory:(id)arg3 databaseScope:(long long)arg4 ;
-(void)setIdentityDelegate:(id<CKDProtocolTranslatorIdentityDelegate>)arg1 ;
-(void)setDontCreateValidatingParentReferences:(char)arg1 ;
-(id)pRecordIdentifierFromRecordID:(id)arg1 ;
-(id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg1 ;
-(id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1 ;
-(int)fieldValueTypeFromEncryptedDataObject:(id)arg1 isInList:(char)arg2 ;
-(int)fieldValueTypeFromObject:(id)arg1 ;
-(char)objectIsAnEncryptedType:(id)arg1 ;
-(id)encryptedFieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 forCache:(char)arg3 ;
-(id)fieldValueFromObject:(id)arg1 forCache:(char)arg2 ;
-(id)fieldValueFromObject:(id)arg1 ;
-(id)pReferenceFromReference:(id)arg1 error:(id*)arg2 ;
-(id)pAssetFromAsset:(id)arg1 ;
-(id)pPackageFromPackage:(id)arg1 ;
-(id)pStreamingAssetFromStreamingAsset:(id)arg1 forCache:(char)arg2 ;
-(id)encryptedObjectRepresentationFromFieldValue:(id)arg1 ;
-(id)objectRepresentationFromFieldValue:(id)arg1 ;
-(id)referenceFromPReference:(id)arg1 error:(id*)arg2 ;
-(id)assetFromPAsset:(id)arg1 error:(id*)arg2 ;
-(id)packageFromPPackage:(id)arg1 error:(id*)arg2 ;
-(id)streamingAssetFromPStreamingAsset:(id)arg1 error:(id*)arg2 ;
-(id)pFieldActionWithLocation:(long long)arg1 length:(unsigned long long)arg2 values:(id)arg3 ;
-(id)pFieldWithKey:(id)arg1 value:(id)arg2 forCache:(char)arg3 ;
-(id)fieldValueOfType:(int)arg1 withObject:(id)arg2 ;
-(id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)pFieldWithKey:(id)arg1 value:(id)arg2 ;
-(id)pShareIdentifierFromRecordID:(id)arg1 ;
-(void)setOverriddenContainerScopedUserID:(NSString *)arg1 ;
-(id)shareParticipantFromPParticipant:(id)arg1 error:(id*)arg2 ;
-(id)recordZoneFromPRecordZone:(id)arg1 error:(id*)arg2 ;
-(id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2 ;
-(id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2 ;
-(id)pRecordZoneFromRecordZone:(id)arg1 ;
-(id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1 ;
-(id)pRecordFromRecord:(id)arg1 ;
-(id)pAliasWithIdentityLookupInfo:(id)arg1 ;
-(id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)notificationFromPPushMessage:(id)arg1 ;
-(id)shareFromPShare:(id)arg1 error:(id*)arg2 ;
-(id)initWithPackageStagingDirectory:(id)arg1 databaseScope:(long long)arg2 ;
-(id)deltaPRecordFromRecord:(id)arg1 withAllFields:(char)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4 ;
-(id)_initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 packageStagingDirectory:(id)arg3 databaseScope:(long long)arg4 ;
-(NSString *)overriddenContainerScopedUserID;
-(char)_isDefaultUserNameFromServer:(id)arg1 ;
-(char)_isDefaultUserNameFromClient:(id)arg1 ;
-(id)pRecordIdentifierFromUserRecordName:(id)arg1 ;
-(id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg1 ;
-(id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)pUserIdentifierFromUserRecordName:(id)arg1 ;
-(id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg1 ;
-(id)recordIDFromPUserName:(id)arg1 error:(id*)arg2 ;
-(id)recordIDFromPShareIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg1 ;
-(id)pIdentifierFromUserRecordID:(id)arg1 ;
-(id)pShareFromShare:(id)arg1 forCache:(char)arg2 ;
-(char)dontCreateValidatingParentReferences;
-(id)_pRecordFromRecordSansValues:(id)arg1 forCache:(char)arg2 ;
-(NSString *)packageStagingDirectory;
-(id)pParticipantFromShareParticipant:(id)arg1 forCache:(char)arg2 ;
-(id<CKDProtocolTranslatorIdentityDelegate>)identityDelegate;
-(id)pAliasWithEmailAddress:(id)arg1 ;
-(id)pAliasWithUserRecordID:(id)arg1 ;
-(id)pAliasWithPhoneNumber:(id)arg1 ;
-(id)pAliasWithHashedStringID:(id)arg1 type:(int)arg2 ;
-(CKDPIdentifier *)pUserID;
-(unsigned long long)capabilitiesFromPZoneCapabilities:(id)arg1 ;
-(id)identityFromPUser:(id)arg1 ;
-(void)setPackageStagingDirectory:(NSString *)arg1 ;
-(NSMutableDictionary *)downloadPreauthorizationMap;
-(void)setDownloadPreauthorizationMap:(NSMutableDictionary *)arg1 ;
@end

