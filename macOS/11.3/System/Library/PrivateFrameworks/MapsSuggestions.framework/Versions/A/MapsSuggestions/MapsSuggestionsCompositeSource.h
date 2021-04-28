/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableSet, NSMutableDictionary, NSObject, MapsSuggestionsSuppressor, NSString;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {

	NSMutableSet* _sources;
	NSMutableDictionary* _nextUpdateTimes;
	Queue _queue;
	NSObject*<OS_dispatch_source> _updateTimer;
	MapsSuggestionsSuppressor* _suppressor;
	char _running;

}

@property (assign) char running;                                                             //@synthesize running=_running - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isEnabled;
+(unsigned long long)disposition;
-(void)dealloc;
-(void)start;
-(void)stop;
-(char)running;
-(id)children;
-(void)setRunning:(char)arg1 ;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(char)canProduceEntriesOfType:(long long)arg1 ;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(char)attachSource:(id)arg1 ;
-(char)detachSource:(id)arg1 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
-(char)addChildSource:(id)arg1 ;
-(char)removeChildSource:(id)arg1 ;
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
-(void)test_sync;
-(double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2 ;
-(void)test_resetSuppressions;
@end

