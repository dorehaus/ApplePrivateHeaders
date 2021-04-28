/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface IFSearch : NSObject {

	NSString* _identifier;
	NSMutableArray* _childSearches;
	NSArray* _results;
	double _searchTime;
	char _resultsRetrieved;

}
+(id)searchWithXMLElement:(id)arg1 ;
+(id)searchWithTokenDefinitions:(id)arg1 forTokenID:(id)arg2 ;
+(char)backupContainsResult:(CFStringRef)arg1 ;
-(void)dealloc;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)results;
-(void)setIdentifier:(id)arg1 ;
-(id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2 ;
-(id)initWithXMLElement:(id)arg1 ;
-(char)resultsRetrieved;
-(id)childSearches;
-(void)addChildSearch:(id)arg1 ;
-(void)setSearchTime:(double)arg1 ;
-(void)setResultsRetrieved:(char)arg1 ;
-(double)searchTime;
@end

