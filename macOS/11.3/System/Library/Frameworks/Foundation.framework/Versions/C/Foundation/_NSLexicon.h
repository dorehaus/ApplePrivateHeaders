/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSData, NSString;

@interface _NSLexicon : NSObject {

	NSData* _data;
	NSString* _languageCode;

}

@property (nonatomic,copy,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
+(id)systemLexiconForLanguageCode:(id)arg1 ;
-(void)dealloc;
-(NSString *)languageCode;
-(id)initWithContentsOfURL:(id)arg1 languageCode:(id)arg2 error:(id*)arg3 ;
-(id)lemmasForWord:(id)arg1 ;
-(id)_lemmasInLikelihoodOrderForWord:(id)arg1 matchingWordAttributes:(SCD_Struct_NS33)arg2 ;
@end
