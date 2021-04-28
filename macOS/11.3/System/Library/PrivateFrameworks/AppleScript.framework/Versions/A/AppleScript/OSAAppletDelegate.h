/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleScript.framework/Versions/A/AppleScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleScript/AppleScript-Structs.h>
#import <libobjc.A.dylib/NSApplicationDelegate.h>

@class NSWindow, NSImageView, NSTextField, NSString;

@interface OSAAppletDelegate : NSObject <NSApplicationDelegate> {

	ComponentInstanceRecord* _gustav;
	unsigned _script;
	char _didShowSplashDialog;
	char _shouldShowSplashDialog;
	char _canChangeSplashDialog;
	char _shouldStayOpen;
	NSWindow* _splashDialog;
	NSImageView* _splashIcon;
	NSTextField* _splashText;

}

@property (readonly) char shouldStayOpen; 
@property (readonly) char canChangeSplashDialog; 
@property (assign) char shouldShowSplashDialog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(ComponentInstanceRecord*)component;
-(void)terminate:(id)arg1 ;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)idle;
-(unsigned)script;
-(void)runScript:(id)arg1 ;
-(void)showSplashDialog;
-(char)needsSaveScript;
-(char)canSaveScript;
-(void)_setSplashFlags;
-(char)shouldShowSplashDialog;
-(char)mustShowSplashDialog;
-(id)scriptDescription;
-(void)editScriptWithErrorRange:(id)arg1 ;
-(id)scriptErrorDescriptorOfType:(unsigned)arg1 forKey:(unsigned)arg2 ;
-(id)scriptErrorStringForKey:(unsigned)arg1 ;
-(id)scriptErrorNumberForKey:(unsigned)arg1 ;
-(void)addScriptErrorKey:(unsigned)arg1 toEvent:(AEDesc*)arg2 ;
-(char)isScriptEditable;
-(id)scriptErrorWithCode:(int)arg1 ;
-(void)addScriptErrorInfoToEvent:(AEDesc*)arg1 ;
-(short)handleEvent:(const AEDesc*)arg1 withReply:(AEDesc*)arg2 error:(id*)arg3 ;
-(void)presentScriptError:(id)arg1 ;
-(void)setShouldShowSplashDialog:(char)arg1 ;
-(char)canChangeSplashDialog;
-(void)quitScript:(id)arg1 ;
-(void)editScript:(id)arg1 ;
-(char)shouldStayOpen;
@end

