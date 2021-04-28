/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand {

	NSArray* _supportedShuffleTypes;
	long long _currentShuffleType;

}

@property (assign,nonatomic) long long currentShuffleType;              //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithType:(long long)arg1 ;
-(void)setCurrentShuffleType:(long long)arg1 ;
-(void)setSupportedShuffleTypes:(id)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(char)arg2 ;
-(long long)currentShuffleType;
@end

