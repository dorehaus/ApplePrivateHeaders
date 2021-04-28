/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/ITMediaEntity.h>

@class ITMediaItem;

@interface ITMediaCollection : ITMediaEntity {

	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>>* _persistentIDSet;
	unsigned long long _representativeItemPersistentID;
	ITMediaItem* _representativeItem;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) ITMediaItem * representativeItem; 
-(unsigned long long)count;
-(void)addIdentifier:(unsigned long long)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(ITMediaItem *)representativeItem;
-(char)hasIdentifier:(unsigned long long)arg1 ;
-(void)enumerateMediaItemsUsingBlock:(/*^block*/id)arg1 ;
@end

