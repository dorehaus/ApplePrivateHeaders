/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {

	NSHashTable* _mediaPlayers;

}
+(id)shared;
-(id)init;
-(char)releaseDecodingResourcesForInactivePlayers;
-(void)addMediaPlayer:(id)arg1 ;
-(void)removeMediaPlayer:(id)arg1 ;
-(void)mediaPlayer:(id)arg1 didChangePlayingState:(char)arg2 ;
-(void)mediaPlayer:(id)arg1 didChangeMutedState:(char)arg2 ;
-(void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1 ;
@end
