/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
@class NSString, NSArray;

@interface SFSSCacheItem : NSObject {

	NSString* _key;
	NSString* _text;
	NSString* _voiceKey;
	NSString* _resourceKey;
	NSArray* _rawAudio;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * voiceKey;                           //@synthesize voiceKey=_voiceKey - In the implementation block
@property (nonatomic,readonly) NSString * resourceKey;                        //@synthesize resourceKey=_resourceKey - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) NSArray * rawAudio;                            //@synthesize rawAudio=_rawAudio - In the implementation block
+(id)generateCacheKey:(id)arg1 text:(id)arg2 ;
-(id)initWithText:(id)arg1 voiceName:(id)arg2 voiceKey:(id)arg3 resourceKey:(id)arg4 asbd:(AudioStreamBasicDescription)arg5 rawAudio:(id)arg6 ;
-(NSString *)voiceKey;
-(NSArray *)rawAudio;
-(NSString *)key;
-(NSString *)text;
-(AudioStreamBasicDescription)asbd;
-(NSString *)resourceKey;
@end

