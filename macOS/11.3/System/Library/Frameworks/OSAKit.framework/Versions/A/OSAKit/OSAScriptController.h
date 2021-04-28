/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSController.h>

@class OSAScriptView, NSTextView, OSAScriptControllerPrivate, OSAScript, OSALanguage;

@interface OSAScriptController : NSController {

	OSAScriptView* scriptView;
	NSTextView* resultView;
	OSAScriptControllerPrivate* _private;

}

@property (retain) OSAScriptView * scriptView; 
@property (retain) NSTextView * resultView; 
@property (copy) OSAScript * script; 
@property (retain) OSALanguage * language; 
@property (readonly) long long scriptState; 
@property (getter=isCompiling,readonly) char compiling; 
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(OSALanguage *)language;
-(void)setLanguage:(OSALanguage *)arg1 ;
-(char)isStopped;
-(char)isRunning;
-(void)awakeFromNib;
-(id)undoManager;
-(void)setUndoManager:(id)arg1 ;
-(char)isRecording;
-(NSTextView *)resultView;
-(void)setResultView:(NSTextView *)arg1 ;
-(OSAScript *)script;
-(void)setScript:(OSAScript *)arg1 ;
-(char)isCompiling;
-(OSAScriptView *)scriptView;
-(void)setShouldCancelExecution:(char)arg1 ;
-(char)shouldCancelExecution;
-(void)setIsCompiling:(char)arg1 ;
-(void)setScriptView:(OSAScriptView *)arg1 ;
-(id)defaultTarget;
-(void)setDefaultTarget:(id)arg1 ;
-(long long)scriptState;
-(id)scriptFromSource;
-(char)compileScript:(id)arg1 withUndo:(char)arg2 ;
-(void)setScriptState:(long long)arg1 ;
-(id)runScriptReturningResult:(id)arg1 ;
-(void)compileScript:(id)arg1 ;
-(void)runScript:(id)arg1 ;
-(void)recordScript:(id)arg1 ;
-(void)stopScript:(id)arg1 ;
@end
