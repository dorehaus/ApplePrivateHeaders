/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection;

@interface SSSoftwareLibrary : NSObject {

	SSXPCConnection* _connection;

}
-(id)init;
-(void)getLibraryItemForBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_sendDemotionMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getItemsWithMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)demoteApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getRemovableSytemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hasDemotedApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)isInstalledApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)playableApplicationsWithBundleIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)refreshReceiptsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)restoreAllDemotedApplicationsWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

