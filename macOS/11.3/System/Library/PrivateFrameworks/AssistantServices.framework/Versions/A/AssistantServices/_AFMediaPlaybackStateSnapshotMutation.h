/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMediaPlaybackStateSnapshotMutating.h>

@class AFMediaPlaybackStateSnapshot, NSDate, NSString;

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {

	AFMediaPlaybackStateSnapshot* _baseModel;
	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;
	struct {
		unsigned isDirty : 1;
		unsigned hasPlaybackState : 1;
		unsigned hasNowPlayingTimestamp : 1;
		unsigned hasMediaType : 1;
		unsigned hasGroupIdentifier : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(void)setPlaybackState:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setNowPlayingTimestamp:(id)arg1 ;
@end

