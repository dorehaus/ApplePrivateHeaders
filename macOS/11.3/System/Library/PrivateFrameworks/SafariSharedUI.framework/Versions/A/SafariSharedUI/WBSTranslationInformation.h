/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSTranslationInformation : NSObject {

	NSString* _urlString;
	NSString* _sourceLanguage;
	NSString* _targetLanguage;

}

@property (nonatomic,copy,readonly) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceLanguage;              //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetLanguage;              //@synthesize targetLanguage=_targetLanguage - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)init;
-(NSString *)urlString;
-(NSString *)sourceLanguage;
-(NSString *)targetLanguage;
-(id)initWithURLString:(id)arg1 sourceLanguage:(id)arg2 targetLanguage:(id)arg3 ;
@end

