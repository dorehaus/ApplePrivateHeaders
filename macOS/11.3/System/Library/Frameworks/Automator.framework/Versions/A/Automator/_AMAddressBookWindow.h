/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <ScriptingBridge/SBObject.h>

@class NSString, _AMAddressBookDocument;

@interface _AMAddressBookWindow : SBObject

@property (copy,readonly) NSString * name; 
@property (assign) long long index; 
@property (assign) CGRect bounds; 
@property (readonly) char closeable; 
@property (readonly) char miniaturizable; 
@property (assign) char miniaturized; 
@property (readonly) char resizable; 
@property (assign) char visible; 
@property (readonly) char zoomable; 
@property (assign) char zoomed; 
@property (copy,readonly) _AMAddressBookDocument * document; 
-(NSString *)name;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(_AMAddressBookDocument *)document;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(char)zoomed;
-(char)miniaturized;
-(char)miniaturizable;
-(char)resizable;
-(char)zoomable;
-(void)delete;
-(long long)id;
-(void)setZoomed:(char)arg1 ;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(id)arg2 ;
-(char)closeable;
-(void)setMiniaturized:(char)arg1 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
@end

