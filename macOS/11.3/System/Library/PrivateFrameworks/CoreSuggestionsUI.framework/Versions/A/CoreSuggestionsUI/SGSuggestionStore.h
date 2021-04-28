/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/Versions/A/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/SGList.h>
#import <libobjc.A.dylib/SGListDelegate.h>

@protocol SGSuggestionDelegate;
@class NSMutableArray, NSArray, NSString;

@interface SGSuggestionStore : SGList <SGListDelegate> {

	NSMutableArray* _suggestions;
	long long _notificationsLockCount;
	char _modified;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(void)addSuggestion:(id)arg1 ;
-(void)removeSuggestion:(id)arg1 ;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(void)list:(id)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)list:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)sectionWithItem:(id)arg1 ;
-(void)updateSuggestion:(id)arg1 ;
-(void)lockNotifications;
-(void)unlockNotifications;
@end
