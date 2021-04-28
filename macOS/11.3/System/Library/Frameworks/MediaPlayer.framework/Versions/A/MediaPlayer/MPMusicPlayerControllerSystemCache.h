/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, MPMusicPlayerControllerNowPlaying, MPMusicPlayerQueueDescriptor;

@interface MPMusicPlayerControllerSystemCache : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) MPMusicPlayerControllerNowPlaying * nowPlaying; 
@property (nonatomic,retain) MPMusicPlayerQueueDescriptor * queueDescriptor; 
@property (nonatomic,readonly) char hasCachedData; 
+(id)sharedCache;
-(id)_init;
-(void)clearCache;
-(MPMusicPlayerControllerNowPlaying *)nowPlaying;
-(void)setNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(char)hasCachedData;
-(MPMusicPlayerQueueDescriptor *)queueDescriptor;
-(void)setQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)_saveObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
@end
