/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class GFInspectorWindow, NSPopUpButton, NSTextField, GFList, NSView, GFGraphEditorView, GFNode, GFGraphView;

@interface GFGraphEditorInspector : NSObject {

	GFInspectorWindow* _window;
	NSPopUpButton* _menu;
	NSTextField* _text;
	GFList* _views;
	GFList* _viewSizes;
	NSView* _currentView;
	GFGraphEditorView* _graphEditor;
	GFNode* _targetNode;
	GFGraphView* _targetGraphView;
	CFDictionaryRef _savedDimensions;
	void** _unused[2];

}
+(id)sharedInspector;
-(void)dealloc;
-(id)init;
-(char)isVisible;
-(id)_window;
-(void)windowWillClose:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)hide;
-(void)show;
-(id)graphEditor;
-(void)setGraphEditor:(id)arg1 ;
-(void)_loadViews:(id)arg1 clearUndoManager:(char)arg2 ;
-(void)_reloadInspector;
-(void)__invalidateInspector:(id)arg1 ;
-(void)_menuSelect:(id)arg1 ;
-(void)_previousPanel:(id)arg1 ;
-(void)_nextPanel:(id)arg1 ;
@end
