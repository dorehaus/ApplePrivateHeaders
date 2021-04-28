/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/Versions/A/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/SGEventSuggestionBase.h>
#import <libobjc.A.dylib/SuggestedEventPopoverControllerDelegate.h>

@class NSImage, NSString;

@interface SGEventSuggestion : SGEventSuggestionBase <SuggestedEventPopoverControllerDelegate> {

	NSImage* _calendarImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarImage;
-(id)suggestionPrimaryAction;
-(id)suggestionAttributedSubtitle;
-(id)suggestionImage;
-(id)suggestionPrimaryActionViewController;
-(void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(char)arg2 ;
-(void)cancelSuggestedEventPopoverController:(id)arg1 ;
-(void)suggestedEventPopoverController:(id)arg1 wantsToCommitSuggestedEvent:(id)arg2 asEvent:(id)arg3 ;
-(void)suggestedEventPopoverController:(id)arg1 wantsToIgnoreSuggestedEvent:(id)arg2 ;
@end

