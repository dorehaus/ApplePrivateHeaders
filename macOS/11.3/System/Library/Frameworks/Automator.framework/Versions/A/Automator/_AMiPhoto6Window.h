/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/_AMiPhoto6Item.h>

@class _AMiPhoto6Document, NSString;

@interface _AMiPhoto6Window : _AMiPhoto6Item

@property (assign) CGRect bounds; 
@property (readonly) char closeable; 
@property (copy,readonly) _AMiPhoto6Document * document; 
@property (readonly) char floating; 
@property (assign) long long index; 
@property (readonly) char miniaturizable; 
@property (assign) char miniaturized; 
@property (readonly) char modal; 
@property (copy) NSString * name; 
@property (readonly) char resizable; 
@property (readonly) char titled; 
@property (assign) char visible; 
@property (readonly) char zoomable; 
@property (assign) char zoomed; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(_AMiPhoto6Document *)document;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(char)titled;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(char)zoomed;
-(char)miniaturized;
-(char)miniaturizable;
-(char)resizable;
-(char)zoomable;
-(char)floating;
-(long long)id;
-(void)setZoomed:(char)arg1 ;
-(char)modal;
-(char)closeable;
-(void)setMiniaturized:(char)arg1 ;
@end

