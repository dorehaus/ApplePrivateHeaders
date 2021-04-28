/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {

	AVWeakReference* _weakReferenceToAsset;
	int _trackID;

}
-(void)dealloc;
-(char)isEnabled;
-(CGSize)dimensions;
-(id)mediaType;
-(int)trackID;
-(SCD_Struct_CM5)timeRange;
-(CGSize)naturalSize;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)mediaCharacteristics;
-(unsigned)figMediaType;
@end
