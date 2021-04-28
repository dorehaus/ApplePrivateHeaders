/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSTouch, NSGestureRecognizer, NSControl, NSMutableArray, NSString;

@interface NSFunctionRowActionTracker : NSObject {

	NSTouch* _touch;
	NSGestureRecognizer* _recognizer;
	NSControl* _control;
	NSMutableArray* _viewHierarchy;
	NSString* _uniqueIdentifier;
	id _originalTarget;
	SEL _originalAction;

}

@property (retain) NSTouch * touch; 
@property (retain) NSGestureRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (retain) NSControl * control;                           //@synthesize control=_control - In the implementation block
@property (retain) id originalTarget;                             //@synthesize originalTarget=_originalTarget - In the implementation block
@property (assign) SEL originalAction;                            //@synthesize originalAction=_originalAction - In the implementation block
+(id)_titleForElement:(id)arg1 ;
+(CGRect)_frameForElement:(id)arg1 ;
-(void)dealloc;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)setRecognizer:(NSGestureRecognizer *)arg1 ;
-(NSGestureRecognizer *)recognizer;
-(void)setOriginalAction:(SEL)arg1 ;
-(void)_ns_logAction_ns:(id)arg1 ;
-(void)_log;
-(NSTouch *)touch;
-(void)setTouch:(NSTouch *)arg1 ;
-(NSControl *)control;
-(void)setControl:(NSControl *)arg1 ;
-(id)originalTarget;
-(void)setOriginalTarget:(id)arg1 ;
-(SEL)originalAction;
@end

