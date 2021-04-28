/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDPersistentStore.h>

@protocol HMDPersistentStore <NSObject>
@required
+(id)unarchiveBulletinBoard;
+(void)archiveBulletinBoard:(id)arg1;

@end


@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeTransactionJournal;
+(id)unarchiveHomeData:(id*)arg1 decryptionFailed:(char*)arg2 ;
+(void)resetConfiguration;
+(id)loadBuiltinPlainMetadataDictionary;
+(id)loadPlainMetadataDictionary;
+(char)archiveMetadata:(id)arg1 ;
+(id)unarchiveBulletinBoard;
+(void)archiveBulletinBoard:(id)arg1 ;
+(id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long*)arg2 deleteExtraKeys:(char)arg3 allowControllerIdentifierToChange:(char)arg4 controllerIdentifierChanged:(char*)arg5 successfulKeyUserName:(id*)arg6 error:(id*)arg7 ;
+(id)archiveCloudServerTokenData:(id)arg1 ;
+(char)deserializeHomeData:(id*)arg1 localStorage:(char)arg2 fromData:(id)arg3 ;
+(id)serializeHomeData:(id)arg1 localStorage:(char)arg2 remoteDeviceOnSameAccount:(char)arg3 ;
+(id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2 ;
+(id)decryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(id)encryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(char)writeDictionary:(id)arg1 toStorePath:(id)arg2 ;
+(id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(void)cleanupKeysInStore;
+(void)resetMetadata;
+(id)archiveHomeData:(id)arg1 ;
+(void)archiveVendorStore:(id)arg1 ;
+(id)unarchiveVendorStore;
+(id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id*)arg2 ;
+(id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3 ;
+(void)removeServerTokenDataFile;
+(id)archiveIDSDataSyncJournal:(id)arg1 ;
+(id)unarchiveIDSDataSyncJournal;
+(id)archiveDataStoreWithPath:(id)arg1 serializedData:(id)arg2 forKey:(id)arg3 ;
+(id)unarchiveDataStoreWithPath:(id)arg1 forKey:(id)arg2 ;
@end

