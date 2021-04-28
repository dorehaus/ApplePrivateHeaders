/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Versions/A/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TTSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding> {

	char _neural;
	char _isInstalled;
	char _isBuiltInVoice;
	NSString* _name;
	NSString* _identifier;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	NSString* _voicePath;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) long long gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;              //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) char neural;                      //@synthesize neural=_neural - In the implementation block
@property (nonatomic,readonly) char isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) char isBuiltInVoice;              //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (nonatomic,retain) NSString * voicePath;               //@synthesize voicePath=_voicePath - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(char)isInstalled;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)gender;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)languages;
-(long long)footprint;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(char)arg5 isBuiltIn:(char)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8 neural:(char)arg9 ;
-(void)setVoicePath:(NSString *)arg1 ;
-(NSString *)voicePath;
-(char)neural;
-(char)isBuiltInVoice;
@end
