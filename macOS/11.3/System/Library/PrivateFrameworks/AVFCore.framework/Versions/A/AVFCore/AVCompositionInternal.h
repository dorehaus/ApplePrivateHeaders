/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVDispatchOnce, AVAssetInspectorLoader, AVAssetInspector, NSDictionary, NSMutableArray;

@interface AVCompositionInternal : NSObject {

	OpaqueFigMutableCompositionRef mutableComposition;
	AVDispatchOnce* formatReaderInitializationOnce;
	AVDispatchOnce* assetInspectorInitializationOnce;
	AVDispatchOnce* tracksInitializationOnce;
	OpaqueFigFormatReaderRef formatReader;
	AVAssetInspectorLoader* assetInspectorLoader;
	AVAssetInspector* assetInspector;
	CGSize naturalSize;
	NSDictionary* URLAssetInitializationOptions;
	NSMutableArray* tracks;
	AVDispatchOnce* figAssetInitializationOnce;
	OpaqueFigAssetRef figAsset;

}
@end
