/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, FPItemID, FPItem, NSObject, NSOperationQueue;

@interface FPArchiveOperation : FPActionOperation {

	NSArray* _items;
	FPItemID* _placeholderID;
	FPItem* _destinationFolder;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	/*^block*/id _archiveCompletionBlock;

}

@property (nonatomic,copy) id archiveCompletionBlock;              //@synthesize archiveCompletionBlock=_archiveCompletionBlock - In the implementation block
-(id)initWithItems:(id)arg1 destinationFolder:(id)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_copyArchivedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_coordinateArchivedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_zipPathExtension;
-(void)_archiveURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_prepareItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)archiveCompletionBlock;
-(void)setArchiveCompletionBlock:(id)arg1 ;
-(void)actionMain;
-(void)presendNotifications;
-(void)didUnarchiveItemAtURL:(id)arg1 ;
@end

