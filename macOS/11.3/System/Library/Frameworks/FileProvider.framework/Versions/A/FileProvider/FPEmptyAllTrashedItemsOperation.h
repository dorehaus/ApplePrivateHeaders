/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>
#import <libobjc.A.dylib/FPItemCollectionDelegate.h>

@class NSString;

@interface FPEmptyAllTrashedItemsOperation : FPActionOperation <FPItemCollectionDelegate> {

	char _gatheredItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)actionMain;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
@end

