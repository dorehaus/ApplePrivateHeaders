/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVFunctionBarTrackControlling <NSObject>
@property (readonly) char hasEnabledAudio; 
@property (readonly) char hasEnabledVideo; 
@required
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(CGSize)arg2 requestType:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestTypeLegacy:(long long)arg1;

@end

