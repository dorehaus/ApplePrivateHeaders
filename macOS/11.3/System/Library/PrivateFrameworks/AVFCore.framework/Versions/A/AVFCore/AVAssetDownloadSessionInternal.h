/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, NSObject, NSError, AVWeakReferencingDelegateStorage, NSArray, NSURL, NSNumber, AVURLAsset;

@interface AVAssetDownloadSessionInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef player;
	OpaqueFigPlaybackItemRef playbackItem;
	OpaqueFigAssetRef figAsset;
	NSObject*<OS_dispatch_queue> readWriteQueue;
	long long assetTypeLoadingStatus;
	long long status;
	char didStartLoadingMetadata;
	NSError* error;
	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> figCallbackQueue;
	NSArray* mediaSelections;
	long long priority;
	NSURL* URL;
	NSURL* destinationURL;
	unsigned long long downloadToken;
	NSNumber* cachePrimingDownloadTokenNum;
	AVURLAsset* asset;
	CMBaseObjectRef assetDownloader;

}
@end

