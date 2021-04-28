/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHRecognizerOptions : NSObject {

	char _enableCachingIfAvailable;
	char _enableGen2ModelIfAvailable;
	char _enableGen2CharacterLMIfAvailable;

}

@property (assign,nonatomic) char enableCachingIfAvailable;                      //@synthesize enableCachingIfAvailable=_enableCachingIfAvailable - In the implementation block
@property (assign,nonatomic) char enableGen2ModelIfAvailable;                    //@synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable - In the implementation block
@property (assign,nonatomic) char enableGen2CharacterLMIfAvailable;              //@synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable - In the implementation block
-(id)init;
-(char)enableCachingIfAvailable;
-(void)setEnableCachingIfAvailable:(char)arg1 ;
-(char)enableGen2ModelIfAvailable;
-(void)setEnableGen2ModelIfAvailable:(char)arg1 ;
-(char)enableGen2CharacterLMIfAvailable;
-(void)setEnableGen2CharacterLMIfAvailable:(char)arg1 ;
@end

