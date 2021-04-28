/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSNumber, MPPlaybackArchive, HMFUnfairLock, NSUUID, NSString;

@interface HMMediaPlaybackAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {

	NSSet* _mediaProfiles;
	long long _state;
	NSNumber* _volume;
	MPPlaybackArchive* _playbackArchive;
	HMFUnfairLock* _lock;

}

@property (nonatomic,copy) NSSet * mediaProfiles;                              //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (assign,nonatomic) long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSNumber * volume;                                  //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;              //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(char)isSupportedForHome:(id)arg1 ;
+(id)mediaPlaybackActionWithProtoBuf:(id)arg1 home:(id)arg2 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(unsigned long long)type;
-(NSNumber *)volume;
-(void)setState:(long long)arg1 ;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(char)_handleUpdates:(id)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(id)_serializeForAdd;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)encodeAsProtoBuf;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 uuid:(id)arg5 ;
-(NSSet *)mediaProfiles;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(id)initWithPlaybackAction:(id)arg1 uuid:(id)arg2 ;
-(void)_updateWithAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_updateWithSerializedAction:(id)arg1 home:(id)arg2 ;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(long long)arg2 volume:(id)arg3 playbackArchive:(id)arg4 ;
-(id)accessoryProfiles;
-(void)updateWithAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

