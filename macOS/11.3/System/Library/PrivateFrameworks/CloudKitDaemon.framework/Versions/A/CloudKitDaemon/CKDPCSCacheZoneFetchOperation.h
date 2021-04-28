/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordZoneID, CKDZonePCSData;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation {

	char _shouldCreateZoneishPCS;

}

@property (nonatomic,readonly) char needsZoneishPCS; 
@property (nonatomic,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,retain) CKDZonePCSData * zonePCSData; 
@property (assign,nonatomic) char shouldCreateZoneishPCS;               //@synthesize shouldCreateZoneishPCS=_shouldCreateZoneishPCS - In the implementation block
-(CKRecordZoneID *)zoneID;
-(CKDZonePCSData *)zonePCSData;
-(char)needsZoneishPCS;
-(void)_willRetryFetch;
-(void)setZonePCSData:(CKDZonePCSData *)arg1 ;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(void)_fetchDepedentPCSInSharedDatabase;
-(void)_saveZoneToServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveZoneToServer:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 zoneishPCS:(OpaquePCSShareProtectionRef)arg3 previousEtag:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_saveNewPCSOnDefaultZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldCreateZoneishPCS:(char)arg1 ;
-(void)_decryptZonePCSInSharedDatabase;
-(void)_decryptZonePCSUsingServiceIdentities;
-(void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2 ;
-(char)shouldCreateZoneishPCS;
-(id)itemTypeName;
-(char)hasAllPCSData;
-(char)_fetchPCSDataFromDatabase;
-(char)_fetchDependentPCS;
-(char)_fetchPCSDataFromServer;
-(char)_createAdditionalPCS;
-(char)_decryptPCS;
-(char)_saveUpdatedPCSToServer;
-(char)_savePCSDataToCache;
@end

