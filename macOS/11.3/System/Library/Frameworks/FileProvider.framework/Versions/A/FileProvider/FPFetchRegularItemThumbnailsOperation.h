/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/FPOperationClient.h>

@protocol FPOperationProgressDelegate;
@class NSArray, FPItemManager;

@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient> {

	NSArray* _itemIDs;
	CGSize _desiredSizeToScale;
	FPItemManager* _itemManager;
	id<FPOperationProgressDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FPOperationProgressDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FPOperationProgressDelegate>)delegate;
-(void)setDelegate:(id<FPOperationProgressDelegate>)arg1 ;
-(void)main;
-(void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRegularItems:(id)arg1 desiredSizeToScale:(CGSize)arg2 itemManager:(id)arg3 ;
@end
