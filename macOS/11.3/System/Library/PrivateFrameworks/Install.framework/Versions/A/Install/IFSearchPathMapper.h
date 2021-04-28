/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/IFSearch.h>

@class NSString, NSArray;

@interface IFSearchPathMapper : IFSearch {

	NSString* _tokenizedString;
	NSArray* _tokens;
	NSString* _tokenPrefix;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 andIFPkgPathMapping:(id)arg2 andTokenPrefix:(id)arg3 ;
-(char)containsUserLocation;
-(id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2 ;
-(id)initWithXMLElement:(id)arg1 ;
-(id)_getTokenListFromString:(id)arg1 ;
@end

