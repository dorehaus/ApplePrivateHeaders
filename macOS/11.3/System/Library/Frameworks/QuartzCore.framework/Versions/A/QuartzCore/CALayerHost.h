/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
@property (assign) char inheritsSecurity; 
@property (assign) char preservesFlip; 
+(char)_hasRenderLayerSubclass;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(char)preservesFlip;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned)contextId;
-(void)setContextId:(unsigned)arg1 ;
-(void)setPreservesFlip:(char)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)setInheritsSecurity:(char)arg1 ;
-(char)inheritsSecurity;
@end

