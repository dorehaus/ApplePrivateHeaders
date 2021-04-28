/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAssetControllerObserver <NSObject>
@optional
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(char)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(char)arg5 expectedTimeRemaining:(double)arg6;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(char)arg3 error:(id)arg4 hasRemainingDownloads:(char)arg5;
-(void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(char)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 willUpdateCatalogForPolicy:(id)arg2;
-(void)assetController:(id)arg1 didUpdateCatalogForPolicy:(id)arg2 wasSuccessful:(char)arg3 error:(id)arg4;

@end
