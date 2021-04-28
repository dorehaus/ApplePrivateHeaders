/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Suggestions/Suggestions-Structs.h>
@class NSSet, NSArray, NSString, SGTInput, SGTSearchQueryContext;

@interface _SGTQueryContext : NSObject {

	unsigned long long queryID;
	NSSet* attributeNames;
	NSArray* additionalAttributeNames;
	NSString* inputString;
	SGTInput* input;
	NSRange NLRange;
	char isNLSearch;
	long long NLScope;
	SGTSearchQueryContext* originalQueryContext;

}
@end

