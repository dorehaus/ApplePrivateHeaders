/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PAImaging/PAImaging-Structs.h>
@class NSObject;

@interface PAEditSupport : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)newContentEditingRequestOptions:(id)arg1 ;
-(void)renderDescriptionForContentEditingInput:(id)arg1 adjustmentData:(id)arg2 asset:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)compositionForContentEditingInput:(id)arg1 asset:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_compositionForContentEditingInput:(id)arg1 editDescription:(id)arg2 error:(id*)arg3 ;
-(id)editSourceForContentEditingInput:(id)arg1 error:(id*)arg2 ;
-(id)editSourceForContentEditingInput:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(id)editSourceForContentEditingInput:(id)arg1 size:(CGSize)arg2 error:(id*)arg3 ;
-(void)originalRenderDescriptionForContentEditingInput:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)videoPlaybackSettingsForContentEditingInput:(id)arg1 adjustmentData:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)originalVideoPlaybackSettingsForContentEditingInput:(id)arg1 error:(id*)arg2 ;
-(void)shouldCommitRenderDescription:(id)arg1 forContentEditingInput:(id)arg2 assetContentEditingInput:(id)arg3 assetAdjustmentData:(id)arg4 asset:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)shouldCommitVideoPlaybackSettings:(id)arg1 forContentEditingInput:(id)arg2 assetContentEditingInput:(id)arg3 assetAdjustmentData:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)convertToAdjustmentData:(id)arg1 composition:(id)arg2 error:(id*)arg3 ;
-(void)didChangeVideoTrim:(id)arg1 forContentEditingInput:(id)arg2 assetContentEditingInput:(id)arg3 assetAdjustmentData:(id)arg4 asset:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)adjustmentStackForData:(id)arg1 error:(id*)arg2 ;
-(id)adjustmentEnvelopeForData:(id)arg1 error:(id*)arg2 ;
-(char)adjustmentEnvelopeContainsUnsupportedOperation:(id)arg1 ;
-(void)renderForOutput:(id)arg1 adjustments:(id)arg2 composition:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

