/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SFSSVoiceAsset : NSObject {

	NSString* _assetPath;
	NSString* _name;
	NSString* _language;
	long long _gender;
	long long _footprint;
	long long _type;
	long long _contentVersion;

}

@property (nonatomic,copy) NSString * assetPath;                      //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long gender;                      //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;                   //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long contentVersion;              //@synthesize contentVersion=_contentVersion - In the implementation block
+(id)generateVoiceAssetFromVoiceKeyString:(id)arg1 ;
-(id)init:(id)arg1 gender:(long long)arg2 name:(id)arg3 type:(long long)arg4 footprint:(long long)arg5 contentVersion:(long long)arg6 ;
-(NSString *)name;
-(long long)type;
-(NSString *)language;
-(id)key;
-(long long)gender;
-(long long)contentVersion;
-(long long)footprint;
-(void)setAssetPath:(NSString *)arg1 ;
-(NSString *)assetPath;
@end
