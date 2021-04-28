/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, AVAudioMix, NSMutableDictionary, AVAudioOutputSettings, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject {

	NSArray* audioTracks;
	AVAudioMix* audioMix;
	NSMutableDictionary* audioVolumeCurvesForTracks;
	NSMutableDictionary* audioTimePitchAlgorithmsForTracks;
	NSMutableDictionary* audioTapProcessorsForTracks;
	AVAudioOutputSettings* audioOutputSettings;
	NSString* audioTimePitchAlgorithm;

}
@end

