/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate, NSArray;

@interface SearchState : NSObject {

	NSString* _query;
	NSURL* _resultURL;
	NSDate* _searchDate;
	NSArray* _parsecSearchResults;

}

@property (nonatomic,copy,readonly) NSString * query;                           //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSURL * resultURL;                                 //@synthesize resultURL=_resultURL - In the implementation block
@property (nonatomic,readonly) NSDate * searchDate;                             //@synthesize searchDate=_searchDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parsecSearchResults;              //@synthesize parsecSearchResults=_parsecSearchResults - In the implementation block
-(NSString *)query;
-(NSURL *)resultURL;
-(void)setResultURL:(NSURL *)arg1 ;
-(id)initWithQuery:(id)arg1 parsecSearchResults:(id)arg2 resultURL:(id)arg3 searchDate:(id)arg4 ;
-(NSDate *)searchDate;
-(NSArray *)parsecSearchResults;
@end

