/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsTrigger.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, MapsSuggestionsObservers;

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	MapsSuggestionsObservers* _observers;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 ;
-(id)dispatchQueue;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(char)hasObservers;
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(NSString *)uniqueName;
-(void)triggerMyObservers;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
@end

