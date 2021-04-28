/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying> {

	float _version;
	NSString* _name;
	NSString* _identifier;
	NSArray* _supportedLanguages;
	long long _voiceSize;
	long long _gender;
	long long _age;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) long long voiceSize;                       //@synthesize voiceSize=_voiceSize - In the implementation block
@property (assign,nonatomic) float version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long gender;                          //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long age;                             //@synthesize age=_age - In the implementation block
+(void)initialize;
+(char)supportsSecureCoding;
+(void)didUpdateSpeechVoices;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(float)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(void)setVersion:(float)arg1 ;
-(long long)age;
-(void)setAge:(long long)arg1 ;
-(NSArray *)supportedLanguages;
-(void)setSupportedLanguages:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 supportedLanguages:(id)arg3 ;
-(long long)voiceSize;
-(void)setVoiceSize:(long long)arg1 ;
@end

