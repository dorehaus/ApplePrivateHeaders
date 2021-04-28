/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NLLexiconEntry : NSObject {

	NSString* _string;
	unsigned _tokenID;
	unsigned long long _flags;
	double _probability;

}

@property (copy,readonly) NSString * string; 
@property (readonly) unsigned long long flags; 
@property (readonly) double probability; 
+(id)entryWithString:(id)arg1 tokenID:(unsigned)arg2 flags:(unsigned long long)arg3 probability:(double)arg4 ;
-(unsigned long long)flags;
-(NSString *)string;
-(unsigned)tokenID;
-(double)probability;
-(id)initWithString:(id)arg1 tokenID:(unsigned)arg2 flags:(unsigned long long)arg3 probability:(double)arg4 ;
@end

