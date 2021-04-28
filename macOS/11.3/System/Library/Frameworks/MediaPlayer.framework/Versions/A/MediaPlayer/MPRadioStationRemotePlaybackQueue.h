/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue {

	long long _stationID;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long stationID;                     //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(long long)stationID;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(char)verifyWithError:(id*)arg1 ;
-(NSString *)stationStringID;
@end
