/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class GFGraph, GFGraphEditorView, GFNode, NSPathControl;

@interface GFGraphPathView : NSView {

	GFGraph* _rootGraph;
	GFGraphEditorView* _graphEditor;
	GFNode* _currentNode;
	NSPathControl* _control;
	void** _unused[4];

}
+(char)_isGraph:(id)arg1 ;
-(void)dealloc;
-(void)setPath:(id)arg1 ;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_finishInitialization;
-(id)nodes;
-(id)currentNode;
-(void)setCurrentNode:(id)arg1 ;
-(id)rootGraph;
-(void)_setCurrentNode:(id)arg1 ;
-(void)_graphUpdated:(id)arg1 ;
-(void)__graphDidChange:(id)arg1 ;
-(id)graphEditor;
-(void)setRootGraph:(id)arg1 ;
-(void)setGraphEditor:(id)arg1 ;
-(char)_getPathFromGraph:(id)arg1 toNode:(id)arg2 withArray:(id)arg3 ;
-(id)_setPathWithArray:(id)arg1 ;
-(void)__hierarchyControlAction:(id)arg1 ;
@end

