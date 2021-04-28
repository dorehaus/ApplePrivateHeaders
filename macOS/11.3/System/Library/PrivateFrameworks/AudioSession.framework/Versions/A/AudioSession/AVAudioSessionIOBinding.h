/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioSession, NSArray;

@interface AVAudioSessionIOBinding : NSObject <NSSecureCoding> {

	AVAudioSession* _session;
	NSArray* _streams;

}

@property (nonatomic,readonly) AVAudioSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSArray * streams;                     //@synthesize streams=_streams - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AVAudioSession *)session;
-(NSArray *)streams;
-(id)initWithSession:(id)arg1 streams:(id)arg2 error:(id*)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

