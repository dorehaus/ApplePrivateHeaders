/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <libobjc.A.dylib/MNNavigationServiceObserver.h>

@class NSString;

@interface MapsSuggestionsNavigationStateChangedTrigger : MapsSuggestionsBaseTrigger <MNNavigationServiceObserver> {

	BOOL _isNavigating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
@end

