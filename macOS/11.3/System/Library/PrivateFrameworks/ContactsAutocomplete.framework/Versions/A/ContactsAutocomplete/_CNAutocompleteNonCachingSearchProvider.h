/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearchProvider.h>

@class NSString;

@interface _CNAutocompleteNonCachingSearchProvider : NSObject <CNAutocompleteSearchProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localSearch;
-(id)recentsSearch;
-(id)suggestionsSearch;
-(id)duetSearch;
-(id)localExtensionSearches;
-(id)directoryServerSearch;
-(id)calendarServerSearch;
@end

