/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {

	CPLTransaction* _dirty;
	/*^block*/id _block;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id block;                          //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(id)block;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setBlock:(id)arg1 ;
-(void)_releaseDirty;
@end

