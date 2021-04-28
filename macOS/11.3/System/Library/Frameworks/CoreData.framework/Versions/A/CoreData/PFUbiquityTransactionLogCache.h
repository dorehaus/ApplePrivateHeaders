/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {

	NSString* _localPeerID;
	NSMutableDictionary* _transactionLogCache;
	NSRecursiveLock* _transactionLogCacheLock;
	PFUbiquityGlobalObjectIDCache* _gidCache;

}
-(void)cacheExportedLog:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2 ;
-(id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(char)arg2 error:(id*)arg3 ;
-(void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
