/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface INIntentSummary : NSObject {

	NSString* _intentIdentifier;
	NSString* _originatingBundleId;
	NSString* _languageCode;
	unsigned long long _containedProperties;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * intentIdentifier;                    //@synthesize intentIdentifier=_intentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originatingBundleId;                 //@synthesize originatingBundleId=_originatingBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) unsigned long long containedProperties;              //@synthesize containedProperties=_containedProperties - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)languageCode;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)originatingBundleId;
-(id)initWithIntentIdentifier:(id)arg1 originatingBundleId:(id)arg2 languageCode:(id)arg3 ;
-(NSString *)intentIdentifier;
-(unsigned long long)containedProperties;
@end

