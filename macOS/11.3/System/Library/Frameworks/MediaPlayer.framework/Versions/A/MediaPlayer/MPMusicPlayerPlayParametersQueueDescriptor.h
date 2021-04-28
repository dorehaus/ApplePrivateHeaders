/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {

	NSArray* _playParametersQueue;
	MPMusicPlayerPlayParameters* _startItemPlayParameters;

}

@property (nonatomic,copy) NSArray * playParametersQueue;                                        //@synthesize playParametersQueue=_playParametersQueue - In the implementation block
@property (nonatomic,retain) MPMusicPlayerPlayParameters * startItemPlayParameters;              //@synthesize startItemPlayParameters=_startItemPlayParameters - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlayParametersQueue:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(NSArray *)playParametersQueue;
-(void)setPlayParametersQueue:(NSArray *)arg1 ;
-(MPMusicPlayerPlayParameters *)startItemPlayParameters;
-(void)setStartItemPlayParameters:(MPMusicPlayerPlayParameters *)arg1 ;
@end

