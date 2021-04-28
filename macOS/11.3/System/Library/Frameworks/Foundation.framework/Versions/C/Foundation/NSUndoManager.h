/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSUndoManager : NSObject {

	id _undoStack;
	id _redoStack;
	NSArray* _runLoopModes;
	unsigned long long _NSUndoManagerPrivate1;
	id _target;
	id _proxy;
	void* _NSUndoManagerPrivate2;
	void* _NSUndoManagerPrivate3;

}

@property (readonly) long long groupingLevel; 
@property (getter=isUndoRegistrationEnabled,readonly) char undoRegistrationEnabled; 
@property (assign) char groupsByEvent; 
@property (assign) unsigned long long levelsOfUndo; 
@property (copy) NSArray * runLoopModes; 
@property (readonly) char canUndo; 
@property (readonly) char canRedo; 
@property (getter=isUndoing,readonly) char undoing; 
@property (getter=isRedoing,readonly) char redoing; 
@property (readonly) char undoActionIsDiscardable; 
@property (readonly) char redoActionIsDiscardable; 
@property (copy,readonly) NSString * undoActionName; 
@property (copy,readonly) NSString * redoActionName; 
@property (copy,readonly) NSString * undoMenuItemTitle; 
@property (copy,readonly) NSString * redoMenuItemTitle; 
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(char)arg1 ;
+(void)_endTopLevelGroupings;
-(void)dealloc;
-(id)init;
-(id)_methodSignatureForTargetSelector:(SEL)arg1 ;
-(void)_forwardTargetInvocation:(id)arg1 ;
-(id)_undoStack;
-(void)endUndoGrouping;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(char)_endUndoGroupRemovingIfEmpty:(char)arg1 ;
-(void)disableUndoRegistration;
-(void)undoNestedGroup;
-(void)enableUndoRegistration;
-(char)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2 ;
-(void)_commitUndoGrouping;
-(void)_rollbackUndoGrouping;
-(void)_delayAutomaticTermination:(double)arg1 ;
-(NSArray *)runLoopModes;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(void)beginUndoGrouping;
-(void)_prepareEventGrouping;
-(void)_postCheckpointNotification;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)__redoCommonDoSingle:(char)arg1 ;
-(char)canRedo;
-(char)groupsByEvent;
-(void)_registerUndoObject:(id)arg1 ;
-(void)_setGroupIdentifier:(id)arg1 ;
-(char)canUndo;
-(NSString *)undoActionName;
-(id)undoMenuTitleForUndoActionName:(id)arg1 ;
-(NSString *)redoActionName;
-(id)redoMenuTitleForUndoActionName:(id)arg1 ;
-(long long)groupingLevel;
-(char)isUndoRegistrationEnabled;
-(void)setGroupsByEvent:(char)arg1 ;
-(void)setLevelsOfUndo:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfUndo;
-(void)setRunLoopModes:(NSArray *)arg1 ;
-(void)undo;
-(void)redo;
-(void)__redoSingle;
-(char)isUndoing;
-(char)isRedoing;
-(void)removeAllActions;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)registerUndoWithTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setActionName:(id)arg1 ;
-(void)setActionIsDiscardable:(char)arg1 ;
-(char)undoActionIsDiscardable;
-(char)redoActionIsDiscardable;
-(NSString *)undoMenuItemTitle;
-(NSString *)redoMenuItemTitle;
@end

