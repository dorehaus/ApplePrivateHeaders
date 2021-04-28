/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface MapsSuggestionsFakeManager : NSObject <MapsSuggestionsSourceDelegate> {

	ReadWriteQueue _readwrite;
	NSMutableArray* _allCurrentEntries;
	NSMutableDictionary* _currentEntriesPerSource;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (retain,readonly) NSMutableArray * allCurrentEntries; 
@property (retain,readonly) NSMutableDictionary * currentEntriesPerSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)waitWithTimeout:(double)arg1 ;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(char)attachSource:(id)arg1 ;
-(char)detachSource:(id)arg1 ;
-(NSMutableArray *)allCurrentEntries;
-(NSMutableDictionary *)currentEntriesPerSource;
-(void)prepareWait;
@end

