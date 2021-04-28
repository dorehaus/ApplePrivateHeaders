/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderEnumerator.h>

@class NSFileProviderSearchQuery, NSString, CSSearchQuery;

@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator> {

	NSFileProviderSearchQuery* _fileProviderSearchQuery;
	NSString* _mountPoint;
	CSSearchQuery* _searchQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)_gatherItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_createSearchQuery;
-(id)_fpItemsFromSearchableItems:(id)arg1 ;
-(id)initWithSearchQuery:(id)arg1 mountPoint:(id)arg2 ;
@end
