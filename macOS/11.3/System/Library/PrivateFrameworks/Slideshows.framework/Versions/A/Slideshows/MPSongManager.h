/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : NSObject {

	NSMutableDictionary* mSongDescriptions;
	NSMutableDictionary* mSongBeats;
	NSMutableDictionary* mSongMetaData;
	NSString* mSongCacheFilePath;
	NSRecursiveLock* mSongLock;
	void* mDaFunc;

}
+(id)sharedManager;
+(void)releaseSharedManager;
-(void)dealloc;
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(id)cachedBeatsForSongAtPath:(id)arg1 ;
-(id)beatsForSongAtPath:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)descriptionForSongAtPath:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)qt32Server;
-(id)descriptionForSongsAtPaths:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(char)hasBeatsForSongAtPath:(id)arg1 ;
-(short)copyWaveformForSongAtPath:(id)arg1 withFormat:(const AudioStreamBasicDescription*)arg2 samples:(void*)arg3 numberOfFrames:(long long*)arg4 ;
-(id)songMetadataForPath:(id)arg1 ;
-(void)storeBeats:(id)arg1 forPath:(id)arg2 ;
@end

