/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSDate, NSString;

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long playbackState;                        //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * nowPlayingTimestamp;              //@synthesize nowPlayingTimestamp=_nowPlayingTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)groupIdentifier;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)mediaType;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)playbackState;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDate *)nowPlayingTimestamp;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(id)ad_shortDescription;
-(id)serializedBackingStore;
-(id)initWithPlaybackState:(long long)arg1 nowPlayingTimestamp:(id)arg2 mediaType:(id)arg3 groupIdentifier:(id)arg4 ;
@end
