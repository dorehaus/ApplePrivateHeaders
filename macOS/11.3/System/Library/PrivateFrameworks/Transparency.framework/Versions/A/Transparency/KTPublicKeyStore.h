/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KTApplicationPublicKeyStore, NSMutableDictionary, NSArray, NSDictionary;

@interface KTPublicKeyStore : NSObject {

	char _forceRefresh;
	KTApplicationPublicKeyStore* _tltKeyStore;
	NSMutableDictionary* __applicationKeyStores;
	NSArray* _applications;

}

@property (retain) NSMutableDictionary * _applicationKeyStores;              //@synthesize _applicationKeyStores=__applicationKeyStores - In the implementation block
@property (retain) NSArray * applications;                                   //@synthesize applications=_applications - In the implementation block
@property (retain) KTApplicationPublicKeyStore * tltKeyStore;                //@synthesize tltKeyStore=_tltKeyStore - In the implementation block
@property (assign) char forceRefresh;                                        //@synthesize forceRefresh=_forceRefresh - In the implementation block
@property (readonly) char ready; 
@property (readonly) NSDictionary * applicationKeyStores; 
-(char)ready;
-(NSArray *)applications;
-(char)forceRefresh;
-(void)setApplications:(NSArray *)arg1 ;
-(id)initWithDataStore:(id)arg1 ;
-(void)setForceRefresh:(char)arg1 ;
-(void)configureWithClient:(id)arg1 ignoreCachedKeys:(char)arg2 dataStore:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)applicationKeyStores;
-(KTApplicationPublicKeyStore *)tltKeyStore;
-(void)clearApplicationState:(id)arg1 error:(id*)arg2 ;
-(void)setTltKeyStore:(KTApplicationPublicKeyStore *)arg1 ;
-(id)copyKeyStoreState;
-(NSMutableDictionary *)_applicationKeyStores;
-(id)copyMetadata;
-(id)readPublicKeyStoreFromDisk:(id*)arg1 ;
-(char)writePublicKeyStoreToDisk:(id)arg1 error:(id*)arg2 ;
-(id)createApplicationKeyStore:(id)arg1 keyStoreResponse:(id)arg2 dataStore:(id)arg3 error:(id*)arg4 ;
-(void)updateTLTKeyStoreWithApplicationKeyStore:(id)arg1 ;
-(char)saveDiskApplicationKeyStore:(id)arg1 error:(id*)arg2 ;
-(char)configureWithDisk:(id)arg1 error:(id*)arg2 ;
-(void)fetchKeyStore:(id)arg1 application:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createApplicationKeyStore:(id)arg1 keyStoreData:(id)arg2 dataStore:(id)arg3 error:(id*)arg4 ;
-(char)clearDiskApplicationKeyStore:(id)arg1 error:(id*)arg2 ;
-(void)set_applicationKeyStores:(NSMutableDictionary *)arg1 ;
-(char)hasApplicationPublicKeyStoreOnDisk:(id)arg1 error:(id*)arg2 ;
-(void)configureWithClient:(id)arg1 dataStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

