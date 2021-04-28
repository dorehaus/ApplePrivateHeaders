/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, NSString, TIKeyboardTouchEvent, NSArray;

@interface TISKPathEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;
	NSString* _candidateString;
	TIKeyboardTouchEvent* _pathTouchUp;
	NSArray* _allTouches;

}
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(char)isMissingATouch;
-(id)init:(id)arg1 candidate:(id)arg2 allTouches:(id)arg3 emojiSearchMode:(char)arg4 order:(long long)arg5 ;
-(double)countPathPauses:(id)arg1 ;
@end
