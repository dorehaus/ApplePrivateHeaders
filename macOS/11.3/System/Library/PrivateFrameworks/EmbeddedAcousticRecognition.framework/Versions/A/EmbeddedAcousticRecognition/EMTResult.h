/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLocale, NSArray, NSString;

@interface EMTResult : NSObject <NSCopying> {

	char _lowConfidence;
	float _confidence;
	NSLocale* _locale;
	NSArray* _tokens;
	NSString* _metaInfo;

}

@property (nonatomic,readonly) NSLocale * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                 //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) float confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) char lowConfidence;               //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,readonly) NSString * metaInfo;              //@synthesize metaInfo=_metaInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSLocale *)locale;
-(float)confidence;
-(NSArray *)tokens;
-(char)lowConfidence;
-(id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(char)arg4 metaInfo:(id)arg5 ;
-(NSString *)metaInfo;
@end
