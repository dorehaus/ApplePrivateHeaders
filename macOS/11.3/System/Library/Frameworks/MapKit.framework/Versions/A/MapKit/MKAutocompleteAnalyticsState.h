/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MKAutocompleteAnalyticsState : NSObject {

	NSString* _query;
	NSArray* _queryTokens;
	NSArray* _suggestionEntries;

}

@property (nonatomic,copy,readonly) NSString * query;                    //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSArray * queryTokens;               //@synthesize queryTokens=_queryTokens - In the implementation block
@property (nonatomic,readonly) NSArray * suggestionEntries;              //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
-(NSString *)query;
-(NSArray *)suggestionEntries;
-(NSArray *)queryTokens;
-(id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3 ;
@end

