/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MEAudioSupport : NSObject
+(void)_addAudioPlaylistsFromPlug:(id)arg1 toComposition:(id)arg2 atTime:(double)arg3 forTotalDuration:(double)arg4 withID:(id)arg5 forExport:(char)arg6 fadingTimVols:(id)arg7 duckingTimVols:(id)arg8 assetManagementDelegate:(id)arg9 ;
+(id)_makeAVAudioMixForComposition:(id)arg1 withDuration:(double)arg2 andFadeOutDuration:(double)arg3 fadingInfos:(id)arg4 duckingInfos:(id)arg5 ;
+(id)_insertAudioTracksFromAsset:(id)arg1 toComposition:(id)arg2 atTime:(double)arg3 withSongStartTime:(double)arg4 songDuration:(double)arg5 ;
+(char)_getShowTime:(double*)arg1 andShowDuration:(double*)arg2 forPlug:(id)arg3 andSlideIndex:(unsigned long long)arg4 ;
+(id)compositionForExportForStartTime:(double)arg1 andDuration:(double)arg2 withDocument:(id)arg3 forExport:(char)arg4 audioMix:(id*)arg5 ;
@end

