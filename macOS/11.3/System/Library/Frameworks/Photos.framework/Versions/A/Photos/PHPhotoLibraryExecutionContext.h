/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHPhotoLibraryExecutionContext <NSObject>
@required
-(void)dispatchOnQueue:(id)arg1 block:(/*^block*/id)arg2;
-(void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(/*^block*/id)arg3;
-(void)callTransactionCompletionHandler:(/*^block*/id)arg1 withSuccess:(char)arg2 error:(id)arg3;

@end

