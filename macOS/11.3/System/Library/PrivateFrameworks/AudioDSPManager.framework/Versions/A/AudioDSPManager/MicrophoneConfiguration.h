/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioMicrophoneConfiguration.h>

@class NSString, AVAudioFormat;

@interface MicrophoneConfiguration : NSObject <AVAudioMicrophoneConfiguration> {

	NSString* _name;
	NSString* _location;
	NSString* _orientation;
	NSString* _polarPattern;
	AVAudioFormat* _format;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * orientation;                //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSString * polarPattern;               //@synthesize polarPattern=_polarPattern - In the implementation block
@property (nonatomic,retain) AVAudioFormat * format;                //@synthesize format=_format - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setOrientation:(NSString *)arg1 ;
-(NSString *)location;
-(AVAudioFormat *)format;
-(void)setFormat:(AVAudioFormat *)arg1 ;
-(NSString *)orientation;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)polarPattern;
-(id)initWithName:(id)arg1 location:(id)arg2 orientation:(id)arg3 polarPattern:(id)arg4 channelCount:(int)arg5 ;
-(void)setPolarPattern:(NSString *)arg1 ;
@end
